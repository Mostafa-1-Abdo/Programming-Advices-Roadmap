using Contacts.Logic.Contacts;
using Contacts.Logic.Countries;
using System;
using System.Data;
using System.Drawing;
using System.Windows.Forms;

namespace WinForm_Appliaction
{
    public partial class frmAddUpdateContact : Form
    {
        private enum enMode : byte
        {
            AddNew, Update
        }

        private enMode _Mode;
        private int _ID;
        private clContact _Contact;

        public frmAddUpdateContact()
        {
            InitializeComponent();

            _Mode = enMode.AddNew;
            _ID = 0;
        }
        public frmAddUpdateContact(int ID)
        {
            InitializeComponent();

            _Mode = enMode.Update;
            _ID = ID;
        }

        private void frmAddContact_Load(object sender, EventArgs e)
        {
            _FillComboBoxWithCountries();
            _DesignForm();
        }
        private void _FillComboBoxWithCountries()
        {
            cb_Country.DataSource = clCountry.GetAllCountries();
            cb_Country.DisplayMember = "Name"; 
            cb_Country.ValueMember = "ID"; 
        }

        private void _LoadContactData()
        {
            _Contact = clContact.Find(_ID);

            if (_Contact == null)
            {
                MessageBox.Show("No contact found with ID = " + _ID, "Contact Not Found", MessageBoxButtons.OK, MessageBoxIcon.Exclamation);
                this.Close();
                return;
            }

            lb_ID.Text = _Contact.ID.ToString();
            tb_FirstName.Text = _Contact.FirstName;
            tb_LastName.Text = _Contact.LastName;
            dtp_DateOfBirth.Value = _Contact.DateOfBirth;
            tb_Address.Text = _Contact.Address;
            tb_Phone.Text = _Contact.Phone;
            tb_Email.Text = _Contact.Email;
            cb_Country.SelectedValue = _Contact.CountryID;
            if (!string.IsNullOrEmpty(_Contact.ImagePath) && System.IO.File.Exists(_Contact.ImagePath))
            {
                pb_Image.ImageLocation = _Contact.ImagePath;
                llb_RemoveImage.Visible = true;
            }
            else
            {
                pb_Image.Image = null;
                llb_RemoveImage.Visible = false;
            }
        }
        private void _DesignForm()
        {
            if (_Mode == enMode.AddNew)
            {
                Text = "Add Contact";
                lb_Title.Text = "Add New Contact";
                cb_Country.SelectedItem = null;
                _Contact = new clContact();
                llb_RemoveImage.Visible = false;
            }
            else
            {
                Text = "Update Contact";
                lb_Title.Text = "Update Contact";
                llb_RemoveImage.Visible = true;
                _LoadContactData();
            }
        }

        //Image
        private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            if (ofd_SetImage.ShowDialog() == DialogResult.OK)
            {
                pb_Image.ImageLocation = ofd_SetImage.FileName;
                llb_RemoveImage.Visible = true;
            }
        }

        private void llb_RemoveImage_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            ofd_SetImage.FileName = string.Empty;
            pb_Image.Image = null;
            llb_RemoveImage.Visible = false;
        }

        //Validations
        private void tb_Validating(object sender, System.ComponentModel.CancelEventArgs e)
        {
            Control control = (Control)sender;

            if (control.Text == string.Empty)
            {
                errorProvider1.SetError(control, "The field cannot be left empty.");
            }
        }

        private void dtp_DateOfBirth_Validating(object sender, System.ComponentModel.CancelEventArgs e)
        {
            if (dtp_DateOfBirth.Value == DateTime.Today)
            {
                errorProvider1.SetError(dtp_DateOfBirth, "Birth date must be in the past!");
            }
        }

        //Buttons
        private void bt_Close_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void _ShowSaveResult(bool successful)
        {
            if (successful)
            {
                string text = (_Mode == enMode.AddNew)? "Contact saved successfully.": "Contact details updated successfully.";

                MessageBox.Show(text, "Success", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
            else
            {
                MessageBox.Show("Failed to save contact. Please check your inputs and try again.", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }
        private void bt_Save_Click(object sender, EventArgs e)
        {
            if (cb_Country.SelectedValue == null)
            {
                MessageBox.Show("Please select a valid country.", "Validation Error", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                return;
            }

            _Contact.FirstName = tb_FirstName.Text.Trim();
            _Contact.LastName = tb_LastName.Text.Trim();
            _Contact.DateOfBirth = dtp_DateOfBirth.Value;
            _Contact.Address = tb_Address.Text.Trim();
            _Contact.Phone = tb_Phone.Text.Trim();
            _Contact.Email = tb_Email.Text.Trim();
            _Contact.ImagePath = pb_Image.ImageLocation; 
            _Contact.CountryID = Convert.ToInt32(cb_Country.SelectedValue);

            if (_Contact.Save())
            {
                _ShowSaveResult(true);

                _Mode = enMode.Update;
                Text = "Update Contact";
                lb_Title.Text = "Update Contact";
                lb_ID.Text = _Contact.ID.ToString();

            }
            else
            {
                _ShowSaveResult(false);
            }
        }
    }
}