namespace DM_DB {
    partial class TableStudent {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
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
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent() {
            this.components=new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(TableStudent));
            this.groupBox1=new System.Windows.Forms.GroupBox();
            this.button1=new System.Windows.Forms.Button();
            this.radioButton2=new System.Windows.Forms.RadioButton();
            this.radioButton1=new System.Windows.Forms.RadioButton();
            this.listBox1=new System.Windows.Forms.ListBox();
            this.label1=new System.Windows.Forms.Label();
            this.button2=new System.Windows.Forms.Button();
            this.button3=new System.Windows.Forms.Button();
            this.label2=new System.Windows.Forms.Label();
            this.label3=new System.Windows.Forms.Label();
            this.textBox1=new System.Windows.Forms.TextBox();
            this.lab_5DataSet=new DM_DB.Lab_5DataSet();
            this.studentBindingSource=new System.Windows.Forms.BindingSource(this.components);
            this.studentTableAdapter=new DM_DB.Lab_5DataSetTableAdapters.StudentTableAdapter();
            this.tableAdapterManager=new DM_DB.Lab_5DataSetTableAdapters.TableAdapterManager();
            this.studentBindingNavigator=new System.Windows.Forms.BindingNavigator(this.components);
            this.bindingNavigatorAddNewItem=new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorCountItem=new System.Windows.Forms.ToolStripLabel();
            this.bindingNavigatorDeleteItem=new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorMoveFirstItem=new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorMovePreviousItem=new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorSeparator=new System.Windows.Forms.ToolStripSeparator();
            this.bindingNavigatorPositionItem=new System.Windows.Forms.ToolStripTextBox();
            this.bindingNavigatorSeparator1=new System.Windows.Forms.ToolStripSeparator();
            this.bindingNavigatorMoveNextItem=new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorMoveLastItem=new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorSeparator2=new System.Windows.Forms.ToolStripSeparator();
            this.studentBindingNavigatorSaveItem=new System.Windows.Forms.ToolStripButton();
            this.studentDataGridView=new System.Windows.Forms.DataGridView();
            this.dataGridViewTextBoxColumn2=new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewTextBoxColumn3=new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewTextBoxColumn4=new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewTextBoxColumn5=new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewTextBoxColumn6=new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.groupBox1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.lab_5DataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.studentBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.studentBindingNavigator)).BeginInit();
            this.studentBindingNavigator.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.studentDataGridView)).BeginInit();
            this.SuspendLayout();
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.button1);
            this.groupBox1.Controls.Add(this.radioButton2);
            this.groupBox1.Controls.Add(this.radioButton1);
            this.groupBox1.Controls.Add(this.listBox1);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.ForeColor=System.Drawing.Color.Black;
            this.groupBox1.Location=new System.Drawing.Point(573, 66);
            this.groupBox1.Margin=new System.Windows.Forms.Padding(5, 20, 10, 5);
            this.groupBox1.Name="groupBox1";
            this.groupBox1.Padding=new System.Windows.Forms.Padding(5, 10, 10, 5);
            this.groupBox1.Size=new System.Drawing.Size(250, 313);
            this.groupBox1.TabIndex=0;
            this.groupBox1.TabStop=false;
            this.groupBox1.Text="Сортировка";
            // 
            // button1
            // 
            this.button1.Location=new System.Drawing.Point(8, 277);
            this.button1.Name="button1";
            this.button1.Size=new System.Drawing.Size(229, 31);
            this.button1.TabIndex=4;
            this.button1.Text="Сортировать";
            this.button1.UseVisualStyleBackColor=true;
            this.button1.Click+=new System.EventHandler(this.button1_Click);
            // 
            // radioButton2
            // 
            this.radioButton2.AutoSize=true;
            this.radioButton2.Location=new System.Drawing.Point(7, 251);
            this.radioButton2.Name="radioButton2";
            this.radioButton2.Size=new System.Drawing.Size(196, 20);
            this.radioButton2.TabIndex=3;
            this.radioButton2.Text="Сортировка по убыванию";
            this.radioButton2.UseVisualStyleBackColor=true;
            // 
            // radioButton1
            // 
            this.radioButton1.AutoSize=true;
            this.radioButton1.Checked=true;
            this.radioButton1.Location=new System.Drawing.Point(7, 225);
            this.radioButton1.Name="radioButton1";
            this.radioButton1.Size=new System.Drawing.Size(217, 20);
            this.radioButton1.TabIndex=2;
            this.radioButton1.TabStop=true;
            this.radioButton1.Text="Сортировка по возрастанию";
            this.radioButton1.UseVisualStyleBackColor=true;
            // 
            // listBox1
            // 
            this.listBox1.FormattingEnabled=true;
            this.listBox1.ItemHeight=16;
            this.listBox1.Items.AddRange(new object[] {
            "ФИО",
            "Дата рождения",
            "Пол",
            "Номер группы",
            "Стипендия"});
            this.listBox1.Location=new System.Drawing.Point(8, 39);
            this.listBox1.Name="listBox1";
            this.listBox1.Size=new System.Drawing.Size(234, 180);
            this.listBox1.TabIndex=1;
            this.listBox1.SelectedIndexChanged+=new System.EventHandler(this.listBox1_SelectedIndexChanged);
            // 
            // label1
            // 
            this.label1.AutoSize=true;
            this.label1.Location=new System.Drawing.Point(8, 20);
            this.label1.Name="label1";
            this.label1.Size=new System.Drawing.Size(147, 16);
            this.label1.TabIndex=0;
            this.label1.Text="Поле для сортировки";
            // 
            // button2
            // 
            this.button2.Location=new System.Drawing.Point(573, 387);
            this.button2.Name="button2";
            this.button2.Size=new System.Drawing.Size(110, 30);
            this.button2.TabIndex=1;
            this.button2.Text="Найти";
            this.button2.UseVisualStyleBackColor=true;
            this.button2.Click+=new System.EventHandler(this.button2_Click);
            // 
            // button3
            // 
            this.button3.Location=new System.Drawing.Point(713, 387);
            this.button3.Name="button3";
            this.button3.Size=new System.Drawing.Size(110, 30);
            this.button3.TabIndex=2;
            this.button3.Text="Показать все";
            this.button3.UseVisualStyleBackColor=true;
            this.button3.Click+=new System.EventHandler(this.button3_Click);
            // 
            // label2
            // 
            this.label2.AutoSize=true;
            this.label2.Font=new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label2.Location=new System.Drawing.Point(9, 389);
            this.label2.Name="label2";
            this.label2.Size=new System.Drawing.Size(66, 25);
            this.label2.TabIndex=3;
            this.label2.Text="ФИО:";
            // 
            // label3
            // 
            this.label3.AutoSize=true;
            this.label3.Font=new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label3.ForeColor=System.Drawing.Color.DarkBlue;
            this.label3.Location=new System.Drawing.Point(188, 27);
            this.label3.Name="label3";
            this.label3.Size=new System.Drawing.Size(431, 29);
            this.label3.TabIndex=4;
            this.label3.Text="Таблица \"Студент\" (табличный вид)";
            this.label3.TextAlign=System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // textBox1
            // 
            this.textBox1.Font=new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.textBox1.Location=new System.Drawing.Point(82, 387);
            this.textBox1.Margin=new System.Windows.Forms.Padding(3, 3, 10, 3);
            this.textBox1.Name="textBox1";
            this.textBox1.Size=new System.Drawing.Size(483, 30);
            this.textBox1.TabIndex=5;
            // 
            // lab_5DataSet
            // 
            this.lab_5DataSet.DataSetName="Lab_5DataSet";
            this.lab_5DataSet.SchemaSerializationMode=System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // studentBindingSource
            // 
            this.studentBindingSource.DataMember="Student";
            this.studentBindingSource.DataSource=this.lab_5DataSet;
            // 
            // studentTableAdapter
            // 
            this.studentTableAdapter.ClearBeforeFill=true;
            // 
            // tableAdapterManager
            // 
            this.tableAdapterManager.BackupDataSetBeforeUpdate=false;
            this.tableAdapterManager.ExamNewTableAdapter=null;
            this.tableAdapterManager.ExamTableAdapter=null;
            this.tableAdapterManager.ExamTestTableAdapter=null;
            this.tableAdapterManager.LecturerNewTableAdapter=null;
            this.tableAdapterManager.LecturerTableAdapter=null;
            this.tableAdapterManager.StudentTableAdapter=this.studentTableAdapter;
            this.tableAdapterManager.StudGroupNewTableAdapter=null;
            this.tableAdapterManager.StudGroupTableAdapter=null;
            this.tableAdapterManager.StudGroupTestTableAdapter=null;
            this.tableAdapterManager.SubjectLectTableAdapter=null;
            this.tableAdapterManager.UpdateOrder=DM_DB.Lab_5DataSetTableAdapters.TableAdapterManager.UpdateOrderOption.InsertUpdateDelete;
            // 
            // studentBindingNavigator
            // 
            this.studentBindingNavigator.AddNewItem=this.bindingNavigatorAddNewItem;
            this.studentBindingNavigator.BindingSource=this.studentBindingSource;
            this.studentBindingNavigator.CountItem=this.bindingNavigatorCountItem;
            this.studentBindingNavigator.DeleteItem=this.bindingNavigatorDeleteItem;
            this.studentBindingNavigator.ImageScalingSize=new System.Drawing.Size(20, 20);
            this.studentBindingNavigator.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.bindingNavigatorMoveFirstItem,
            this.bindingNavigatorMovePreviousItem,
            this.bindingNavigatorSeparator,
            this.bindingNavigatorPositionItem,
            this.bindingNavigatorCountItem,
            this.bindingNavigatorSeparator1,
            this.bindingNavigatorMoveNextItem,
            this.bindingNavigatorMoveLastItem,
            this.bindingNavigatorSeparator2,
            this.bindingNavigatorAddNewItem,
            this.bindingNavigatorDeleteItem,
            this.studentBindingNavigatorSaveItem});
            this.studentBindingNavigator.Location=new System.Drawing.Point(0, 0);
            this.studentBindingNavigator.MoveFirstItem=this.bindingNavigatorMoveFirstItem;
            this.studentBindingNavigator.MoveLastItem=this.bindingNavigatorMoveLastItem;
            this.studentBindingNavigator.MoveNextItem=this.bindingNavigatorMoveNextItem;
            this.studentBindingNavigator.MovePreviousItem=this.bindingNavigatorMovePreviousItem;
            this.studentBindingNavigator.Name="studentBindingNavigator";
            this.studentBindingNavigator.PositionItem=this.bindingNavigatorPositionItem;
            this.studentBindingNavigator.Size=new System.Drawing.Size(842, 27);
            this.studentBindingNavigator.TabIndex=6;
            this.studentBindingNavigator.Text="bindingNavigator1";
            // 
            // bindingNavigatorAddNewItem
            // 
            this.bindingNavigatorAddNewItem.DisplayStyle=System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorAddNewItem.Image=((System.Drawing.Image)(resources.GetObject("bindingNavigatorAddNewItem.Image")));
            this.bindingNavigatorAddNewItem.Name="bindingNavigatorAddNewItem";
            this.bindingNavigatorAddNewItem.RightToLeftAutoMirrorImage=true;
            this.bindingNavigatorAddNewItem.Size=new System.Drawing.Size(29, 24);
            this.bindingNavigatorAddNewItem.Text="Add new";
            // 
            // bindingNavigatorCountItem
            // 
            this.bindingNavigatorCountItem.Name="bindingNavigatorCountItem";
            this.bindingNavigatorCountItem.Size=new System.Drawing.Size(45, 24);
            this.bindingNavigatorCountItem.Text="of {0}";
            this.bindingNavigatorCountItem.ToolTipText="Total number of items";
            // 
            // bindingNavigatorDeleteItem
            // 
            this.bindingNavigatorDeleteItem.DisplayStyle=System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorDeleteItem.Image=((System.Drawing.Image)(resources.GetObject("bindingNavigatorDeleteItem.Image")));
            this.bindingNavigatorDeleteItem.Name="bindingNavigatorDeleteItem";
            this.bindingNavigatorDeleteItem.RightToLeftAutoMirrorImage=true;
            this.bindingNavigatorDeleteItem.Size=new System.Drawing.Size(29, 24);
            this.bindingNavigatorDeleteItem.Text="Delete";
            // 
            // bindingNavigatorMoveFirstItem
            // 
            this.bindingNavigatorMoveFirstItem.DisplayStyle=System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveFirstItem.Image=((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveFirstItem.Image")));
            this.bindingNavigatorMoveFirstItem.Name="bindingNavigatorMoveFirstItem";
            this.bindingNavigatorMoveFirstItem.RightToLeftAutoMirrorImage=true;
            this.bindingNavigatorMoveFirstItem.Size=new System.Drawing.Size(29, 24);
            this.bindingNavigatorMoveFirstItem.Text="Move first";
            // 
            // bindingNavigatorMovePreviousItem
            // 
            this.bindingNavigatorMovePreviousItem.DisplayStyle=System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMovePreviousItem.Image=((System.Drawing.Image)(resources.GetObject("bindingNavigatorMovePreviousItem.Image")));
            this.bindingNavigatorMovePreviousItem.Name="bindingNavigatorMovePreviousItem";
            this.bindingNavigatorMovePreviousItem.RightToLeftAutoMirrorImage=true;
            this.bindingNavigatorMovePreviousItem.Size=new System.Drawing.Size(29, 24);
            this.bindingNavigatorMovePreviousItem.Text="Move previous";
            // 
            // bindingNavigatorSeparator
            // 
            this.bindingNavigatorSeparator.Name="bindingNavigatorSeparator";
            this.bindingNavigatorSeparator.Size=new System.Drawing.Size(6, 27);
            // 
            // bindingNavigatorPositionItem
            // 
            this.bindingNavigatorPositionItem.AccessibleName="Position";
            this.bindingNavigatorPositionItem.AutoSize=false;
            this.bindingNavigatorPositionItem.Font=new System.Drawing.Font("Segoe UI", 9F);
            this.bindingNavigatorPositionItem.Name="bindingNavigatorPositionItem";
            this.bindingNavigatorPositionItem.Size=new System.Drawing.Size(50, 27);
            this.bindingNavigatorPositionItem.Text="0";
            this.bindingNavigatorPositionItem.ToolTipText="Current position";
            // 
            // bindingNavigatorSeparator1
            // 
            this.bindingNavigatorSeparator1.Name="bindingNavigatorSeparator1";
            this.bindingNavigatorSeparator1.Size=new System.Drawing.Size(6, 27);
            // 
            // bindingNavigatorMoveNextItem
            // 
            this.bindingNavigatorMoveNextItem.DisplayStyle=System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveNextItem.Image=((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveNextItem.Image")));
            this.bindingNavigatorMoveNextItem.Name="bindingNavigatorMoveNextItem";
            this.bindingNavigatorMoveNextItem.RightToLeftAutoMirrorImage=true;
            this.bindingNavigatorMoveNextItem.Size=new System.Drawing.Size(29, 24);
            this.bindingNavigatorMoveNextItem.Text="Move next";
            // 
            // bindingNavigatorMoveLastItem
            // 
            this.bindingNavigatorMoveLastItem.DisplayStyle=System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveLastItem.Image=((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveLastItem.Image")));
            this.bindingNavigatorMoveLastItem.Name="bindingNavigatorMoveLastItem";
            this.bindingNavigatorMoveLastItem.RightToLeftAutoMirrorImage=true;
            this.bindingNavigatorMoveLastItem.Size=new System.Drawing.Size(29, 24);
            this.bindingNavigatorMoveLastItem.Text="Move last";
            // 
            // bindingNavigatorSeparator2
            // 
            this.bindingNavigatorSeparator2.Name="bindingNavigatorSeparator2";
            this.bindingNavigatorSeparator2.Size=new System.Drawing.Size(6, 27);
            // 
            // studentBindingNavigatorSaveItem
            // 
            this.studentBindingNavigatorSaveItem.DisplayStyle=System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.studentBindingNavigatorSaveItem.Image=((System.Drawing.Image)(resources.GetObject("studentBindingNavigatorSaveItem.Image")));
            this.studentBindingNavigatorSaveItem.Name="studentBindingNavigatorSaveItem";
            this.studentBindingNavigatorSaveItem.Size=new System.Drawing.Size(29, 24);
            this.studentBindingNavigatorSaveItem.Text="Save Data";
            this.studentBindingNavigatorSaveItem.Click+=new System.EventHandler(this.studentBindingNavigatorSaveItem_Click);
            // 
            // studentDataGridView
            // 
            this.studentDataGridView.AutoGenerateColumns=false;
            this.studentDataGridView.ColumnHeadersHeightSizeMode=System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.studentDataGridView.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.dataGridViewTextBoxColumn2,
            this.dataGridViewTextBoxColumn3,
            this.dataGridViewTextBoxColumn4,
            this.dataGridViewTextBoxColumn5,
            this.dataGridViewTextBoxColumn6});
            this.studentDataGridView.DataSource=this.studentBindingSource;
            this.studentDataGridView.Location=new System.Drawing.Point(12, 66);
            this.studentDataGridView.Name="studentDataGridView";
            this.studentDataGridView.RowHeadersWidth=51;
            this.studentDataGridView.RowTemplate.Height=24;
            this.studentDataGridView.Size=new System.Drawing.Size(553, 305);
            this.studentDataGridView.TabIndex=7;
            // 
            // dataGridViewTextBoxColumn2
            // 
            this.dataGridViewTextBoxColumn2.AutoSizeMode=System.Windows.Forms.DataGridViewAutoSizeColumnMode.AllCells;
            this.dataGridViewTextBoxColumn2.DataPropertyName="FIO";
            this.dataGridViewTextBoxColumn2.Frozen=true;
            this.dataGridViewTextBoxColumn2.HeaderText="ФИО";
            this.dataGridViewTextBoxColumn2.MinimumWidth=6;
            this.dataGridViewTextBoxColumn2.Name="dataGridViewTextBoxColumn2";
            this.dataGridViewTextBoxColumn2.Width=67;
            // 
            // dataGridViewTextBoxColumn3
            // 
            this.dataGridViewTextBoxColumn3.DataPropertyName="Birthday";
            this.dataGridViewTextBoxColumn3.HeaderText="Дата рождения";
            this.dataGridViewTextBoxColumn3.MinimumWidth=6;
            this.dataGridViewTextBoxColumn3.Name="dataGridViewTextBoxColumn3";
            this.dataGridViewTextBoxColumn3.Width=65;
            // 
            // dataGridViewTextBoxColumn4
            // 
            this.dataGridViewTextBoxColumn4.DataPropertyName="Gender";
            this.dataGridViewTextBoxColumn4.FillWeight=90F;
            this.dataGridViewTextBoxColumn4.HeaderText="Пол";
            this.dataGridViewTextBoxColumn4.MinimumWidth=6;
            this.dataGridViewTextBoxColumn4.Name="dataGridViewTextBoxColumn4";
            this.dataGridViewTextBoxColumn4.Width=30;
            // 
            // dataGridViewTextBoxColumn5
            // 
            this.dataGridViewTextBoxColumn5.DataPropertyName="NameGroup";
            this.dataGridViewTextBoxColumn5.HeaderText="Номер группы";
            this.dataGridViewTextBoxColumn5.MinimumWidth=6;
            this.dataGridViewTextBoxColumn5.Name="dataGridViewTextBoxColumn5";
            this.dataGridViewTextBoxColumn5.Width=65;
            // 
            // dataGridViewTextBoxColumn6
            // 
            this.dataGridViewTextBoxColumn6.AutoSizeMode=System.Windows.Forms.DataGridViewAutoSizeColumnMode.AllCells;
            this.dataGridViewTextBoxColumn6.DataPropertyName="Stip";
            this.dataGridViewTextBoxColumn6.HeaderText="Стипендия";
            this.dataGridViewTextBoxColumn6.MinimumWidth=6;
            this.dataGridViewTextBoxColumn6.Name="dataGridViewTextBoxColumn6";
            this.dataGridViewTextBoxColumn6.Width=107;
            // 
            // TableStudent
            // 
            this.AutoScaleDimensions=new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode=System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize=new System.Drawing.Size(842, 437);
            this.Controls.Add(this.studentDataGridView);
            this.Controls.Add(this.studentBindingNavigator);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.groupBox1);
            this.FormBorderStyle=System.Windows.Forms.FormBorderStyle.Fixed3D;
            this.MaximizeBox=false;
            this.MinimizeBox=false;
            this.Name="TableStudent";
            this.Text="Таблица \"Студент\"";
            this.Load+=new System.EventHandler(this.TableStudent_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.lab_5DataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.studentBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.studentBindingNavigator)).EndInit();
            this.studentBindingNavigator.ResumeLayout(false);
            this.studentBindingNavigator.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.studentDataGridView)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.RadioButton radioButton2;
        private System.Windows.Forms.RadioButton radioButton1;
        private System.Windows.Forms.ListBox listBox1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox textBox1;
        private Lab_5DataSet lab_5DataSet;
        private System.Windows.Forms.BindingSource studentBindingSource;
        private Lab_5DataSetTableAdapters.StudentTableAdapter studentTableAdapter;
        private Lab_5DataSetTableAdapters.TableAdapterManager tableAdapterManager;
        private System.Windows.Forms.BindingNavigator studentBindingNavigator;
        private System.Windows.Forms.ToolStripButton bindingNavigatorAddNewItem;
        private System.Windows.Forms.ToolStripLabel bindingNavigatorCountItem;
        private System.Windows.Forms.ToolStripButton bindingNavigatorDeleteItem;
        private System.Windows.Forms.ToolStripButton bindingNavigatorMoveFirstItem;
        private System.Windows.Forms.ToolStripButton bindingNavigatorMovePreviousItem;
        private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator;
        private System.Windows.Forms.ToolStripTextBox bindingNavigatorPositionItem;
        private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator1;
        private System.Windows.Forms.ToolStripButton bindingNavigatorMoveNextItem;
        private System.Windows.Forms.ToolStripButton bindingNavigatorMoveLastItem;
        private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator2;
        private System.Windows.Forms.ToolStripButton studentBindingNavigatorSaveItem;
        private System.Windows.Forms.DataGridView studentDataGridView;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn2;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn3;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn4;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn5;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn6;
    }
}