namespace Project2_Tic_Tac_Toe_Game
{
    partial class FormGame
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(FormGame));
            this.lb_Turn = new System.Windows.Forms.Label();
            this.lb_PlayerTurn = new System.Windows.Forms.Label();
            this.lb_Winner = new System.Windows.Forms.Label();
            this.lb_WinnerPlayer = new System.Windows.Forms.Label();
            this.bt_RestartGame = new System.Windows.Forms.Button();
            this.label4 = new System.Windows.Forms.Label();
            this.pb_1 = new System.Windows.Forms.PictureBox();
            this.pb_3 = new System.Windows.Forms.PictureBox();
            this.pb_2 = new System.Windows.Forms.PictureBox();
            this.pb_5 = new System.Windows.Forms.PictureBox();
            this.pb_8 = new System.Windows.Forms.PictureBox();
            this.pb_7 = new System.Windows.Forms.PictureBox();
            this.pb_4 = new System.Windows.Forms.PictureBox();
            this.pb_6 = new System.Windows.Forms.PictureBox();
            this.pb_9 = new System.Windows.Forms.PictureBox();
            this.bt_Start = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.pb_1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pb_3)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pb_2)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pb_5)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pb_8)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pb_7)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pb_4)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pb_6)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pb_9)).BeginInit();
            this.SuspendLayout();
            // 
            // lb_Turn
            // 
            this.lb_Turn.AutoSize = true;
            this.lb_Turn.Font = new System.Drawing.Font("Impact", 21.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lb_Turn.ForeColor = System.Drawing.Color.Yellow;
            this.lb_Turn.Location = new System.Drawing.Point(111, 111);
            this.lb_Turn.Name = "lb_Turn";
            this.lb_Turn.Size = new System.Drawing.Size(68, 36);
            this.lb_Turn.TabIndex = 0;
            this.lb_Turn.Text = "Turn";
            this.lb_Turn.Visible = false;
            // 
            // lb_PlayerTurn
            // 
            this.lb_PlayerTurn.Font = new System.Drawing.Font("Impact", 21.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lb_PlayerTurn.ForeColor = System.Drawing.Color.White;
            this.lb_PlayerTurn.Location = new System.Drawing.Point(74, 147);
            this.lb_PlayerTurn.Name = "lb_PlayerTurn";
            this.lb_PlayerTurn.Size = new System.Drawing.Size(143, 36);
            this.lb_PlayerTurn.TabIndex = 2;
            this.lb_PlayerTurn.Text = "Player 1";
            this.lb_PlayerTurn.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.lb_PlayerTurn.Visible = false;
            // 
            // lb_Winner
            // 
            this.lb_Winner.AutoSize = true;
            this.lb_Winner.Font = new System.Drawing.Font("Impact", 21.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lb_Winner.ForeColor = System.Drawing.Color.Yellow;
            this.lb_Winner.Location = new System.Drawing.Point(94, 213);
            this.lb_Winner.Name = "lb_Winner";
            this.lb_Winner.Size = new System.Drawing.Size(102, 36);
            this.lb_Winner.TabIndex = 3;
            this.lb_Winner.Text = "Winner";
            this.lb_Winner.Visible = false;
            // 
            // lb_WinnerPlayer
            // 
            this.lb_WinnerPlayer.Font = new System.Drawing.Font("Impact", 21.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lb_WinnerPlayer.ForeColor = System.Drawing.Color.Lime;
            this.lb_WinnerPlayer.Location = new System.Drawing.Point(70, 249);
            this.lb_WinnerPlayer.Name = "lb_WinnerPlayer";
            this.lb_WinnerPlayer.Size = new System.Drawing.Size(151, 36);
            this.lb_WinnerPlayer.TabIndex = 4;
            this.lb_WinnerPlayer.Text = "In Progress";
            this.lb_WinnerPlayer.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.lb_WinnerPlayer.Visible = false;
            // 
            // bt_RestartGame
            // 
            this.bt_RestartGame.BackColor = System.Drawing.Color.Gray;
            this.bt_RestartGame.Cursor = System.Windows.Forms.Cursors.Hand;
            this.bt_RestartGame.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.bt_RestartGame.Font = new System.Drawing.Font("Impact", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.bt_RestartGame.ForeColor = System.Drawing.Color.White;
            this.bt_RestartGame.Location = new System.Drawing.Point(58, 339);
            this.bt_RestartGame.Name = "bt_RestartGame";
            this.bt_RestartGame.Size = new System.Drawing.Size(174, 43);
            this.bt_RestartGame.TabIndex = 5;
            this.bt_RestartGame.Text = "Restart The Game";
            this.bt_RestartGame.UseVisualStyleBackColor = false;
            this.bt_RestartGame.Visible = false;
            this.bt_RestartGame.Click += new System.EventHandler(this.BRestartGame_Click);
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Impact", 36F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.ForeColor = System.Drawing.Color.White;
            this.label4.Location = new System.Drawing.Point(337, 29);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(372, 60);
            this.label4.TabIndex = 6;
            this.label4.Text = "Tic-Tac-Toe Game";
            // 
            // pb_1
            // 
            this.pb_1.Cursor = System.Windows.Forms.Cursors.Hand;
            this.pb_1.Enabled = false;
            this.pb_1.Image = ((System.Drawing.Image)(resources.GetObject("pb_1.Image")));
            this.pb_1.Location = new System.Drawing.Point(329, 111);
            this.pb_1.Name = "pb_1";
            this.pb_1.Size = new System.Drawing.Size(80, 67);
            this.pb_1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pb_1.TabIndex = 7;
            this.pb_1.TabStop = false;
            this.pb_1.Tag = "?";
            this.pb_1.Click += new System.EventHandler(this.PB_Click);
            // 
            // pb_3
            // 
            this.pb_3.Cursor = System.Windows.Forms.Cursors.Hand;
            this.pb_3.Enabled = false;
            this.pb_3.Image = ((System.Drawing.Image)(resources.GetObject("pb_3.Image")));
            this.pb_3.Location = new System.Drawing.Point(329, 315);
            this.pb_3.Name = "pb_3";
            this.pb_3.Size = new System.Drawing.Size(80, 67);
            this.pb_3.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pb_3.TabIndex = 8;
            this.pb_3.TabStop = false;
            this.pb_3.Tag = "?";
            this.pb_3.Click += new System.EventHandler(this.PB_Click);
            // 
            // pb_2
            // 
            this.pb_2.Cursor = System.Windows.Forms.Cursors.Hand;
            this.pb_2.Enabled = false;
            this.pb_2.Image = ((System.Drawing.Image)(resources.GetObject("pb_2.Image")));
            this.pb_2.Location = new System.Drawing.Point(329, 213);
            this.pb_2.Name = "pb_2";
            this.pb_2.Size = new System.Drawing.Size(80, 67);
            this.pb_2.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pb_2.TabIndex = 9;
            this.pb_2.TabStop = false;
            this.pb_2.Tag = "?";
            this.pb_2.Click += new System.EventHandler(this.PB_Click);
            // 
            // pb_5
            // 
            this.pb_5.Cursor = System.Windows.Forms.Cursors.Hand;
            this.pb_5.Enabled = false;
            this.pb_5.Image = ((System.Drawing.Image)(resources.GetObject("pb_5.Image")));
            this.pb_5.Location = new System.Drawing.Point(479, 207);
            this.pb_5.Name = "pb_5";
            this.pb_5.Size = new System.Drawing.Size(80, 67);
            this.pb_5.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pb_5.TabIndex = 10;
            this.pb_5.TabStop = false;
            this.pb_5.Tag = "?";
            this.pb_5.Click += new System.EventHandler(this.PB_Click);
            // 
            // pb_8
            // 
            this.pb_8.Cursor = System.Windows.Forms.Cursors.Hand;
            this.pb_8.Enabled = false;
            this.pb_8.Image = ((System.Drawing.Image)(resources.GetObject("pb_8.Image")));
            this.pb_8.Location = new System.Drawing.Point(629, 207);
            this.pb_8.Name = "pb_8";
            this.pb_8.Size = new System.Drawing.Size(80, 67);
            this.pb_8.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pb_8.TabIndex = 11;
            this.pb_8.TabStop = false;
            this.pb_8.Tag = "?";
            this.pb_8.Click += new System.EventHandler(this.PB_Click);
            // 
            // pb_7
            // 
            this.pb_7.Cursor = System.Windows.Forms.Cursors.Hand;
            this.pb_7.Enabled = false;
            this.pb_7.Image = ((System.Drawing.Image)(resources.GetObject("pb_7.Image")));
            this.pb_7.Location = new System.Drawing.Point(629, 111);
            this.pb_7.Name = "pb_7";
            this.pb_7.Size = new System.Drawing.Size(80, 67);
            this.pb_7.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pb_7.TabIndex = 12;
            this.pb_7.TabStop = false;
            this.pb_7.Tag = "?";
            this.pb_7.Click += new System.EventHandler(this.PB_Click);
            // 
            // pb_4
            // 
            this.pb_4.Cursor = System.Windows.Forms.Cursors.Hand;
            this.pb_4.Enabled = false;
            this.pb_4.Image = ((System.Drawing.Image)(resources.GetObject("pb_4.Image")));
            this.pb_4.Location = new System.Drawing.Point(479, 111);
            this.pb_4.Name = "pb_4";
            this.pb_4.Size = new System.Drawing.Size(80, 67);
            this.pb_4.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pb_4.TabIndex = 13;
            this.pb_4.TabStop = false;
            this.pb_4.Tag = "?";
            this.pb_4.Click += new System.EventHandler(this.PB_Click);
            // 
            // pb_6
            // 
            this.pb_6.Cursor = System.Windows.Forms.Cursors.Hand;
            this.pb_6.Enabled = false;
            this.pb_6.Image = ((System.Drawing.Image)(resources.GetObject("pb_6.Image")));
            this.pb_6.Location = new System.Drawing.Point(479, 315);
            this.pb_6.Name = "pb_6";
            this.pb_6.Size = new System.Drawing.Size(80, 67);
            this.pb_6.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pb_6.TabIndex = 14;
            this.pb_6.TabStop = false;
            this.pb_6.Tag = "?";
            this.pb_6.Click += new System.EventHandler(this.PB_Click);
            // 
            // pb_9
            // 
            this.pb_9.Cursor = System.Windows.Forms.Cursors.Hand;
            this.pb_9.Enabled = false;
            this.pb_9.Image = ((System.Drawing.Image)(resources.GetObject("pb_9.Image")));
            this.pb_9.Location = new System.Drawing.Point(629, 315);
            this.pb_9.Name = "pb_9";
            this.pb_9.Size = new System.Drawing.Size(80, 67);
            this.pb_9.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pb_9.TabIndex = 15;
            this.pb_9.TabStop = false;
            this.pb_9.Tag = "?";
            this.pb_9.Click += new System.EventHandler(this.PB_Click);
            // 
            // bt_Start
            // 
            this.bt_Start.BackColor = System.Drawing.Color.Gray;
            this.bt_Start.Cursor = System.Windows.Forms.Cursors.Hand;
            this.bt_Start.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.bt_Start.Font = new System.Drawing.Font("Impact", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.bt_Start.ForeColor = System.Drawing.Color.White;
            this.bt_Start.Location = new System.Drawing.Point(68, 225);
            this.bt_Start.Name = "bt_Start";
            this.bt_Start.Size = new System.Drawing.Size(155, 43);
            this.bt_Start.TabIndex = 16;
            this.bt_Start.Text = "Start The Game";
            this.bt_Start.UseVisualStyleBackColor = false;
            this.bt_Start.Click += new System.EventHandler(this.bt_Start_Click);
            // 
            // FormGame
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.Black;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.bt_Start);
            this.Controls.Add(this.lb_Winner);
            this.Controls.Add(this.lb_WinnerPlayer);
            this.Controls.Add(this.pb_9);
            this.Controls.Add(this.pb_6);
            this.Controls.Add(this.pb_4);
            this.Controls.Add(this.pb_7);
            this.Controls.Add(this.pb_8);
            this.Controls.Add(this.pb_5);
            this.Controls.Add(this.pb_2);
            this.Controls.Add(this.pb_3);
            this.Controls.Add(this.pb_1);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.bt_RestartGame);
            this.Controls.Add(this.lb_PlayerTurn);
            this.Controls.Add(this.lb_Turn);
            this.Name = "FormGame";
            this.Text = "Tic-Tac-Toe Game";
            this.Paint += new System.Windows.Forms.PaintEventHandler(this.FormGame_Paint);
            ((System.ComponentModel.ISupportInitialize)(this.pb_1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pb_3)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pb_2)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pb_5)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pb_8)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pb_7)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pb_4)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pb_6)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pb_9)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lb_Turn;
        private System.Windows.Forms.Label lb_PlayerTurn;
        private System.Windows.Forms.Label lb_Winner;
        private System.Windows.Forms.Label lb_WinnerPlayer;
        private System.Windows.Forms.Button bt_RestartGame;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.PictureBox pb_1;
        private System.Windows.Forms.PictureBox pb_3;
        private System.Windows.Forms.PictureBox pb_2;
        private System.Windows.Forms.PictureBox pb_5;
        private System.Windows.Forms.PictureBox pb_8;
        private System.Windows.Forms.PictureBox pb_7;
        private System.Windows.Forms.PictureBox pb_4;
        private System.Windows.Forms.PictureBox pb_6;
        private System.Windows.Forms.PictureBox pb_9;
        private System.Windows.Forms.Button bt_Start;
    }
}

