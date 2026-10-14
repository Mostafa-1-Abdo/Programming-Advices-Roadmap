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
            this.label1 = new System.Windows.Forms.Label();
            this.LPlayerTurn = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.LWinner = new System.Windows.Forms.Label();
            this.BRestartGame = new System.Windows.Forms.Button();
            this.label4 = new System.Windows.Forms.Label();
            this.PB1 = new System.Windows.Forms.PictureBox();
            this.PB3 = new System.Windows.Forms.PictureBox();
            this.PB2 = new System.Windows.Forms.PictureBox();
            this.PB5 = new System.Windows.Forms.PictureBox();
            this.PB8 = new System.Windows.Forms.PictureBox();
            this.PB7 = new System.Windows.Forms.PictureBox();
            this.PB4 = new System.Windows.Forms.PictureBox();
            this.PB6 = new System.Windows.Forms.PictureBox();
            this.PB9 = new System.Windows.Forms.PictureBox();
            ((System.ComponentModel.ISupportInitialize)(this.PB1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.PB3)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.PB2)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.PB5)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.PB8)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.PB7)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.PB4)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.PB6)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.PB9)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Impact", 21.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.ForeColor = System.Drawing.Color.Yellow;
            this.label1.Location = new System.Drawing.Point(108, 111);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(68, 36);
            this.label1.TabIndex = 0;
            this.label1.Text = "Turn";
            // 
            // LPlayerTurn
            // 
            this.LPlayerTurn.Font = new System.Drawing.Font("Impact", 21.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LPlayerTurn.ForeColor = System.Drawing.Color.White;
            this.LPlayerTurn.Location = new System.Drawing.Point(71, 157);
            this.LPlayerTurn.Name = "LPlayerTurn";
            this.LPlayerTurn.Size = new System.Drawing.Size(143, 36);
            this.LPlayerTurn.TabIndex = 2;
            this.LPlayerTurn.Text = "Player 1";
            this.LPlayerTurn.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Impact", 21.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.ForeColor = System.Drawing.Color.Yellow;
            this.label3.Location = new System.Drawing.Point(91, 224);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(102, 36);
            this.label3.TabIndex = 3;
            this.label3.Text = "Winner";
            // 
            // LWinner
            // 
            this.LWinner.Font = new System.Drawing.Font("Impact", 21.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LWinner.ForeColor = System.Drawing.Color.Lime;
            this.LWinner.Location = new System.Drawing.Point(70, 269);
            this.LWinner.Name = "LWinner";
            this.LWinner.Size = new System.Drawing.Size(151, 36);
            this.LWinner.TabIndex = 4;
            this.LWinner.Text = "In Progress";
            this.LWinner.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // BRestartGame
            // 
            this.BRestartGame.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.BRestartGame.Font = new System.Drawing.Font("Impact", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.BRestartGame.ForeColor = System.Drawing.Color.White;
            this.BRestartGame.Location = new System.Drawing.Point(68, 339);
            this.BRestartGame.Name = "BRestartGame";
            this.BRestartGame.Size = new System.Drawing.Size(155, 43);
            this.BRestartGame.TabIndex = 5;
            this.BRestartGame.Text = "Restart Game";
            this.BRestartGame.UseVisualStyleBackColor = true;
            this.BRestartGame.Click += new System.EventHandler(this.BRestartGame_Click);
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
            // PB1
            // 
            this.PB1.Cursor = System.Windows.Forms.Cursors.Hand;
            this.PB1.Image = ((System.Drawing.Image)(resources.GetObject("PB1.Image")));
            this.PB1.Location = new System.Drawing.Point(329, 111);
            this.PB1.Name = "PB1";
            this.PB1.Size = new System.Drawing.Size(80, 67);
            this.PB1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.PB1.TabIndex = 7;
            this.PB1.TabStop = false;
            this.PB1.Tag = "?";
            this.PB1.Click += new System.EventHandler(this.PB_Click);
            // 
            // PB3
            // 
            this.PB3.Cursor = System.Windows.Forms.Cursors.Hand;
            this.PB3.Image = ((System.Drawing.Image)(resources.GetObject("PB3.Image")));
            this.PB3.Location = new System.Drawing.Point(329, 315);
            this.PB3.Name = "PB3";
            this.PB3.Size = new System.Drawing.Size(80, 67);
            this.PB3.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.PB3.TabIndex = 8;
            this.PB3.TabStop = false;
            this.PB3.Tag = "?";
            this.PB3.Click += new System.EventHandler(this.PB_Click);
            // 
            // PB2
            // 
            this.PB2.Cursor = System.Windows.Forms.Cursors.Hand;
            this.PB2.Image = ((System.Drawing.Image)(resources.GetObject("PB2.Image")));
            this.PB2.Location = new System.Drawing.Point(329, 213);
            this.PB2.Name = "PB2";
            this.PB2.Size = new System.Drawing.Size(80, 67);
            this.PB2.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.PB2.TabIndex = 9;
            this.PB2.TabStop = false;
            this.PB2.Tag = "?";
            this.PB2.Click += new System.EventHandler(this.PB_Click);
            // 
            // PB5
            // 
            this.PB5.Cursor = System.Windows.Forms.Cursors.Hand;
            this.PB5.Image = ((System.Drawing.Image)(resources.GetObject("PB5.Image")));
            this.PB5.Location = new System.Drawing.Point(479, 207);
            this.PB5.Name = "PB5";
            this.PB5.Size = new System.Drawing.Size(80, 67);
            this.PB5.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.PB5.TabIndex = 10;
            this.PB5.TabStop = false;
            this.PB5.Tag = "?";
            this.PB5.Click += new System.EventHandler(this.PB_Click);
            // 
            // PB8
            // 
            this.PB8.Cursor = System.Windows.Forms.Cursors.Hand;
            this.PB8.Image = ((System.Drawing.Image)(resources.GetObject("PB8.Image")));
            this.PB8.Location = new System.Drawing.Point(629, 207);
            this.PB8.Name = "PB8";
            this.PB8.Size = new System.Drawing.Size(80, 67);
            this.PB8.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.PB8.TabIndex = 11;
            this.PB8.TabStop = false;
            this.PB8.Tag = "?";
            this.PB8.Click += new System.EventHandler(this.PB_Click);
            // 
            // PB7
            // 
            this.PB7.Cursor = System.Windows.Forms.Cursors.Hand;
            this.PB7.Image = ((System.Drawing.Image)(resources.GetObject("PB7.Image")));
            this.PB7.Location = new System.Drawing.Point(629, 111);
            this.PB7.Name = "PB7";
            this.PB7.Size = new System.Drawing.Size(80, 67);
            this.PB7.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.PB7.TabIndex = 12;
            this.PB7.TabStop = false;
            this.PB7.Tag = "?";
            this.PB7.Click += new System.EventHandler(this.PB_Click);
            // 
            // PB4
            // 
            this.PB4.Cursor = System.Windows.Forms.Cursors.Hand;
            this.PB4.Image = ((System.Drawing.Image)(resources.GetObject("PB4.Image")));
            this.PB4.Location = new System.Drawing.Point(479, 111);
            this.PB4.Name = "PB4";
            this.PB4.Size = new System.Drawing.Size(80, 67);
            this.PB4.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.PB4.TabIndex = 13;
            this.PB4.TabStop = false;
            this.PB4.Tag = "?";
            this.PB4.Click += new System.EventHandler(this.PB_Click);
            // 
            // PB6
            // 
            this.PB6.Cursor = System.Windows.Forms.Cursors.Hand;
            this.PB6.Image = ((System.Drawing.Image)(resources.GetObject("PB6.Image")));
            this.PB6.Location = new System.Drawing.Point(479, 315);
            this.PB6.Name = "PB6";
            this.PB6.Size = new System.Drawing.Size(80, 67);
            this.PB6.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.PB6.TabIndex = 14;
            this.PB6.TabStop = false;
            this.PB6.Tag = "?";
            this.PB6.Click += new System.EventHandler(this.PB_Click);
            // 
            // PB9
            // 
            this.PB9.Cursor = System.Windows.Forms.Cursors.Hand;
            this.PB9.Image = ((System.Drawing.Image)(resources.GetObject("PB9.Image")));
            this.PB9.Location = new System.Drawing.Point(629, 315);
            this.PB9.Name = "PB9";
            this.PB9.Size = new System.Drawing.Size(80, 67);
            this.PB9.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.PB9.TabIndex = 15;
            this.PB9.TabStop = false;
            this.PB9.Tag = "?";
            this.PB9.Click += new System.EventHandler(this.PB_Click);
            // 
            // FormGame
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.Black;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.LWinner);
            this.Controls.Add(this.PB9);
            this.Controls.Add(this.PB6);
            this.Controls.Add(this.PB4);
            this.Controls.Add(this.PB7);
            this.Controls.Add(this.PB8);
            this.Controls.Add(this.PB5);
            this.Controls.Add(this.PB2);
            this.Controls.Add(this.PB3);
            this.Controls.Add(this.PB1);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.BRestartGame);
            this.Controls.Add(this.LPlayerTurn);
            this.Controls.Add(this.label1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "FormGame";
            this.ShowIcon = false;
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Tic-Tac-Toe Game";
            this.Paint += new System.Windows.Forms.PaintEventHandler(this.FormGame_Paint);
            ((System.ComponentModel.ISupportInitialize)(this.PB1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.PB3)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.PB2)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.PB5)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.PB8)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.PB7)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.PB4)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.PB6)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.PB9)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label LPlayerTurn;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label LWinner;
        private System.Windows.Forms.Button BRestartGame;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.PictureBox PB1;
        private System.Windows.Forms.PictureBox PB3;
        private System.Windows.Forms.PictureBox PB2;
        private System.Windows.Forms.PictureBox PB5;
        private System.Windows.Forms.PictureBox PB8;
        private System.Windows.Forms.PictureBox PB7;
        private System.Windows.Forms.PictureBox PB4;
        private System.Windows.Forms.PictureBox PB6;
        private System.Windows.Forms.PictureBox PB9;
    }
}

