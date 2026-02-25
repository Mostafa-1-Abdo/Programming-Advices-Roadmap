using Exercise2_ComboBox.Properties;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Exercise2_ComboBox
{
    public partial class FormComboBoxExercise : Form
    {
        public FormComboBoxExercise()
        {
            InitializeComponent();
        }

        private void FormComboBoxExercise_Load(object sender, EventArgs e)
        {
            CBPicture.SelectedIndex = 0;
        }

        private void CBPicture_SelectedIndexChanged(object sender, EventArgs e)
        {
            LTitle.Text = CBPicture.Text;

            switch (CBPicture.Text)
            {
                case "Boy":
                    PB.Image = Resources.Boy;
                    break;

                case "Girl":
                    PB.Image = Resources.Girl;
                    break;

                case "Book":
                    PB.Image = Resources.Book;
                    break;

                case "Pen":
                    PB.Image = Resources.Pen;
                    break;
            }
        }
    }
}
