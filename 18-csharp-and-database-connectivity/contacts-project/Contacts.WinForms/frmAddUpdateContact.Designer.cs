namespace WinForm_Appliaction
{
    partial class frmAddUpdateContact
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
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(frmAddUpdateContact));
            this.lb_Title = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.lb_ID = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.label9 = new System.Windows.Forms.Label();
            this.label10 = new System.Windows.Forms.Label();
            this.tb_FirstName = new System.Windows.Forms.TextBox();
            this.tb_LastName = new System.Windows.Forms.TextBox();
            this.tb_Phone = new System.Windows.Forms.TextBox();
            this.tb_Email = new System.Windows.Forms.TextBox();
            this.tb_Address = new System.Windows.Forms.TextBox();
            this.dtp_DateOfBirth = new System.Windows.Forms.DateTimePicker();
            this.cb_Country = new System.Windows.Forms.ComboBox();
            this.llb_SetImage = new System.Windows.Forms.LinkLabel();
            this.bt_Close = new System.Windows.Forms.Button();
            this.bt_Save = new System.Windows.Forms.Button();
            this.ofd_SetImage = new System.Windows.Forms.OpenFileDialog();
            this.pb_Image = new System.Windows.Forms.PictureBox();
            this.llb_RemoveImage = new System.Windows.Forms.LinkLabel();
            this.errorProvider1 = new System.Windows.Forms.ErrorProvider(this.components);
            ((System.ComponentModel.ISupportInitialize)(this.pb_Image)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.errorProvider1)).BeginInit();
            this.SuspendLayout();
            // 
            // lb_Title
            // 
            this.lb_Title.Font = new System.Drawing.Font("Microsoft Sans Serif", 21.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lb_Title.Location = new System.Drawing.Point(121, 9);
            this.lb_Title.Name = "lb_Title";
            this.lb_Title.Size = new System.Drawing.Size(255, 33);
            this.lb_Title.TabIndex = 0;
            this.lb_Title.Text = "Add New Contact";
            this.lb_Title.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(26, 66);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(68, 16);
            this.label2.TabIndex = 1;
            this.label2.Text = "Contact ID";
            // 
            // lb_ID
            // 
            this.lb_ID.AutoSize = true;
            this.lb_ID.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lb_ID.Location = new System.Drawing.Point(127, 68);
            this.lb_ID.Name = "lb_ID";
            this.lb_ID.Size = new System.Drawing.Size(28, 16);
            this.lb_ID.TabIndex = 2;
            this.lb_ID.Text = "???";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.Location = new System.Drawing.Point(26, 103);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(72, 16);
            this.label4.TabIndex = 3;
            this.label4.Text = "First Name";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label5.Location = new System.Drawing.Point(26, 140);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(72, 16);
            this.label5.TabIndex = 4;
            this.label5.Text = "Last Name";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label6.Location = new System.Drawing.Point(26, 177);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(46, 16);
            this.label6.TabIndex = 5;
            this.label6.Text = "Phone";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label7.Location = new System.Drawing.Point(26, 214);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(41, 16);
            this.label7.TabIndex = 6;
            this.label7.Text = "Email";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label8.Location = new System.Drawing.Point(26, 251);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(81, 16);
            this.label8.TabIndex = 7;
            this.label8.Text = "Date Of Birth";
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label9.Location = new System.Drawing.Point(26, 288);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(52, 16);
            this.label9.TabIndex = 8;
            this.label9.Text = "Country";
            // 
            // label10
            // 
            this.label10.AutoSize = true;
            this.label10.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label10.Location = new System.Drawing.Point(26, 325);
            this.label10.Name = "label10";
            this.label10.Size = new System.Drawing.Size(58, 16);
            this.label10.TabIndex = 9;
            this.label10.Text = "Address";
            // 
            // tb_FirstName
            // 
            this.tb_FirstName.Location = new System.Drawing.Point(127, 101);
            this.tb_FirstName.Name = "tb_FirstName";
            this.tb_FirstName.Size = new System.Drawing.Size(171, 20);
            this.tb_FirstName.TabIndex = 10;
            this.tb_FirstName.Validating += new System.ComponentModel.CancelEventHandler(this.tb_Validating);
            // 
            // tb_LastName
            // 
            this.tb_LastName.Location = new System.Drawing.Point(127, 138);
            this.tb_LastName.Name = "tb_LastName";
            this.tb_LastName.Size = new System.Drawing.Size(171, 20);
            this.tb_LastName.TabIndex = 11;
            this.tb_LastName.Validating += new System.ComponentModel.CancelEventHandler(this.tb_Validating);
            // 
            // tb_Phone
            // 
            this.tb_Phone.Location = new System.Drawing.Point(127, 175);
            this.tb_Phone.Name = "tb_Phone";
            this.tb_Phone.Size = new System.Drawing.Size(171, 20);
            this.tb_Phone.TabIndex = 12;
            this.tb_Phone.Validating += new System.ComponentModel.CancelEventHandler(this.tb_Validating);
            // 
            // tb_Email
            // 
            this.tb_Email.Location = new System.Drawing.Point(127, 212);
            this.tb_Email.Name = "tb_Email";
            this.tb_Email.Size = new System.Drawing.Size(171, 20);
            this.tb_Email.TabIndex = 13;
            this.tb_Email.Validating += new System.ComponentModel.CancelEventHandler(this.tb_Validating);
            // 
            // tb_Address
            // 
            this.tb_Address.Location = new System.Drawing.Point(127, 323);
            this.tb_Address.Multiline = true;
            this.tb_Address.Name = "tb_Address";
            this.tb_Address.Size = new System.Drawing.Size(171, 57);
            this.tb_Address.TabIndex = 14;
            this.tb_Address.Validating += new System.ComponentModel.CancelEventHandler(this.tb_Validating);
            // 
            // dtp_DateOfBirth
            // 
            this.dtp_DateOfBirth.CustomFormat = " ";
            this.dtp_DateOfBirth.Format = System.Windows.Forms.DateTimePickerFormat.Short;
            this.dtp_DateOfBirth.Location = new System.Drawing.Point(127, 249);
            this.dtp_DateOfBirth.MaxDate = new System.DateTime(2026, 8, 6, 0, 0, 0, 0);
            this.dtp_DateOfBirth.Name = "dtp_DateOfBirth";
            this.dtp_DateOfBirth.Size = new System.Drawing.Size(171, 20);
            this.dtp_DateOfBirth.TabIndex = 15;
            this.dtp_DateOfBirth.Value = new System.DateTime(2026, 8, 6, 0, 0, 0, 0);
            this.dtp_DateOfBirth.Validating += new System.ComponentModel.CancelEventHandler(this.dtp_DateOfBirth_Validating);
            // 
            // cb_Country
            // 
            this.cb_Country.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.cb_Country.FormattingEnabled = true;
            this.cb_Country.Location = new System.Drawing.Point(127, 286);
            this.cb_Country.Name = "cb_Country";
            this.cb_Country.Size = new System.Drawing.Size(171, 21);
            this.cb_Country.TabIndex = 16;
            this.cb_Country.Validating += new System.ComponentModel.CancelEventHandler(this.tb_Validating);
            // 
            // llb_SetImage
            // 
            this.llb_SetImage.AutoSize = true;
            this.llb_SetImage.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.llb_SetImage.Location = new System.Drawing.Point(391, 68);
            this.llb_SetImage.Name = "llb_SetImage";
            this.llb_SetImage.Size = new System.Drawing.Size(68, 16);
            this.llb_SetImage.TabIndex = 17;
            this.llb_SetImage.TabStop = true;
            this.llb_SetImage.Text = "Set Image";
            this.llb_SetImage.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.linkLabel1_LinkClicked);
            // 
            // bt_Close
            // 
            this.bt_Close.Location = new System.Drawing.Point(370, 255);
            this.bt_Close.Name = "bt_Close";
            this.bt_Close.Size = new System.Drawing.Size(110, 49);
            this.bt_Close.TabIndex = 19;
            this.bt_Close.Text = "Close";
            this.bt_Close.UseVisualStyleBackColor = true;
            this.bt_Close.Click += new System.EventHandler(this.bt_Close_Click);
            // 
            // bt_Save
            // 
            this.bt_Save.Location = new System.Drawing.Point(370, 323);
            this.bt_Save.Name = "bt_Save";
            this.bt_Save.Size = new System.Drawing.Size(110, 49);
            this.bt_Save.TabIndex = 20;
            this.bt_Save.Text = "Save";
            this.bt_Save.UseVisualStyleBackColor = true;
            this.bt_Save.Click += new System.EventHandler(this.bt_Save_Click);
            // 
            // ofd_SetImage
            // 
            this.ofd_SetImage.Filter = "Image Files|*.jpg;*.jpeg;*.png;*.gif;*.bmp";
            this.ofd_SetImage.RestoreDirectory = true;
            // 
            // pb_Image
            // 
            this.pb_Image.Location = new System.Drawing.Point(347, 90);
            this.pb_Image.Name = "pb_Image";
            this.pb_Image.Size = new System.Drawing.Size(156, 130);
            this.pb_Image.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pb_Image.TabIndex = 18;
            this.pb_Image.TabStop = false;
            // 
            // llb_RemoveImage
            // 
            this.llb_RemoveImage.AutoSize = true;
            this.llb_RemoveImage.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.llb_RemoveImage.Location = new System.Drawing.Point(375, 223);
            this.llb_RemoveImage.Name = "llb_RemoveImage";
            this.llb_RemoveImage.Size = new System.Drawing.Size(100, 16);
            this.llb_RemoveImage.TabIndex = 21;
            this.llb_RemoveImage.TabStop = true;
            this.llb_RemoveImage.Text = "Remove Image";
            this.llb_RemoveImage.Visible = false;
            this.llb_RemoveImage.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.llb_RemoveImage_LinkClicked);
            // 
            // errorProvider1
            // 
            this.errorProvider1.ContainerControl = this;
            // 
            // frmAddEditContact
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(536, 392);
            this.Controls.Add(this.llb_RemoveImage);
            this.Controls.Add(this.bt_Save);
            this.Controls.Add(this.bt_Close);
            this.Controls.Add(this.pb_Image);
            this.Controls.Add(this.llb_SetImage);
            this.Controls.Add(this.cb_Country);
            this.Controls.Add(this.dtp_DateOfBirth);
            this.Controls.Add(this.tb_Address);
            this.Controls.Add(this.tb_Email);
            this.Controls.Add(this.tb_Phone);
            this.Controls.Add(this.tb_LastName);
            this.Controls.Add(this.tb_FirstName);
            this.Controls.Add(this.label10);
            this.Controls.Add(this.label9);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.lb_ID);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.lb_Title);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "frmAddEditContact";
            this.Text = "Add Contact";
            this.Load += new System.EventHandler(this.frmAddContact_Load);
            ((System.ComponentModel.ISupportInitialize)(this.pb_Image)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.errorProvider1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lb_Title;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label lb_ID;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.Label label10;
        private System.Windows.Forms.TextBox tb_FirstName;
        private System.Windows.Forms.TextBox tb_LastName;
        private System.Windows.Forms.TextBox tb_Phone;
        private System.Windows.Forms.TextBox tb_Email;
        private System.Windows.Forms.TextBox tb_Address;
        private System.Windows.Forms.DateTimePicker dtp_DateOfBirth;
        private System.Windows.Forms.ComboBox cb_Country;
        private System.Windows.Forms.LinkLabel llb_SetImage;
        private System.Windows.Forms.PictureBox pb_Image;
        private System.Windows.Forms.Button bt_Close;
        private System.Windows.Forms.Button bt_Save;
        private System.Windows.Forms.OpenFileDialog ofd_SetImage;
        private System.Windows.Forms.LinkLabel llb_RemoveImage;
        private System.Windows.Forms.ErrorProvider errorProvider1;
    }
}