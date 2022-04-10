using System.Runtime.InteropServices;

namespace Forms {
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
            System.Windows.Forms.ListViewItem listViewItem1 = new System.Windows.Forms.ListViewItem(new string[] {
            "Test",
            "Test2",
            "Test3"}, -1);
            this.button1=new System.Windows.Forms.Button();
            this.button2=new System.Windows.Forms.Button();
            this.button3=new System.Windows.Forms.Button();
            this.button4=new System.Windows.Forms.Button();
            this.button5=new System.Windows.Forms.Button();
            this.button7=new System.Windows.Forms.Button();
            this.Source=new System.Windows.Forms.ListView();
            this.columnHeader1=new System.Windows.Forms.ColumnHeader();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.Location=new System.Drawing.Point(12, 12);
            this.button1.Name="button1";
            this.button1.Size=new System.Drawing.Size(94, 29);
            this.button1.TabIndex=0;
            this.button1.Text="button1";
            this.button1.UseVisualStyleBackColor=true;
            // 
            // button2
            // 
            this.button2.Location=new System.Drawing.Point(112, 12);
            this.button2.Name="button2";
            this.button2.Size=new System.Drawing.Size(94, 29);
            this.button2.TabIndex=1;
            this.button2.Text="button2";
            this.button2.UseVisualStyleBackColor=true;
            // 
            // button3
            // 
            this.button3.Location=new System.Drawing.Point(212, 12);
            this.button3.Name="button3";
            this.button3.Size=new System.Drawing.Size(94, 29);
            this.button3.TabIndex=2;
            this.button3.Text="button3";
            this.button3.UseVisualStyleBackColor=true;
            // 
            // button4
            // 
            this.button4.Location=new System.Drawing.Point(312, 12);
            this.button4.Name="button4";
            this.button4.Size=new System.Drawing.Size(94, 29);
            this.button4.TabIndex=3;
            this.button4.Text="button4";
            this.button4.UseVisualStyleBackColor=true;
            // 
            // button5
            // 
            this.button5.Location=new System.Drawing.Point(412, 12);
            this.button5.Name="button5";
            this.button5.Size=new System.Drawing.Size(94, 29);
            this.button5.TabIndex=4;
            this.button5.Text="button5";
            this.button5.UseVisualStyleBackColor=true;
            // 
            // button7
            // 
            this.button7.Location=new System.Drawing.Point(612, 12);
            this.button7.Name="button7";
            this.button7.Size=new System.Drawing.Size(94, 29);
            this.button7.TabIndex=6;
            this.button7.Text="button7";
            this.button7.UseVisualStyleBackColor=true;
            // 
            // Source
            // 
            this.Source.Items.AddRange(new System.Windows.Forms.ListViewItem[] {
            listViewItem1});
            this.Source.Location=new System.Drawing.Point(12, 47);
            this.Source.Name="Source";
            this.Source.Size=new System.Drawing.Size(776, 709);
            this.Source.TabIndex=7;
            this.Source.UseCompatibleStateImageBehavior=false;
            this.Source.View=System.Windows.Forms.View.Details;
            // 
            // Form1
            // 
            this.AutoScaleDimensions=new System.Drawing.SizeF(8F, 20F);
            this.AutoScaleMode=System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize=new System.Drawing.Size(800, 768);
            this.Controls.Add(this.Source);
            this.Controls.Add(this.button7);
            this.Controls.Add(this.button5);
            this.Controls.Add(this.button4);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Name="Form1";
            this.Text="Form1";
            this.ResumeLayout(false);

        }

        #endregion

        private Button button1;
        private Button button2;
        private Button button3;
        private Button button4;
        private Button button5;
        private Button button7;
        private ListView Source;
        private ColumnHeader columnHeader1;
    }
}