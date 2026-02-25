namespace PictureBox_Exercise
{
    partial class FormPictureBoxExercise
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
            this.LTitle = new System.Windows.Forms.Label();
            this.PB = new System.Windows.Forms.PictureBox();
            this.RBBoy = new System.Windows.Forms.RadioButton();
            this.RBGirl = new System.Windows.Forms.RadioButton();
            this.RBBook = new System.Windows.Forms.RadioButton();
            this.RBPen = new System.Windows.Forms.RadioButton();
            ((System.ComponentModel.ISupportInitialize)(this.PB)).BeginInit();
            this.SuspendLayout();
            // 
            // LTitle
            // 
            this.LTitle.AutoSize = true;
            this.LTitle.Font = new System.Drawing.Font("Microsoft YaHei", 26.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LTitle.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(0)))), ((int)(((byte)(0)))));
            this.LTitle.Location = new System.Drawing.Point(368, 28);
            this.LTitle.Name = "LTitle";
            this.LTitle.Size = new System.Drawing.Size(97, 46);
            this.LTitle.TabIndex = 0;
            this.LTitle.Text = "Title";
            // 
            // PB
            // 
            this.PB.Image = global::PictureBox_Exercise.Properties.Resources.Boy;
            this.PB.Location = new System.Drawing.Point(187, 77);
            this.PB.Name = "PB";
            this.PB.Size = new System.Drawing.Size(435, 244);
            this.PB.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.PB.TabIndex = 1;
            this.PB.TabStop = false;
            // 
            // RBBoy
            // 
            this.RBBoy.AutoSize = true;
            this.RBBoy.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.RBBoy.Location = new System.Drawing.Point(187, 327);
            this.RBBoy.Name = "RBBoy";
            this.RBBoy.Size = new System.Drawing.Size(60, 28);
            this.RBBoy.TabIndex = 2;
            this.RBBoy.TabStop = true;
            this.RBBoy.Text = "Boy";
            this.RBBoy.UseVisualStyleBackColor = true;
            this.RBBoy.CheckedChanged += new System.EventHandler(this.RBBoy_CheckedChanged);
            // 
            // RBGirl
            // 
            this.RBGirl.AutoSize = true;
            this.RBGirl.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.RBGirl.Location = new System.Drawing.Point(309, 327);
            this.RBGirl.Name = "RBGirl";
            this.RBGirl.Size = new System.Drawing.Size(56, 28);
            this.RBGirl.TabIndex = 3;
            this.RBGirl.TabStop = true;
            this.RBGirl.Text = "Girl";
            this.RBGirl.UseVisualStyleBackColor = true;
            this.RBGirl.CheckedChanged += new System.EventHandler(this.RBGirl_CheckedChanged);
            // 
            // RBBook
            // 
            this.RBBook.AutoSize = true;
            this.RBBook.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.RBBook.Location = new System.Drawing.Point(427, 327);
            this.RBBook.Name = "RBBook";
            this.RBBook.Size = new System.Drawing.Size(71, 28);
            this.RBBook.TabIndex = 4;
            this.RBBook.TabStop = true;
            this.RBBook.Text = "Book";
            this.RBBook.UseVisualStyleBackColor = true;
            this.RBBook.CheckedChanged += new System.EventHandler(this.RBBook_CheckedChanged);
            // 
            // RBPen
            // 
            this.RBPen.AutoSize = true;
            this.RBPen.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.RBPen.Location = new System.Drawing.Point(560, 327);
            this.RBPen.Name = "RBPen";
            this.RBPen.Size = new System.Drawing.Size(62, 28);
            this.RBPen.TabIndex = 5;
            this.RBPen.TabStop = true;
            this.RBPen.Text = "Pen";
            this.RBPen.UseVisualStyleBackColor = true;
            this.RBPen.CheckedChanged += new System.EventHandler(this.RBPen_CheckedChanged);
            // 
            // FormPictureBoxExercise
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.RBPen);
            this.Controls.Add(this.RBBook);
            this.Controls.Add(this.RBGirl);
            this.Controls.Add(this.RBBoy);
            this.Controls.Add(this.PB);
            this.Controls.Add(this.LTitle);
            this.Name = "FormPictureBoxExercise";
            this.Text = "Picture box exercise";
            this.Load += new System.EventHandler(this.FormPictureBoxExercise_Load);
            ((System.ComponentModel.ISupportInitialize)(this.PB)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label LTitle;
        private System.Windows.Forms.PictureBox PB;
        private System.Windows.Forms.RadioButton RBBoy;
        private System.Windows.Forms.RadioButton RBGirl;
        private System.Windows.Forms.RadioButton RBBook;
        private System.Windows.Forms.RadioButton RBPen;
    }
}

