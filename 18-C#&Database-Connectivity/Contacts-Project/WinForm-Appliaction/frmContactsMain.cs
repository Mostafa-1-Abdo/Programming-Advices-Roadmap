using Contacts.Logic.Contacts;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WinForm_Appliaction
{
    public partial class frmContactsMain : Form
    {
        public frmContactsMain()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            _FillGridViewWithContacts();
        }

        //DataGridView
        private void _FillGridViewWithContacts()
        {
            dgv_Contacts.DataSource = clContact.GetAllContacts();
        }

        //Button
        private void bt_AddContact_Click(object sender, EventArgs e)
        {
            frmAddUpdateContact Contact = new frmAddUpdateContact();
            Contact.ShowDialog();

            _FillGridViewWithContacts();
        }

        //Context Menu Strip
        private void updateToolStripMenuItem_Click(object sender, EventArgs e)
        {
            frmAddUpdateContact Contact = new frmAddUpdateContact((int)dgv_Contacts.CurrentRow.Cells["ID"].Value);
            Contact.ShowDialog();

            _FillGridViewWithContacts();
        }

        private void deleteToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (dgv_Contacts.Rows.Count == 0 || dgv_Contacts.CurrentRow == null)
                return;

            if (MessageBox.Show($"Are you sure you want to delete this contact?", "Confirm Delete", MessageBoxButtons.YesNo, MessageBoxIcon.Warning) == DialogResult.Yes)
            {
                if (clContact.Delete((int)dgv_Contacts.CurrentRow.Cells["ID"].Value))
                {
                    MessageBox.Show("Contact deleted successfully.", "Success ", MessageBoxButtons.OK, MessageBoxIcon.Information);

                    _FillGridViewWithContacts();
                }
                else
                    MessageBox.Show("Failed to delete the contact.", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void refreshToolStripMenuItem_Click(object sender, EventArgs e)
        {
            _FillGridViewWithContacts();
        }
    }
}
