namespace Test_Of_Forms {
    partial class Form1 {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing) {
            if(disposing&&(components!=null)) {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent() {
            this.PushName=new System.Windows.Forms.TextBox();
            this.button1=new System.Windows.Forms.Button();
            this.Names=new System.Windows.Forms.Label();
            this.ListNames=new System.Windows.Forms.ListBox();
            this.Source=new System.Windows.Forms.ListView();
            this.SuspendLayout();
            // 
            // PushName
            // 
            this.PushName.Font=new System.Drawing.Font("Times New Roman", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.PushName.Location=new System.Drawing.Point(366, 62);
            this.PushName.Name="PushName";
            this.PushName.Size=new System.Drawing.Size(136, 34);
            this.PushName.TabIndex=0;
            // 
            // button1
            // 
            this.button1.Font=new System.Drawing.Font("TT Milks Casual Outline Shadow", 20F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point);
            this.button1.ForeColor=System.Drawing.Color.Crimson;
            this.button1.Location=new System.Drawing.Point(366, 102);
            this.button1.Name="button1";
            this.button1.Size=new System.Drawing.Size(136, 89);
            this.button1.TabIndex=2;
            this.button1.Text="button";
            this.button1.UseVisualStyleBackColor=true;
            this.button1.Click+=new System.EventHandler(this.ButtonPushName);
            // 
            // Names
            // 
            this.Names.AutoSize=true;
            this.Names.Font=new System.Drawing.Font("TT Milks Casual Outline Shadow", 20F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.Names.Location=new System.Drawing.Point(22, 18);
            this.Names.Name="Names";
            this.Names.Size=new System.Drawing.Size(150, 41);
            this.Names.TabIndex=3;
            this.Names.Text="Names";
            // 
            // ListNames
            // 
            this.ListNames.Font=new System.Drawing.Font("Times New Roman", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.ListNames.FormattingEnabled=true;
            this.ListNames.ItemHeight=26;
            this.ListNames.Location=new System.Drawing.Point(33, 62);
            this.ListNames.Name="ListNames";
            this.ListNames.Size=new System.Drawing.Size(327, 212);
            this.ListNames.TabIndex=4;
            // 
            // Source
            // 
            this.Source.Font=new System.Drawing.Font("Times New Roman", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.Source.Location=new System.Drawing.Point(508, 12);
            this.Source.Name="Source";
            this.Source.Size=new System.Drawing.Size(613, 355);
            this.Source.TabIndex=5;
            this.Source.UseCompatibleStateImageBehavior=false;
            this.Source.View=System.Windows.Forms.View.Details;
            Source.Columns.Add("Num", 60, HorizontalAlignment.Left);
            Source.Columns.Add("Author", 100, HorizontalAlignment.Left);
            Source.Columns.Add("Title", 100, HorizontalAlignment.Left);
            Source.Columns.Add("Publisher", 100, HorizontalAlignment.Left);
            Source.Columns.Add("Year", 60, HorizontalAlignment.Left);
            Source.Columns.Add("Type", 60, HorizontalAlignment.Left);
            Source.Columns.Add("Doi", 80, HorizontalAlignment.Left);
            // 
            // Form1
            // 
            this.AutoScaleDimensions=new System.Drawing.SizeF(8F, 20F);
            this.AutoScaleMode=System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize=new System.Drawing.Size(1133, 379);
            this.Controls.Add(this.Source);
            this.Controls.Add(this.ListNames);
            this.Controls.Add(this.Names);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.PushName);
            this.Name="Form1";
            this.Text="List of names";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private TextBox PushName;
        private Button button1;
        private Label Names;
        private ListBox ListNames;
        private ListView Source;
    }
}