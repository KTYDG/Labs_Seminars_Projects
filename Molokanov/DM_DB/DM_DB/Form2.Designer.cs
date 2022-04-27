namespace DM_DB {
    partial class Form2 {
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
            this.components = new System.ComponentModel.Container();
            System.Windows.Forms.Label nameGroupLabel;
            System.Windows.Forms.Label kursLabel;
            System.Windows.Forms.Label kafedraLabel;
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form2));
            this.label1 = new System.Windows.Forms.Label();
            this.lab_5DataSet = new DM_DB.Lab_5DataSet();
            this.studGroupBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.studGroupTableAdapter = new DM_DB.Lab_5DataSetTableAdapters.StudGroupTableAdapter();
            this.tableAdapterManager = new DM_DB.Lab_5DataSetTableAdapters.TableAdapterManager();
            this.studGroupBindingNavigator = new System.Windows.Forms.BindingNavigator(this.components);
            this.bindingNavigatorAddNewItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorCountItem = new System.Windows.Forms.ToolStripLabel();
            this.bindingNavigatorDeleteItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorMoveFirstItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorMovePreviousItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorSeparator = new System.Windows.Forms.ToolStripSeparator();
            this.bindingNavigatorPositionItem = new System.Windows.Forms.ToolStripTextBox();
            this.bindingNavigatorSeparator1 = new System.Windows.Forms.ToolStripSeparator();
            this.bindingNavigatorMoveNextItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorMoveLastItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorSeparator2 = new System.Windows.Forms.ToolStripSeparator();
            this.studGroupBindingNavigatorSaveItem = new System.Windows.Forms.ToolStripButton();
            this.nameGroupTextBox = new System.Windows.Forms.TextBox();
            this.kafedraTextBox = new System.Windows.Forms.TextBox();
            this.kursNumericUpDown = new System.Windows.Forms.NumericUpDown();
            this.studentTableAdapter = new DM_DB.Lab_5DataSetTableAdapters.StudentTableAdapter();
            this.studentDataGridView = new System.Windows.Forms.DataGridView();
            this.dataGridViewTextBoxColumn1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewTextBoxColumn2 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.studentBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.button1 = new System.Windows.Forms.Button();
            nameGroupLabel = new System.Windows.Forms.Label();
            kursLabel = new System.Windows.Forms.Label();
            kafedraLabel = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.lab_5DataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.studGroupBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.studGroupBindingNavigator)).BeginInit();
            this.studGroupBindingNavigator.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.kursNumericUpDown)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.studentDataGridView)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.studentBindingSource)).BeginInit();
            this.SuspendLayout();
            // 
            // nameGroupLabel
            // 
            nameGroupLabel.AutoSize = true;
            nameGroupLabel.ImageAlign = System.Drawing.ContentAlignment.MiddleLeft;
            nameGroupLabel.Location = new System.Drawing.Point(43, 80);
            nameGroupLabel.Name = "nameGroupLabel";
            nameGroupLabel.Size = new System.Drawing.Size(126, 16);
            nameGroupLabel.TabIndex = 6;
            nameGroupLabel.Text = "Название группы:";
            // 
            // kursLabel
            // 
            kursLabel.AutoSize = true;
            kursLabel.Location = new System.Drawing.Point(128, 118);
            kursLabel.Name = "kursLabel";
            kursLabel.Size = new System.Drawing.Size(41, 16);
            kursLabel.TabIndex = 7;
            kursLabel.Text = "Курс:";
            // 
            // kafedraLabel
            // 
            kafedraLabel.AutoSize = true;
            kafedraLabel.Location = new System.Drawing.Point(100, 156);
            kafedraLabel.Name = "kafedraLabel";
            kafedraLabel.Size = new System.Drawing.Size(69, 16);
            kafedraLabel.TabIndex = 8;
            kafedraLabel.Text = "Кафедра:";
            // 
            // label1
            // 
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label1.ForeColor = System.Drawing.Color.DarkBlue;
            this.label1.Location = new System.Drawing.Point(12, 27);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(334, 42);
            this.label1.TabIndex = 5;
            this.label1.Text = "Таблица \"Группа\"";
            this.label1.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // lab_5DataSet
            // 
            this.lab_5DataSet.DataSetName = "Lab_5DataSet";
            this.lab_5DataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // studGroupBindingSource
            // 
            this.studGroupBindingSource.DataMember = "StudGroup";
            this.studGroupBindingSource.DataSource = this.lab_5DataSet;
            // 
            // studGroupTableAdapter
            // 
            this.studGroupTableAdapter.ClearBeforeFill = true;
            // 
            // tableAdapterManager
            // 
            this.tableAdapterManager.BackupDataSetBeforeUpdate = false;
            this.tableAdapterManager.ExamNewTableAdapter = null;
            this.tableAdapterManager.ExamTableAdapter = null;
            this.tableAdapterManager.ExamTestTableAdapter = null;
            this.tableAdapterManager.LecturerNewTableAdapter = null;
            this.tableAdapterManager.LecturerTableAdapter = null;
            this.tableAdapterManager.StudentTableAdapter = null;
            this.tableAdapterManager.StudGroupNewTableAdapter = null;
            this.tableAdapterManager.StudGroupTableAdapter = this.studGroupTableAdapter;
            this.tableAdapterManager.StudGroupTestTableAdapter = null;
            this.tableAdapterManager.SubjectLectTableAdapter = null;
            this.tableAdapterManager.UpdateOrder = DM_DB.Lab_5DataSetTableAdapters.TableAdapterManager.UpdateOrderOption.InsertUpdateDelete;
            // 
            // studGroupBindingNavigator
            // 
            this.studGroupBindingNavigator.AddNewItem = this.bindingNavigatorAddNewItem;
            this.studGroupBindingNavigator.BindingSource = this.studGroupBindingSource;
            this.studGroupBindingNavigator.CountItem = this.bindingNavigatorCountItem;
            this.studGroupBindingNavigator.DeleteItem = this.bindingNavigatorDeleteItem;
            this.studGroupBindingNavigator.ImageScalingSize = new System.Drawing.Size(20, 20);
            this.studGroupBindingNavigator.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
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
            this.studGroupBindingNavigatorSaveItem});
            this.studGroupBindingNavigator.Location = new System.Drawing.Point(0, 0);
            this.studGroupBindingNavigator.MoveFirstItem = this.bindingNavigatorMoveFirstItem;
            this.studGroupBindingNavigator.MoveLastItem = this.bindingNavigatorMoveLastItem;
            this.studGroupBindingNavigator.MoveNextItem = this.bindingNavigatorMoveNextItem;
            this.studGroupBindingNavigator.MovePreviousItem = this.bindingNavigatorMovePreviousItem;
            this.studGroupBindingNavigator.Name = "studGroupBindingNavigator";
            this.studGroupBindingNavigator.PositionItem = this.bindingNavigatorPositionItem;
            this.studGroupBindingNavigator.Size = new System.Drawing.Size(379, 31);
            this.studGroupBindingNavigator.TabIndex = 6;
            this.studGroupBindingNavigator.Text = "bindingNavigator1";
            // 
            // bindingNavigatorAddNewItem
            // 
            this.bindingNavigatorAddNewItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorAddNewItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorAddNewItem.Image")));
            this.bindingNavigatorAddNewItem.Name = "bindingNavigatorAddNewItem";
            this.bindingNavigatorAddNewItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorAddNewItem.Size = new System.Drawing.Size(29, 28);
            this.bindingNavigatorAddNewItem.Text = "Add new";
            // 
            // bindingNavigatorCountItem
            // 
            this.bindingNavigatorCountItem.Name = "bindingNavigatorCountItem";
            this.bindingNavigatorCountItem.Size = new System.Drawing.Size(45, 28);
            this.bindingNavigatorCountItem.Text = "of {0}";
            this.bindingNavigatorCountItem.ToolTipText = "Total number of items";
            // 
            // bindingNavigatorDeleteItem
            // 
            this.bindingNavigatorDeleteItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorDeleteItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorDeleteItem.Image")));
            this.bindingNavigatorDeleteItem.Name = "bindingNavigatorDeleteItem";
            this.bindingNavigatorDeleteItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorDeleteItem.Size = new System.Drawing.Size(29, 28);
            this.bindingNavigatorDeleteItem.Text = "Delete";
            // 
            // bindingNavigatorMoveFirstItem
            // 
            this.bindingNavigatorMoveFirstItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveFirstItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveFirstItem.Image")));
            this.bindingNavigatorMoveFirstItem.Name = "bindingNavigatorMoveFirstItem";
            this.bindingNavigatorMoveFirstItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMoveFirstItem.Size = new System.Drawing.Size(29, 28);
            this.bindingNavigatorMoveFirstItem.Text = "Move first";
            // 
            // bindingNavigatorMovePreviousItem
            // 
            this.bindingNavigatorMovePreviousItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMovePreviousItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMovePreviousItem.Image")));
            this.bindingNavigatorMovePreviousItem.Name = "bindingNavigatorMovePreviousItem";
            this.bindingNavigatorMovePreviousItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMovePreviousItem.Size = new System.Drawing.Size(29, 28);
            this.bindingNavigatorMovePreviousItem.Text = "Move previous";
            // 
            // bindingNavigatorSeparator
            // 
            this.bindingNavigatorSeparator.Name = "bindingNavigatorSeparator";
            this.bindingNavigatorSeparator.Size = new System.Drawing.Size(6, 31);
            // 
            // bindingNavigatorPositionItem
            // 
            this.bindingNavigatorPositionItem.AccessibleName = "Position";
            this.bindingNavigatorPositionItem.AutoSize = false;
            this.bindingNavigatorPositionItem.Font = new System.Drawing.Font("Segoe UI", 9F);
            this.bindingNavigatorPositionItem.Name = "bindingNavigatorPositionItem";
            this.bindingNavigatorPositionItem.Size = new System.Drawing.Size(50, 27);
            this.bindingNavigatorPositionItem.Text = "0";
            this.bindingNavigatorPositionItem.ToolTipText = "Current position";
            // 
            // bindingNavigatorSeparator1
            // 
            this.bindingNavigatorSeparator1.Name = "bindingNavigatorSeparator1";
            this.bindingNavigatorSeparator1.Size = new System.Drawing.Size(6, 31);
            // 
            // bindingNavigatorMoveNextItem
            // 
            this.bindingNavigatorMoveNextItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveNextItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveNextItem.Image")));
            this.bindingNavigatorMoveNextItem.Name = "bindingNavigatorMoveNextItem";
            this.bindingNavigatorMoveNextItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMoveNextItem.Size = new System.Drawing.Size(29, 28);
            this.bindingNavigatorMoveNextItem.Text = "Move next";
            // 
            // bindingNavigatorMoveLastItem
            // 
            this.bindingNavigatorMoveLastItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveLastItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveLastItem.Image")));
            this.bindingNavigatorMoveLastItem.Name = "bindingNavigatorMoveLastItem";
            this.bindingNavigatorMoveLastItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMoveLastItem.Size = new System.Drawing.Size(29, 28);
            this.bindingNavigatorMoveLastItem.Text = "Move last";
            // 
            // bindingNavigatorSeparator2
            // 
            this.bindingNavigatorSeparator2.Name = "bindingNavigatorSeparator2";
            this.bindingNavigatorSeparator2.Size = new System.Drawing.Size(6, 31);
            // 
            // studGroupBindingNavigatorSaveItem
            // 
            this.studGroupBindingNavigatorSaveItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.studGroupBindingNavigatorSaveItem.Image = ((System.Drawing.Image)(resources.GetObject("studGroupBindingNavigatorSaveItem.Image")));
            this.studGroupBindingNavigatorSaveItem.Name = "studGroupBindingNavigatorSaveItem";
            this.studGroupBindingNavigatorSaveItem.Size = new System.Drawing.Size(29, 28);
            this.studGroupBindingNavigatorSaveItem.Text = "Save Data";
            this.studGroupBindingNavigatorSaveItem.Click += new System.EventHandler(this.studGroupBindingNavigatorSaveItem_Click_2);
            // 
            // nameGroupTextBox
            // 
            this.nameGroupTextBox.DataBindings.Add(new System.Windows.Forms.Binding("Text", this.studGroupBindingSource, "NameGroup", true));
            this.nameGroupTextBox.Location = new System.Drawing.Point(176, 77);
            this.nameGroupTextBox.Name = "nameGroupTextBox";
            this.nameGroupTextBox.Size = new System.Drawing.Size(120, 22);
            this.nameGroupTextBox.TabIndex = 7;
            // 
            // kafedraTextBox
            // 
            this.kafedraTextBox.DataBindings.Add(new System.Windows.Forms.Binding("Text", this.studGroupBindingSource, "Kafedra", true));
            this.kafedraTextBox.Location = new System.Drawing.Point(176, 153);
            this.kafedraTextBox.Name = "kafedraTextBox";
            this.kafedraTextBox.Size = new System.Drawing.Size(120, 22);
            this.kafedraTextBox.TabIndex = 9;
            // 
            // kursNumericUpDown
            // 
            this.kursNumericUpDown.DataBindings.Add(new System.Windows.Forms.Binding("Value", this.studGroupBindingSource, "Kurs", true));
            this.kursNumericUpDown.Location = new System.Drawing.Point(176, 116);
            this.kursNumericUpDown.Maximum = new decimal(new int[] {
            5,
            0,
            0,
            0});
            this.kursNumericUpDown.Minimum = new decimal(new int[] {
            1,
            0,
            0,
            0});
            this.kursNumericUpDown.Name = "kursNumericUpDown";
            this.kursNumericUpDown.Size = new System.Drawing.Size(120, 22);
            this.kursNumericUpDown.TabIndex = 10;
            this.kursNumericUpDown.Value = new decimal(new int[] {
            1,
            0,
            0,
            0});
            // 
            // studentTableAdapter
            // 
            this.studentTableAdapter.ClearBeforeFill = true;
            // 
            // studentDataGridView
            // 
            this.studentDataGridView.AutoGenerateColumns = false;
            this.studentDataGridView.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.studentDataGridView.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.dataGridViewTextBoxColumn1,
            this.dataGridViewTextBoxColumn2});
            this.studentDataGridView.DataSource = this.studentBindingSource;
            this.studentDataGridView.Location = new System.Drawing.Point(12, 181);
            this.studentDataGridView.Name = "studentDataGridView";
            this.studentDataGridView.RowHeadersWidth = 51;
            this.studentDataGridView.RowTemplate.Height = 24;
            this.studentDataGridView.Size = new System.Drawing.Size(355, 242);
            this.studentDataGridView.TabIndex = 10;
            // 
            // dataGridViewTextBoxColumn1
            // 
            this.dataGridViewTextBoxColumn1.DataPropertyName = "Id_Student";
            this.dataGridViewTextBoxColumn1.FillWeight = 40F;
            this.dataGridViewTextBoxColumn1.HeaderText = "Id_Student";
            this.dataGridViewTextBoxColumn1.MinimumWidth = 6;
            this.dataGridViewTextBoxColumn1.Name = "dataGridViewTextBoxColumn1";
            this.dataGridViewTextBoxColumn1.Width = 90;
            // 
            // dataGridViewTextBoxColumn2
            // 
            this.dataGridViewTextBoxColumn2.DataPropertyName = "FIO";
            this.dataGridViewTextBoxColumn2.HeaderText = "FIO";
            this.dataGridViewTextBoxColumn2.MinimumWidth = 6;
            this.dataGridViewTextBoxColumn2.Name = "dataGridViewTextBoxColumn2";
            this.dataGridViewTextBoxColumn2.Width = 125;
            // 
            // studentBindingSource
            // 
            this.studentBindingSource.DataMember = "FK__Student__NameGro__34C8D9D1";
            this.studentBindingSource.DataSource = this.studGroupBindingSource;
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(17, 130);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(63, 42);
            this.button1.TabIndex = 11;
            this.button1.Text = "ИД";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // Form2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(379, 435);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.studentDataGridView);
            this.Controls.Add(this.kursNumericUpDown);
            this.Controls.Add(kafedraLabel);
            this.Controls.Add(this.kafedraTextBox);
            this.Controls.Add(kursLabel);
            this.Controls.Add(nameGroupLabel);
            this.Controls.Add(this.nameGroupTextBox);
            this.Controls.Add(this.studGroupBindingNavigator);
            this.Controls.Add(this.label1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.Fixed3D;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Form2";
            this.Text = "Таблица \"Группа\"";
            this.Load += new System.EventHandler(this.Form2_Load);
            ((System.ComponentModel.ISupportInitialize)(this.lab_5DataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.studGroupBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.studGroupBindingNavigator)).EndInit();
            this.studGroupBindingNavigator.ResumeLayout(false);
            this.studGroupBindingNavigator.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.kursNumericUpDown)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.studentDataGridView)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.studentBindingSource)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private Lab_5DataSet lab_5DataSet;
        private System.Windows.Forms.BindingSource studGroupBindingSource;
        private Lab_5DataSetTableAdapters.StudGroupTableAdapter studGroupTableAdapter;
        private Lab_5DataSetTableAdapters.TableAdapterManager tableAdapterManager;
        private System.Windows.Forms.BindingNavigator studGroupBindingNavigator;
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
        private System.Windows.Forms.ToolStripButton studGroupBindingNavigatorSaveItem;
        private System.Windows.Forms.TextBox nameGroupTextBox;
        private System.Windows.Forms.TextBox kafedraTextBox;
        private System.Windows.Forms.NumericUpDown kursNumericUpDown;
        private System.Windows.Forms.BindingSource studentBindingSource;
        private Lab_5DataSetTableAdapters.StudentTableAdapter studentTableAdapter;
        private System.Windows.Forms.DataGridView studentDataGridView;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn1;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn2;
        private System.Windows.Forms.Button button1;
    }
}