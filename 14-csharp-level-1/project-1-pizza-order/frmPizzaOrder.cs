using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Project1_Pizza
{
    public partial class FormPizzaOrder : Form
    {
        public FormPizzaOrder()
        {
            InitializeComponent();

        }

        private void MainForm_Load(object sender, EventArgs e)
        {
            ResetForm();
        }
        //Size Group
        private void RBSmall_CheckedChanged(object sender, EventArgs e)
        {
            LSizeSelected.Text = RBSmall.Text;

            UpdateTotalPrice();
        }

        private void RBMeduim_CheckedChanged(object sender, EventArgs e)
        {
            LSizeSelected.Text = RBMedium.Text;

            UpdateTotalPrice();
        }

        private void RBLarg_CheckedChanged(object sender, EventArgs e)
        {
            LSizeSelected.Text = RBLarg.Text;

            UpdateTotalPrice();
        }

        //Crust Type Group
        private void RBThin_CheckedChanged(object sender, EventArgs e)
        {
            LCrustTypeSelected.Text = RBThin.Text;
            UpdateTotalPrice();
        }

        private void RBThink_CheckedChanged(object sender, EventArgs e)
        {
            LCrustTypeSelected.Text = RBThink.Text;
            UpdateTotalPrice();
        }

        //Toppings Group
        private void CBExtraChees_CheckedChanged(object sender, EventArgs e)
        {
            UpdateTotalPrice();
            UpdateToppingsOptions();
        }

        private void CBMushrooms_CheckedChanged(object sender, EventArgs e)
        {
            UpdateTotalPrice();
            UpdateToppingsOptions();
        }

        private void CBTomatoes_CheckedChanged(object sender, EventArgs e)
        {
            UpdateTotalPrice();
            UpdateToppingsOptions();
        }

        private void CBOnion_CheckedChanged(object sender, EventArgs e)
        {
            UpdateTotalPrice();
            UpdateToppingsOptions();
        }

        private void CBOlives_CheckedChanged(object sender, EventArgs e)
        {
            UpdateTotalPrice();
            UpdateToppingsOptions();
        }

        private void CBGreenPeppers_CheckedChanged(object sender, EventArgs e)
        {
            UpdateTotalPrice();
            UpdateToppingsOptions();
        }

        //Where To Eat Group
        private void RBEatIn_CheckedChanged(object sender, EventArgs e)
        {
            LWhereToEatSelected.Text = RBEatIn.Text;
            UpdateTotalPrice();
        }

        private void RBTakeOut_CheckedChanged(object sender, EventArgs e)
        {
            LWhereToEatSelected.Text = RBTakeOut.Text;
            UpdateTotalPrice();
        }

        //Order Summery Group
        private void UpdateToppingsOptions()
        {
            List<string> ToppingsSelected = new List<string>();

            if (CBExtraChees.Checked)
                ToppingsSelected.Add("Extra Chees");
            if (CBMushrooms.Checked)
                ToppingsSelected.Add("Mushrooms");
            if (CBTomatoes.Checked)
                ToppingsSelected.Add("Tomatoes");
            if (CBOnion.Checked)
                ToppingsSelected.Add("Onion");
            if (CBOlives.Checked)
                ToppingsSelected.Add("Olives");

            LToppingsSelected.Text = ToppingsSelected.Count != 0 ? string.Join(", ", ToppingsSelected) : "No Toppings";
        }

        private double GetSizePrise()
        {
            if (RBSmall.Checked)
                return Convert.ToDouble(RBSmall.Tag);
            else if (RBMedium.Checked)
                return Convert.ToDouble(RBMedium.Tag);
            else
                return Convert.ToDouble(RBLarg.Tag);
        }
        private double GetCrustTypePrise()
        {
            if (RBThin.Checked)
                return Convert.ToDouble(RBThin.Tag);
            else
                return Convert.ToDouble(RBThink.Tag);
        }
        private double GetToppingsPrise()
        {
            double Price = 0;

            if (CBExtraChees.Checked)
                Price += Convert.ToDouble(CBExtraChees.Tag);
            if (CBMushrooms.Checked)
                Price += Convert.ToDouble(CBMushrooms.Tag);
            if (CBTomatoes.Checked)
                Price += Convert.ToDouble(CBTomatoes.Tag);
            if (CBOnion.Checked)
                Price += Convert.ToDouble(CBOnion.Tag);
            if (CBOlives.Checked)
                Price += Convert.ToDouble(CBOlives.Tag);

            return Price;
        }
        private void UpdateTotalPrice()
        {
            double Price = GetSizePrise() + GetCrustTypePrise() + GetToppingsPrise();

            LPrice.Text = "$" + Price.ToString();
        }

        //Buttons Group
        private void ResetForm()
        {
            RBSmall.Checked = false;
            RBMedium.Checked = true;
            RBLarg.Checked = false;

            RBThin.Checked = true;
            RBThink.Checked = false;

            CBExtraChees.Checked = false;
            CBMushrooms.Checked = false;
            CBTomatoes.Checked = false;
            CBOnion.Checked = false;
            CBOlives.Checked = false;

            RBEatIn.Checked = true;
            RBTakeOut.Checked = false;
        }
        private void BResetForm_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Are you sure?", "Reset", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
                ResetForm();
        }

        private void BOrderPizza_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Confirm Order?", "Confirm", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                MessageBox.Show("Order Placed Successfully", "Success", MessageBoxButtons.OK, MessageBoxIcon.Information);
                GBSize.Enabled = false;
                GBCrustType.Enabled = false;
                GBToppings.Enabled = false;
                GBWhereEat.Enabled = false;

                BResetForm.Enabled = false;
                BOrderPizza.Enabled = false;
                BOrderCancel.Enabled = true;
            }
        }

        private void BOrderCancel_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Cancel Order?", "Cancel", MessageBoxButtons.YesNo, MessageBoxIcon.Warning) == DialogResult.Yes)
            {
                GBSize.Enabled = true;
                GBCrustType.Enabled = true;
                GBToppings.Enabled = true;
                GBWhereEat.Enabled = true;

                BResetForm.Enabled = true;
                BOrderPizza.Enabled = true;
                BOrderCancel.Enabled = false;
            }
        }
    }
}
