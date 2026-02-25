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

        private void RBBoy_CheckedChanged(object sender, EventArgs e)
        {
            LTitle.Text = RBBoy.Text;

            PB.Image = Resources.Boy;
        }

        private void RBGirl_CheckedChanged(object sender, EventArgs e)
        {
            LTitle.Text = RBGirl.Text;

            PB.Image = Resources.Girl;
        }

        private void RBBook_CheckedChanged(object sender, EventArgs e)
        {
            LTitle.Text = RBBook.Text;

            PB.Image = Resources.Book;
        }

        private void RBPen_CheckedChanged(object sender, EventArgs e)
        {
            LTitle.Text = RBPen.Text;

            PB.Image = Resources.Pen;
        }
    }
}
