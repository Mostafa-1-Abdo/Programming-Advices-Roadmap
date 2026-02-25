namespace Exercise2_ComboBox
{
    partial class FormComboBoxExercise
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
            this.PB = new System.Windows.Forms.PictureBox();
            this.LTitle = new System.Windows.Forms.Label();
            this.CBPicture = new System.Windows.Forms.ComboBox();
            this.label1 = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.PB)).BeginInit();
            this.SuspendLayout();
            // 
            // PB
            // 
            this.PB.Image = global::Exercise2_ComboBox.Properties.Resources.Boy;
            this.PB.Location = new System.Drawing.Point(174, 79);
            this.PB.Name = "PB";
            this.PB.Size = new System.Drawing.Size(435, 244);
            this.PB.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.PB.TabIndex = 3;
            this.PB.TabStop = false;
            // 
            // LTitle
            // 
            this.LTitle.AutoSize = true;
            this.LTitle.Font = new System.Drawing.Font("Microsoft YaHei", 26.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LTitle.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(0)))), ((int)(((byte)(0)))));
            this.LTitle.Location = new System.Drawing.Point(345, 30);
            this.LTitle.Name = "LTitle";
            this.LTitle.Size = new System.Drawing.Size(97, 46);
            this.LTitle.TabIndex = 2;
            this.LTitle.Text = "Title";
            // 
            // CBPicture
            // 
            this.CBPicture.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.CBPicture.FormattingEnabled = true;
            this.CBPicture.Items.AddRange(new object[] {
            "Boy",
            "Girl",
            "Book",
            "Pen"});
            this.CBPicture.Location = new System.Drawing.Point(325, 342);
            this.CBPicture.Name = "CBPicture";
            this.CBPicture.Size = new System.Drawing.Size(221, 28);
            this.CBPicture.TabIndex = 4;
            this.CBPicture.SelectedIndexChanged += new System.EventHandler(this.CBPicture_SelectedIndexChanged);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(197, 345);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(122, 20);
            this.label1.TabIndex = 5;
            this.label1.Text = "Change Picture:";
            // 
            // FormComboBoxExercise
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.CBPicture);
            this.Controls.Add(this.PB);
            this.Controls.Add(this.LTitle);
            this.Name = "FormComboBoxExercise";
            this.Text = "Combo Box Exercise";
            this.Load += new System.EventHandler(this.FormComboBoxExercise_Load);
            ((System.ComponentModel.ISupportInitialize)(this.PB)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox PB;
        private System.Windows.Forms.Label LTitle;
        private System.Windows.Forms.ComboBox CBPicture;
        private System.Windows.Forms.Label label1;
    }
}

