using Project2_Tic_Tac_Toe_Game.Properties;
using System;
using System.Drawing;
using System.Windows.Forms;
using System.Drawing.Drawing2D;

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
            InProgress, Player1, Player2, Draw
        }

        private enPlayer Player = enPlayer.Player1;
        private enWinner Winner = enWinner.InProgress;

        public FormGame()
        {
            InitializeComponent();
        }

        private void FormGame_Paint(object sender, PaintEventArgs e)
        {
            Pen Pen = new Pen(Color.White, 10);

            Pen.StartCap = LineCap.Square;
            Pen.EndCap = LineCap.Square;

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

        private void EndGame()
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

            lb_Turn.Text = null;
            lb_PlayerTurn.Text = "Game Over";
            lb_WinnerPlayer.Text = (Winner == enWinner.Draw) ? "Draw" : Winner == enWinner.Player1 ? "Player 1" : "Player 2";

            pb_1.Enabled = false;
            pb_2.Enabled = false;
            pb_3.Enabled = false;
            pb_4.Enabled = false;
            pb_5.Enabled = false;
            pb_6.Enabled = false;
            pb_7.Enabled = false;
            pb_8.Enabled = false;
            pb_9.Enabled = false;
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
        private enWinner CheckWinner()
        {
            if ((string)pb_1.Tag != "?" && (string)pb_2.Tag != "?" && (string)pb_3.Tag != "?" && (string)pb_4.Tag != "?" && (string)pb_5.Tag != "?" && (string)pb_6.Tag != "?" && (string)pb_7.Tag != "?" && (string)pb_8.Tag != "?" && (string)pb_9.Tag != "?")
                return enWinner.Draw;

            if (CheckProbability(pb_1, pb_2, pb_3) || CheckProbability(pb_4, pb_5, pb_6) || CheckProbability(pb_7, pb_8, pb_9) || CheckProbability(pb_1, pb_4, pb_7) || CheckProbability(pb_2, pb_5, pb_8)
                || CheckProbability(pb_3, pb_6, pb_9) || CheckProbability(pb_1, pb_5, pb_9) || CheckProbability(pb_3, pb_5, pb_7))
                return (enWinner)Player;

            return enWinner.InProgress;
        }
        private void Update(PictureBox PB)
        {
            if (Player == enPlayer.Player1)
            {
                PB.Image = Resources.X;
                PB.Tag = "X";

                Winner = CheckWinner();

                Player = enPlayer.Player2;
                lb_PlayerTurn.Text = "Player 2";
            }
            else
            {
                PB.Image = Resources.O;
                PB.Tag = "O";

                Winner = CheckWinner();

                Player = enPlayer.Player1;
                lb_PlayerTurn.Text = "Player 1";
            }

            if (Winner != enWinner.InProgress)
            {
                EndGame();
                return;
            }
            PB.Enabled = false;
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
            if (Winner == enWinner.InProgress)
            {
                if (MessageBox.Show("Are you sure?", "Waring", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.No)
                    return;
            }

            RestartPB(pb_1);
            RestartPB(pb_2);
            RestartPB(pb_3);
            RestartPB(pb_4);
            RestartPB(pb_5);
            RestartPB(pb_6);
            RestartPB(pb_7);
            RestartPB(pb_8);
            RestartPB(pb_9);

            Player = enPlayer.Player1;
            lb_Turn.Text = "Turn";
            lb_PlayerTurn.Text = "Player 1";
            lb_WinnerPlayer.Text = "In Progress";

        }

        private void bt_Start_Click(object sender, EventArgs e)
        {
            bt_Start.Visible = false;

            lb_Turn.Visible = true;
            lb_PlayerTurn.Visible = true;
            lb_Winner.Visible = true;
            lb_WinnerPlayer.Visible = true;
            bt_RestartGame.Visible = true;

            pb_1.Enabled = true;
            pb_2.Enabled = true;
            pb_3.Enabled = true;
            pb_4.Enabled = true;
            pb_5.Enabled = true;
            pb_6.Enabled = true;
            pb_7.Enabled = true;
            pb_8.Enabled = true;
            pb_9.Enabled = true;
        }
    }
}
