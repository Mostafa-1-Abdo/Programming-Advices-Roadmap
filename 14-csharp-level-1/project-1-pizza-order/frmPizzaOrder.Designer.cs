namespace Project1_Pizza
{
    partial class FormPizzaOrder
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(FormPizzaOrder));
            this.LTitle = new System.Windows.Forms.Label();
            this.GBWhereEat = new System.Windows.Forms.GroupBox();
            this.RBTakeOut = new System.Windows.Forms.RadioButton();
            this.RBEatIn = new System.Windows.Forms.RadioButton();
            this.CBExtraChees = new System.Windows.Forms.CheckBox();
            this.CBMushrooms = new System.Windows.Forms.CheckBox();
            this.CBTomatoes = new System.Windows.Forms.CheckBox();
            this.CBOnion = new System.Windows.Forms.CheckBox();
            this.CBOlives = new System.Windows.Forms.CheckBox();
            this.GBToppings = new System.Windows.Forms.GroupBox();
            this.BOrderPizza = new System.Windows.Forms.Button();
            this.BResetForm = new System.Windows.Forms.Button();
            this.RBThink = new System.Windows.Forms.RadioButton();
            this.RBThin = new System.Windows.Forms.RadioButton();
            this.GBCrustType = new System.Windows.Forms.GroupBox();
            this.GBSize = new System.Windows.Forms.GroupBox();
            this.RBLarg = new System.Windows.Forms.RadioButton();
            this.RBSmall = new System.Windows.Forms.RadioButton();
            this.RBMedium = new System.Windows.Forms.RadioButton();
            this.LSize = new System.Windows.Forms.Label();
            this.LSizeSelected = new System.Windows.Forms.Label();
            this.LToppings = new System.Windows.Forms.Label();
            this.LCrustTypeSelected = new System.Windows.Forms.Label();
            this.LCrustType = new System.Windows.Forms.Label();
            this.LToppingsSelected = new System.Windows.Forms.Label();
            this.LTotalPrice = new System.Windows.Forms.Label();
            this.LWhereToEat = new System.Windows.Forms.Label();
            this.LWhereToEatSelected = new System.Windows.Forms.Label();
            this.LPrice = new System.Windows.Forms.Label();
            this.GBOrderSummary = new System.Windows.Forms.GroupBox();
            this.BOrderCancel = new System.Windows.Forms.Button();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.GBWhereEat.SuspendLayout();
            this.GBToppings.SuspendLayout();
            this.GBCrustType.SuspendLayout();
            this.GBSize.SuspendLayout();
            this.GBOrderSummary.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // LTitle
            // 
            this.LTitle.AutoSize = true;
            this.LTitle.BackColor = System.Drawing.Color.Black;
            this.LTitle.Font = new System.Drawing.Font("Comic Sans MS", 45F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LTitle.ForeColor = System.Drawing.Color.IndianRed;
            this.LTitle.Location = new System.Drawing.Point(132, 9);
            this.LTitle.Name = "LTitle";
            this.LTitle.Size = new System.Drawing.Size(619, 84);
            this.LTitle.TabIndex = 0;
            this.LTitle.Text = "MAKE YOUR PIZZA";
            // 
            // GBWhereEat
            // 
            this.GBWhereEat.BackColor = System.Drawing.Color.White;
            this.GBWhereEat.Controls.Add(this.RBTakeOut);
            this.GBWhereEat.Controls.Add(this.RBEatIn);
            this.GBWhereEat.Cursor = System.Windows.Forms.Cursors.Hand;
            this.GBWhereEat.Font = new System.Drawing.Font("Century", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.GBWhereEat.ForeColor = System.Drawing.Color.Black;
            this.GBWhereEat.Location = new System.Drawing.Point(323, 269);
            this.GBWhereEat.Name = "GBWhereEat";
            this.GBWhereEat.Size = new System.Drawing.Size(134, 76);
            this.GBWhereEat.TabIndex = 14;
            this.GBWhereEat.TabStop = false;
            this.GBWhereEat.Text = "Where To Eat";
            // 
            // RBTakeOut
            // 
            this.RBTakeOut.AutoSize = true;
            this.RBTakeOut.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.RBTakeOut.ForeColor = System.Drawing.Color.Black;
            this.RBTakeOut.Location = new System.Drawing.Point(6, 50);
            this.RBTakeOut.Name = "RBTakeOut";
            this.RBTakeOut.Size = new System.Drawing.Size(74, 19);
            this.RBTakeOut.TabIndex = 16;
            this.RBTakeOut.TabStop = true;
            this.RBTakeOut.Text = "Take Out";
            this.RBTakeOut.UseVisualStyleBackColor = true;
            this.RBTakeOut.CheckedChanged += new System.EventHandler(this.RBTakeOut_CheckedChanged);
            // 
            // RBEatIn
            // 
            this.RBEatIn.AutoSize = true;
            this.RBEatIn.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.RBEatIn.ForeColor = System.Drawing.Color.Black;
            this.RBEatIn.Location = new System.Drawing.Point(6, 25);
            this.RBEatIn.Name = "RBEatIn";
            this.RBEatIn.Size = new System.Drawing.Size(56, 19);
            this.RBEatIn.TabIndex = 15;
            this.RBEatIn.TabStop = true;
            this.RBEatIn.Text = "Eat In";
            this.RBEatIn.UseVisualStyleBackColor = true;
            this.RBEatIn.CheckedChanged += new System.EventHandler(this.RBEatIn_CheckedChanged);
            // 
            // CBExtraChees
            // 
            this.CBExtraChees.AutoSize = true;
            this.CBExtraChees.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.CBExtraChees.ForeColor = System.Drawing.Color.Black;
            this.CBExtraChees.Location = new System.Drawing.Point(6, 20);
            this.CBExtraChees.Name = "CBExtraChees";
            this.CBExtraChees.Size = new System.Drawing.Size(92, 19);
            this.CBExtraChees.TabIndex = 9;
            this.CBExtraChees.Tag = "5";
            this.CBExtraChees.Text = "Extra Chees";
            this.CBExtraChees.UseVisualStyleBackColor = true;
            this.CBExtraChees.CheckedChanged += new System.EventHandler(this.CBExtraChees_CheckedChanged);
            // 
            // CBMushrooms
            // 
            this.CBMushrooms.AutoSize = true;
            this.CBMushrooms.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.CBMushrooms.ForeColor = System.Drawing.Color.Black;
            this.CBMushrooms.Location = new System.Drawing.Point(6, 52);
            this.CBMushrooms.Name = "CBMushrooms";
            this.CBMushrooms.Size = new System.Drawing.Size(92, 19);
            this.CBMushrooms.TabIndex = 10;
            this.CBMushrooms.Tag = "5";
            this.CBMushrooms.Text = "Mushrooms";
            this.CBMushrooms.UseVisualStyleBackColor = true;
            this.CBMushrooms.CheckedChanged += new System.EventHandler(this.CBMushrooms_CheckedChanged);
            // 
            // CBTomatoes
            // 
            this.CBTomatoes.AutoSize = true;
            this.CBTomatoes.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.CBTomatoes.ForeColor = System.Drawing.Color.Black;
            this.CBTomatoes.Location = new System.Drawing.Point(6, 83);
            this.CBTomatoes.Name = "CBTomatoes";
            this.CBTomatoes.Size = new System.Drawing.Size(81, 19);
            this.CBTomatoes.TabIndex = 11;
            this.CBTomatoes.Tag = "5";
            this.CBTomatoes.Text = "Tomatoes";
            this.CBTomatoes.UseVisualStyleBackColor = true;
            this.CBTomatoes.CheckedChanged += new System.EventHandler(this.CBTomatoes_CheckedChanged);
            // 
            // CBOnion
            // 
            this.CBOnion.AutoSize = true;
            this.CBOnion.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.CBOnion.ForeColor = System.Drawing.Color.Black;
            this.CBOnion.Location = new System.Drawing.Point(114, 20);
            this.CBOnion.Name = "CBOnion";
            this.CBOnion.Size = new System.Drawing.Size(59, 19);
            this.CBOnion.TabIndex = 12;
            this.CBOnion.Tag = "5";
            this.CBOnion.Text = "Onion";
            this.CBOnion.UseVisualStyleBackColor = true;
            this.CBOnion.CheckedChanged += new System.EventHandler(this.CBOnion_CheckedChanged);
            // 
            // CBOlives
            // 
            this.CBOlives.AutoSize = true;
            this.CBOlives.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.CBOlives.ForeColor = System.Drawing.Color.Black;
            this.CBOlives.Location = new System.Drawing.Point(114, 52);
            this.CBOlives.Name = "CBOlives";
            this.CBOlives.Size = new System.Drawing.Size(59, 19);
            this.CBOlives.TabIndex = 13;
            this.CBOlives.Tag = "5";
            this.CBOlives.Text = "Olives";
            this.CBOlives.UseVisualStyleBackColor = true;
            this.CBOlives.CheckedChanged += new System.EventHandler(this.CBOlives_CheckedChanged);
            // 
            // GBToppings
            // 
            this.GBToppings.BackColor = System.Drawing.Color.White;
            this.GBToppings.Controls.Add(this.CBOlives);
            this.GBToppings.Controls.Add(this.CBOnion);
            this.GBToppings.Controls.Add(this.CBTomatoes);
            this.GBToppings.Controls.Add(this.CBMushrooms);
            this.GBToppings.Controls.Add(this.CBExtraChees);
            this.GBToppings.Cursor = System.Windows.Forms.Cursors.Hand;
            this.GBToppings.Font = new System.Drawing.Font("Century", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.GBToppings.ForeColor = System.Drawing.Color.Black;
            this.GBToppings.Location = new System.Drawing.Point(286, 107);
            this.GBToppings.Name = "GBToppings";
            this.GBToppings.Size = new System.Drawing.Size(208, 109);
            this.GBToppings.TabIndex = 8;
            this.GBToppings.TabStop = false;
            this.GBToppings.Text = "Toppings";
            // 
            // BOrderPizza
            // 
            this.BOrderPizza.Font = new System.Drawing.Font("Century", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.BOrderPizza.Location = new System.Drawing.Point(531, 334);
            this.BOrderPizza.Name = "BOrderPizza";
            this.BOrderPizza.Size = new System.Drawing.Size(104, 42);
            this.BOrderPizza.TabIndex = 29;
            this.BOrderPizza.Text = "Order Pizza";
            this.BOrderPizza.UseVisualStyleBackColor = true;
            this.BOrderPizza.Click += new System.EventHandler(this.BOrderPizza_Click);
            // 
            // BResetForm
            // 
            this.BResetForm.Font = new System.Drawing.Font("Century", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.BResetForm.Location = new System.Drawing.Point(241, 368);
            this.BResetForm.Name = "BResetForm";
            this.BResetForm.Size = new System.Drawing.Size(104, 42);
            this.BResetForm.TabIndex = 17;
            this.BResetForm.Text = "Reset Form";
            this.BResetForm.UseVisualStyleBackColor = true;
            this.BResetForm.Click += new System.EventHandler(this.BResetForm_Click);
            // 
            // RBThink
            // 
            this.RBThink.AutoSize = true;
            this.RBThink.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.RBThink.ForeColor = System.Drawing.Color.Black;
            this.RBThink.Location = new System.Drawing.Point(10, 50);
            this.RBThink.Name = "RBThink";
            this.RBThink.Size = new System.Drawing.Size(55, 19);
            this.RBThink.TabIndex = 7;
            this.RBThink.TabStop = true;
            this.RBThink.Tag = "10";
            this.RBThink.Text = "Think";
            this.RBThink.UseVisualStyleBackColor = true;
            this.RBThink.CheckedChanged += new System.EventHandler(this.RBThink_CheckedChanged);
            // 
            // RBThin
            // 
            this.RBThin.AutoSize = true;
            this.RBThin.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.RBThin.ForeColor = System.Drawing.Color.Black;
            this.RBThin.Location = new System.Drawing.Point(10, 25);
            this.RBThin.Name = "RBThin";
            this.RBThin.Size = new System.Drawing.Size(49, 19);
            this.RBThin.TabIndex = 6;
            this.RBThin.TabStop = true;
            this.RBThin.Tag = "0";
            this.RBThin.Text = "Thin";
            this.RBThin.UseVisualStyleBackColor = true;
            this.RBThin.CheckedChanged += new System.EventHandler(this.RBThin_CheckedChanged);
            // 
            // GBCrustType
            // 
            this.GBCrustType.BackColor = System.Drawing.Color.White;
            this.GBCrustType.Controls.Add(this.RBThin);
            this.GBCrustType.Controls.Add(this.RBThink);
            this.GBCrustType.Cursor = System.Windows.Forms.Cursors.Hand;
            this.GBCrustType.Font = new System.Drawing.Font("Century", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.GBCrustType.ForeColor = System.Drawing.Color.Black;
            this.GBCrustType.Location = new System.Drawing.Point(136, 269);
            this.GBCrustType.Name = "GBCrustType";
            this.GBCrustType.Size = new System.Drawing.Size(119, 76);
            this.GBCrustType.TabIndex = 5;
            this.GBCrustType.TabStop = false;
            this.GBCrustType.Text = "Crust Type";
            // 
            // GBSize
            // 
            this.GBSize.BackColor = System.Drawing.Color.White;
            this.GBSize.Controls.Add(this.RBLarg);
            this.GBSize.Controls.Add(this.RBSmall);
            this.GBSize.Controls.Add(this.RBMedium);
            this.GBSize.Cursor = System.Windows.Forms.Cursors.Hand;
            this.GBSize.Font = new System.Drawing.Font("Century", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.GBSize.ForeColor = System.Drawing.Color.Black;
            this.GBSize.Location = new System.Drawing.Point(150, 107);
            this.GBSize.Name = "GBSize";
            this.GBSize.Size = new System.Drawing.Size(90, 109);
            this.GBSize.TabIndex = 1;
            this.GBSize.TabStop = false;
            this.GBSize.Text = "Size";
            // 
            // RBLarg
            // 
            this.RBLarg.AutoSize = true;
            this.RBLarg.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.RBLarg.ForeColor = System.Drawing.Color.Black;
            this.RBLarg.Location = new System.Drawing.Point(10, 83);
            this.RBLarg.Name = "RBLarg";
            this.RBLarg.Size = new System.Drawing.Size(57, 19);
            this.RBLarg.TabIndex = 4;
            this.RBLarg.TabStop = true;
            this.RBLarg.Tag = "40";
            this.RBLarg.Text = "Large";
            this.RBLarg.UseVisualStyleBackColor = true;
            this.RBLarg.CheckedChanged += new System.EventHandler(this.RBLarg_CheckedChanged);
            // 
            // RBSmall
            // 
            this.RBSmall.AutoSize = true;
            this.RBSmall.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.RBSmall.ForeColor = System.Drawing.Color.Black;
            this.RBSmall.Location = new System.Drawing.Point(10, 19);
            this.RBSmall.Name = "RBSmall";
            this.RBSmall.Size = new System.Drawing.Size(57, 19);
            this.RBSmall.TabIndex = 2;
            this.RBSmall.TabStop = true;
            this.RBSmall.Tag = "20";
            this.RBSmall.Text = "Small";
            this.RBSmall.UseVisualStyleBackColor = true;
            this.RBSmall.CheckedChanged += new System.EventHandler(this.RBSmall_CheckedChanged);
            // 
            // RBMedium
            // 
            this.RBMedium.AutoSize = true;
            this.RBMedium.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.RBMedium.ForeColor = System.Drawing.Color.Black;
            this.RBMedium.Location = new System.Drawing.Point(10, 51);
            this.RBMedium.Name = "RBMedium";
            this.RBMedium.Size = new System.Drawing.Size(71, 19);
            this.RBMedium.TabIndex = 3;
            this.RBMedium.TabStop = true;
            this.RBMedium.Tag = "30";
            this.RBMedium.Text = "Medium";
            this.RBMedium.UseVisualStyleBackColor = true;
            this.RBMedium.CheckedChanged += new System.EventHandler(this.RBMeduim_CheckedChanged);
            // 
            // LSize
            // 
            this.LSize.AutoSize = true;
            this.LSize.Font = new System.Drawing.Font("Century", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LSize.ForeColor = System.Drawing.Color.Black;
            this.LSize.Location = new System.Drawing.Point(6, 21);
            this.LSize.Name = "LSize";
            this.LSize.Size = new System.Drawing.Size(39, 16);
            this.LSize.TabIndex = 19;
            this.LSize.Text = "Size:";
            // 
            // LSizeSelected
            // 
            this.LSizeSelected.AutoSize = true;
            this.LSizeSelected.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LSizeSelected.ForeColor = System.Drawing.Color.Black;
            this.LSizeSelected.Location = new System.Drawing.Point(40, 21);
            this.LSizeSelected.Name = "LSizeSelected";
            this.LSizeSelected.Size = new System.Drawing.Size(53, 15);
            this.LSizeSelected.TabIndex = 20;
            this.LSizeSelected.Text = "Medium";
            // 
            // LToppings
            // 
            this.LToppings.AutoSize = true;
            this.LToppings.Font = new System.Drawing.Font("Century", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LToppings.ForeColor = System.Drawing.Color.Black;
            this.LToppings.Location = new System.Drawing.Point(6, 83);
            this.LToppings.Name = "LToppings";
            this.LToppings.Size = new System.Drawing.Size(70, 16);
            this.LToppings.TabIndex = 23;
            this.LToppings.Text = "Toppings:";
            // 
            // LCrustTypeSelected
            // 
            this.LCrustTypeSelected.AutoSize = true;
            this.LCrustTypeSelected.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LCrustTypeSelected.ForeColor = System.Drawing.Color.Black;
            this.LCrustTypeSelected.Location = new System.Drawing.Point(86, 52);
            this.LCrustTypeSelected.Name = "LCrustTypeSelected";
            this.LCrustTypeSelected.Size = new System.Drawing.Size(31, 15);
            this.LCrustTypeSelected.TabIndex = 22;
            this.LCrustTypeSelected.Text = "Thin";
            // 
            // LCrustType
            // 
            this.LCrustType.AutoSize = true;
            this.LCrustType.Font = new System.Drawing.Font("Century", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LCrustType.ForeColor = System.Drawing.Color.Black;
            this.LCrustType.Location = new System.Drawing.Point(6, 52);
            this.LCrustType.Name = "LCrustType";
            this.LCrustType.Size = new System.Drawing.Size(83, 16);
            this.LCrustType.TabIndex = 21;
            this.LCrustType.Text = "Crust Type:";
            // 
            // LToppingsSelected
            // 
            this.LToppingsSelected.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LToppingsSelected.ForeColor = System.Drawing.Color.Black;
            this.LToppingsSelected.Location = new System.Drawing.Point(15, 107);
            this.LToppingsSelected.Name = "LToppingsSelected";
            this.LToppingsSelected.Size = new System.Drawing.Size(206, 46);
            this.LToppingsSelected.TabIndex = 24;
            this.LToppingsSelected.Text = "No Toppings";
            // 
            // LTotalPrice
            // 
            this.LTotalPrice.AutoSize = true;
            this.LTotalPrice.Font = new System.Drawing.Font("Century", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LTotalPrice.ForeColor = System.Drawing.Color.Black;
            this.LTotalPrice.Location = new System.Drawing.Point(6, 184);
            this.LTotalPrice.Name = "LTotalPrice";
            this.LTotalPrice.Size = new System.Drawing.Size(83, 16);
            this.LTotalPrice.TabIndex = 27;
            this.LTotalPrice.Text = "Total Price:";
            // 
            // LWhereToEat
            // 
            this.LWhereToEat.AutoSize = true;
            this.LWhereToEat.Font = new System.Drawing.Font("Century", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LWhereToEat.ForeColor = System.Drawing.Color.Black;
            this.LWhereToEat.Location = new System.Drawing.Point(6, 153);
            this.LWhereToEat.Name = "LWhereToEat";
            this.LWhereToEat.Size = new System.Drawing.Size(99, 16);
            this.LWhereToEat.TabIndex = 25;
            this.LWhereToEat.Text = "Where To Eat:";
            // 
            // LWhereToEatSelected
            // 
            this.LWhereToEatSelected.AutoSize = true;
            this.LWhereToEatSelected.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LWhereToEatSelected.ForeColor = System.Drawing.Color.Black;
            this.LWhereToEatSelected.Location = new System.Drawing.Point(99, 153);
            this.LWhereToEatSelected.Name = "LWhereToEatSelected";
            this.LWhereToEatSelected.Size = new System.Drawing.Size(38, 15);
            this.LWhereToEatSelected.TabIndex = 26;
            this.LWhereToEatSelected.Text = "Eat In";
            // 
            // LPrice
            // 
            this.LPrice.AutoSize = true;
            this.LPrice.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LPrice.ForeColor = System.Drawing.Color.Black;
            this.LPrice.Location = new System.Drawing.Point(84, 184);
            this.LPrice.Name = "LPrice";
            this.LPrice.Size = new System.Drawing.Size(21, 15);
            this.LPrice.TabIndex = 28;
            this.LPrice.Tag = "";
            this.LPrice.Text = "$0";
            // 
            // GBOrderSummary
            // 
            this.GBOrderSummary.BackColor = System.Drawing.Color.White;
            this.GBOrderSummary.Controls.Add(this.LPrice);
            this.GBOrderSummary.Controls.Add(this.LWhereToEatSelected);
            this.GBOrderSummary.Controls.Add(this.LWhereToEat);
            this.GBOrderSummary.Controls.Add(this.LTotalPrice);
            this.GBOrderSummary.Controls.Add(this.LToppingsSelected);
            this.GBOrderSummary.Controls.Add(this.LCrustType);
            this.GBOrderSummary.Controls.Add(this.LCrustTypeSelected);
            this.GBOrderSummary.Controls.Add(this.LToppings);
            this.GBOrderSummary.Controls.Add(this.LSizeSelected);
            this.GBOrderSummary.Controls.Add(this.LSize);
            this.GBOrderSummary.Font = new System.Drawing.Font("Century", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.GBOrderSummary.ForeColor = System.Drawing.Color.Black;
            this.GBOrderSummary.Location = new System.Drawing.Point(532, 107);
            this.GBOrderSummary.Name = "GBOrderSummary";
            this.GBOrderSummary.Size = new System.Drawing.Size(221, 206);
            this.GBOrderSummary.TabIndex = 18;
            this.GBOrderSummary.TabStop = false;
            this.GBOrderSummary.Text = "Order Summary";
            // 
            // BOrderCancel
            // 
            this.BOrderCancel.Enabled = false;
            this.BOrderCancel.Font = new System.Drawing.Font("Century", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.BOrderCancel.Location = new System.Drawing.Point(649, 334);
            this.BOrderCancel.Name = "BOrderCancel";
            this.BOrderCancel.Size = new System.Drawing.Size(104, 42);
            this.BOrderCancel.TabIndex = 30;
            this.BOrderCancel.Text = "Cancel Oder";
            this.BOrderCancel.UseVisualStyleBackColor = true;
            this.BOrderCancel.Click += new System.EventHandler(this.BOrderCancel_Click);
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = global::Project1_Pizza.Properties.Resources.Pizza;
            this.pictureBox1.Location = new System.Drawing.Point(261, -10);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(547, 549);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pictureBox1.TabIndex = 31;
            this.pictureBox1.TabStop = false;
            // 
            // FormPizzaOrder
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.Black;
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.BOrderCancel);
            this.Controls.Add(this.GBSize);
            this.Controls.Add(this.GBOrderSummary);
            this.Controls.Add(this.BResetForm);
            this.Controls.Add(this.BOrderPizza);
            this.Controls.Add(this.GBToppings);
            this.Controls.Add(this.GBWhereEat);
            this.Controls.Add(this.GBCrustType);
            this.Controls.Add(this.LTitle);
            this.Controls.Add(this.pictureBox1);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "FormPizzaOrder";
            this.Text = "Pizza Order";
            this.Load += new System.EventHandler(this.MainForm_Load);
            this.GBWhereEat.ResumeLayout(false);
            this.GBWhereEat.PerformLayout();
            this.GBToppings.ResumeLayout(false);
            this.GBToppings.PerformLayout();
            this.GBCrustType.ResumeLayout(false);
            this.GBCrustType.PerformLayout();
            this.GBSize.ResumeLayout(false);
            this.GBSize.PerformLayout();
            this.GBOrderSummary.ResumeLayout(false);
            this.GBOrderSummary.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label LTitle;
        private System.Windows.Forms.GroupBox GBWhereEat;
        private System.Windows.Forms.RadioButton RBEatIn;
        private System.Windows.Forms.RadioButton RBTakeOut;
        private System.Windows.Forms.CheckBox CBExtraChees;
        private System.Windows.Forms.CheckBox CBMushrooms;
        private System.Windows.Forms.CheckBox CBTomatoes;
        private System.Windows.Forms.CheckBox CBOnion;
        private System.Windows.Forms.CheckBox CBOlives;
        private System.Windows.Forms.GroupBox GBToppings;
        private System.Windows.Forms.Button BOrderPizza;
        private System.Windows.Forms.Button BResetForm;
        private System.Windows.Forms.RadioButton RBThink;
        private System.Windows.Forms.RadioButton RBThin;
        private System.Windows.Forms.GroupBox GBCrustType;
        private System.Windows.Forms.GroupBox GBSize;
        private System.Windows.Forms.RadioButton RBLarg;
        private System.Windows.Forms.RadioButton RBSmall;
        private System.Windows.Forms.RadioButton RBMedium;
        private System.Windows.Forms.Label LSize;
        private System.Windows.Forms.Label LSizeSelected;
        private System.Windows.Forms.Label LToppings;
        private System.Windows.Forms.Label LCrustTypeSelected;
        private System.Windows.Forms.Label LCrustType;
        private System.Windows.Forms.Label LToppingsSelected;
        private System.Windows.Forms.Label LTotalPrice;
        private System.Windows.Forms.Label LWhereToEat;
        private System.Windows.Forms.Label LWhereToEatSelected;
        private System.Windows.Forms.Label LPrice;
        private System.Windows.Forms.GroupBox GBOrderSummary;
        private System.Windows.Forms.Button BOrderCancel;
        private System.Windows.Forms.PictureBox pictureBox1;
    }
}

