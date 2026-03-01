using PictureBox_Exercise.Properties;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace PictureBox_Exercise
{
    public partial class FormPictureBoxExercise : Form
    {
        public FormPictureBoxExercise()
        {
            InitializeComponent();
        }

        private void FormPictureBoxExercise_Load(object sender, EventArgs e)
        {
            RBBoy.Checked = true;
        }

        private void RB_CheckedChanged(object sender, EventArgs e)
        {
            LTitle.Text = ((RadioButton)sender).Text;

            switch (LTitle.Text)
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
