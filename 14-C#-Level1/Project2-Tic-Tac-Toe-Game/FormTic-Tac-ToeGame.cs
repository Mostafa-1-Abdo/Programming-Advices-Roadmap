using Project2_Tic_Tac_Toe_Game.Properties;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Project2_Tic_Tac_Toe_Game
{
    public partial class FormGame : Form
    {
        private enum enPlayer : byte
        {
            Player1 = 1, Player2 = 2
        }
        private enum enWinner : byte
        {
            Player1, Player2, Draw
        }

        private enPlayer Player = enPlayer.Player1;
        private enWinner? Winner = null;

        public FormGame()
        {
            InitializeComponent();
        }

        private void FormGame_Paint(object sender, PaintEventArgs e)
        {
            Color White = Color.FromArgb(255, 255, 255, 255);
            Pen Pen = new Pen(White);
            Pen.Width = 10;

            Pen.StartCap = System.Drawing.Drawing2D.LineCap.Square;
            Pen.EndCap = System.Drawing.Drawing2D.LineCap.Square;

            e.Graphics.DrawLine(Pen, 300, 100, 300, 400);
            e.Graphics.DrawLine(Pen, 450, 100, 450, 400);
            e.Graphics.DrawLine(Pen, 600, 100, 600, 400);
            e.Graphics.DrawLine(Pen, 750, 100, 750, 400);

            e.Graphics.DrawLine(Pen, 300, 100, 750, 100);
            e.Graphics.DrawLine(Pen, 300, 200, 750, 200);
            e.Graphics.DrawLine(Pen, 300, 300, 750, 300);
            e.Graphics.DrawLine(Pen, 300, 400, 750, 400);
        }

        private void PB_Click(object sender, EventArgs e)
        {
            Update((PictureBox)sender);
        }

        private void EndGame(enWinner Winner)
        {
            string MessageBoxText = null;
            switch (Winner)
        {
                case enWinner.Player1:
                    MessageBoxText = "The winner is player 1";
                    break;

                case enWinner.Player2:
                   MessageBoxText = "The winner is player 2";
                    break;

                case enWinner.Draw:
                    MessageBoxText = "Draw";
                    break;

            }
            MessageBox.Show(MessageBoxText, "Game Over", MessageBoxButtons.OK, MessageBoxIcon.Information);

            LPlayerTurn.Text = "Game Over";
            LWinner.Text = (Winner == enWinner.Draw) ? "Draw" : Winner == enWinner.Player1 ? "Player 1" : "Player 2";

            PB1.Enabled = false;
            PB2.Enabled = false;
            PB3.Enabled = false;
            PB4.Enabled = false;
            PB5.Enabled = false;
            PB6.Enabled = false;
            PB7.Enabled = false;
            PB8.Enabled = false;
            PB9.Enabled = false;
        }
        private bool CheckProbability(PictureBox PB1, PictureBox PB2, PictureBox PB3)
        {
            if ((string)PB1.Tag != "?" && PB1.Tag == PB2.Tag && PB1.Tag == PB3.Tag)
            {
                PB1.BackColor = Color.GreenYellow;
                PB2.BackColor = Color.GreenYellow;
                PB3.BackColor = Color.GreenYellow;

                return true;
            }

            return false;
        }
        private enWinner? CheckWinner()
        {
            if (CheckProbability(PB1, PB2, PB3))
                return Player != enPlayer.Player1 ? enWinner.Player1 : enWinner.Player2;

            if (CheckProbability(PB4, PB5, PB6))
                return Player != enPlayer.Player1 ? enWinner.Player1 : enWinner.Player2;

            if (CheckProbability(PB7, PB8, PB9))
                return Player != enPlayer.Player1 ? enWinner.Player1 : enWinner.Player2;

            if (CheckProbability(PB1, PB4, PB7))
                return Player!= enPlayer.Player1 ? enWinner.Player1 : enWinner.Player2;

            if (CheckProbability(PB2, PB5, PB8))
                return Player != enPlayer.Player1 ? enWinner.Player1 : enWinner.Player2;

            if (CheckProbability(PB3, PB6, PB9))
                return Player != enPlayer.Player1 ? enWinner.Player1 : enWinner.Player2;

            if (CheckProbability(PB1, PB5, PB9))
                return Player != enPlayer.Player1 ? enWinner.Player1 : enWinner.Player2;

            if (CheckProbability(PB3, PB5, PB7))
                return Player != enPlayer.Player1 ? enWinner.Player1 : enWinner.Player2;

            if ((string)PB1.Tag != "?" && (string)PB2.Tag != "?" && (string)PB3.Tag != "?" && (string)PB4.Tag != "?" && (string)PB5.Tag != "?" && (string)PB6.Tag != "?" && (string)PB7.Tag != "?" && (string)PB8.Tag != "?" && (string)PB9.Tag != "?")
                return enWinner.Draw;


            return null;


        }
        private void Update(PictureBox PB)
        {
            if (Player == enPlayer.Player1)
            {
                PB.Image = Resources.X;
                PB.Tag = "X";
                Player = enPlayer.Player2;
                LPlayerTurn.Text = "Player 1";
            }
            else
            {
                PB.Image = Resources.O;
                PB.Tag = "O";
                Player = enPlayer.Player1;
                LPlayerTurn.Text = "Player 2";
            }
            PB.Enabled = false;

            Winner = CheckWinner();
            if (Winner != null)
                EndGame(Winner.Value);
        }

        private void RestartPB(PictureBox PB)
        {
            PB.Image = Resources.QuestionMark;
            PB.Enabled = true;
            PB.BackColor = Color.Black;
            PB.Tag = "?";
        }
        private void BRestartGame_Click(object sender, EventArgs e)
        {
            RestartPB(PB1);
            RestartPB(PB2);
            RestartPB(PB3);
            RestartPB(PB4);
            RestartPB(PB5);
            RestartPB(PB6);
            RestartPB(PB7);
            RestartPB(PB8);
            RestartPB(PB9);

            Player = enPlayer.Player1;
            LPlayerTurn.Text = "Player 1";
            LWinner.Text = "In Progress";
        }
    }
}
