namespace WinForm_Appliaction
{
    partial class frmContactsMain
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(frmContactsMain));
            this.dgv_Contacts = new System.Windows.Forms.DataGridView();
            this.cms_Contorl = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.updateToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.deleteToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.bt_AddContact = new System.Windows.Forms.Button();
            this.refreshToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            ((System.ComponentModel.ISupportInitialize)(this.dgv_Contacts)).BeginInit();
            this.cms_Contorl.SuspendLayout();
            this.SuspendLayout();
            // 
            // dgv_Contacts
            // 
            this.dgv_Contacts.AllowUserToAddRows = false;
            this.dgv_Contacts.AllowUserToDeleteRows = false;
            this.dgv_Contacts.AllowUserToOrderColumns = true;
            this.dgv_Contacts.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dgv_Contacts.ContextMenuStrip = this.cms_Contorl;
            this.dgv_Contacts.Dock = System.Windows.Forms.DockStyle.Top;
            this.dgv_Contacts.Location = new System.Drawing.Point(0, 0);
            this.dgv_Contacts.Name = "dgv_Contacts";
            this.dgv_Contacts.ReadOnly = true;
            this.dgv_Contacts.Size = new System.Drawing.Size(800, 367);
            this.dgv_Contacts.TabIndex = 0;
            // 
            // cms_Contorl
            // 
            this.cms_Contorl.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.updateToolStripMenuItem,
            this.deleteToolStripMenuItem,
            this.refreshToolStripMenuItem});
            this.cms_Contorl.Name = "cms_Contorl";
            this.cms_Contorl.ShowImageMargin = false;
            this.cms_Contorl.Size = new System.Drawing.Size(89, 70);
            // 
            // updateToolStripMenuItem
            // 
            this.updateToolStripMenuItem.Name = "updateToolStripMenuItem";
            this.updateToolStripMenuItem.Size = new System.Drawing.Size(88, 22);
            this.updateToolStripMenuItem.Text = "Update";
            this.updateToolStripMenuItem.Click += new System.EventHandler(this.updateToolStripMenuItem_Click);
            // 
            // deleteToolStripMenuItem
            // 
            this.deleteToolStripMenuItem.Name = "deleteToolStripMenuItem";
            this.deleteToolStripMenuItem.Size = new System.Drawing.Size(88, 22);
            this.deleteToolStripMenuItem.Text = "Delete";
            this.deleteToolStripMenuItem.Click += new System.EventHandler(this.deleteToolStripMenuItem_Click);
            // 
            // bt_AddContact
            // 
            this.bt_AddContact.Location = new System.Drawing.Point(327, 373);
            this.bt_AddContact.Name = "bt_AddContact";
            this.bt_AddContact.Size = new System.Drawing.Size(147, 65);
            this.bt_AddContact.TabIndex = 1;
            this.bt_AddContact.Text = "Add Contact";
            this.bt_AddContact.UseVisualStyleBackColor = true;
            this.bt_AddContact.Click += new System.EventHandler(this.bt_AddContact_Click);
            // 
            // refreshToolStripMenuItem
            // 
            this.refreshToolStripMenuItem.Name = "refreshToolStripMenuItem";
            this.refreshToolStripMenuItem.Size = new System.Drawing.Size(88, 22);
            this.refreshToolStripMenuItem.Text = "Refresh";
            this.refreshToolStripMenuItem.Click += new System.EventHandler(this.refreshToolStripMenuItem_Click);
            // 
            // frmContactsMain
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.Black;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.bt_AddContact);
            this.Controls.Add(this.dgv_Contacts);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "frmContactsMain";
            this.Text = "Contacts";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dgv_Contacts)).EndInit();
            this.cms_Contorl.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.DataGridView dgv_Contacts;
        private System.Windows.Forms.ContextMenuStrip cms_Contorl;
        private System.Windows.Forms.Button bt_AddContact;
        private System.Windows.Forms.ToolStripMenuItem updateToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem deleteToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem refreshToolStripMenuItem;
    }
}

