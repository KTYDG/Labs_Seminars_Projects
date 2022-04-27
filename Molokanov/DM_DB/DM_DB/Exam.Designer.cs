namespace DM_DB {
    partial class Exam {
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
            System.Windows.Forms.Label id_StudentLabel;
            System.Windows.Forms.Label subjectLabel;
            System.Windows.Forms.Label markLabel;
            System.Windows.Forms.Label exam_dateLabel;
            System.Windows.Forms.Label id_LectLabel;
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Exam));
            this.label1 = new System.Windows.Forms.Label();
            this.lab_5DataSet = new DM_DB.Lab_5DataSet();
            this.examBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.examTableAdapter = new DM_DB.Lab_5DataSetTableAdapters.ExamTableAdapter();
            this.tableAdapterManager = new DM_DB.Lab_5DataSetTableAdapters.TableAdapterManager();
            this.lecturerTableAdapter = new DM_DB.Lab_5DataSetTableAdapters.LecturerTableAdapter();
            this.studentTableAdapter = new DM_DB.Lab_5DataSetTableAdapters.StudentTableAdapter();
            this.studGroupTableAdapter = new DM_DB.Lab_5DataSetTableAdapters.StudGroupTableAdapter();
            this.examBindingNavigator = new System.Windows.Forms.BindingNavigator(this.components);
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
            this.examBindingNavigatorSaveItem = new System.Windows.Forms.ToolStripButton();
            this.subjectTextBox = new System.Windows.Forms.TextBox();
            this.markTextBox = new System.Windows.Forms.TextBox();
            this.exam_dateDateTimePicker = new System.Windows.Forms.DateTimePicker();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.studentBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.studGroupBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.comboBox2 = new System.Windows.Forms.ComboBox();
            this.lecturerBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.lecturerBindingSource1 = new System.Windows.Forms.BindingSource(this.components);
            this.first = new System.Windows.Forms.Button();
            this.before = new System.Windows.Forms.Button();
            this.add = new System.Windows.Forms.Button();
            this.last = new System.Windows.Forms.Button();
            this.next = new System.Windows.Forms.Button();
            this.delete = new System.Windows.Forms.Button();
            this.save = new System.Windows.Forms.Button();
            id_StudentLabel = new System.Windows.Forms.Label();
            subjectLabel = new System.Windows.Forms.Label();
            markLabel = new System.Windows.Forms.Label();
            exam_dateLabel = new System.Windows.Forms.Label();
            id_LectLabel = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.lab_5DataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.examBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.examBindingNavigator)).BeginInit();
            this.examBindingNavigator.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.studentBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.studGroupBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.lecturerBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.lecturerBindingSource1)).BeginInit();
            this.SuspendLayout();
            // 
            // id_StudentLabel
            // 
            id_StudentLabel.AutoSize = true;
            id_StudentLabel.Location = new System.Drawing.Point(48, 75);
            id_StudentLabel.Name = "id_StudentLabel";
            id_StudentLabel.Size = new System.Drawing.Size(117, 16);
            id_StudentLabel.TabIndex = 9;
            id_StudentLabel.Text = "Номер студента:";
            // 
            // subjectLabel
            // 
            subjectLabel.AutoSize = true;
            subjectLabel.Location = new System.Drawing.Point(96, 108);
            subjectLabel.Name = "subjectLabel";
            subjectLabel.Size = new System.Drawing.Size(68, 16);
            subjectLabel.TabIndex = 10;
            subjectLabel.Text = "Предмет:";
            // 
            // markLabel
            // 
            markLabel.AutoSize = true;
            markLabel.Location = new System.Drawing.Point(105, 141);
            markLabel.Name = "markLabel";
            markLabel.Size = new System.Drawing.Size(59, 16);
            markLabel.TabIndex = 11;
            markLabel.Text = "Оценка:";
            // 
            // exam_dateLabel
            // 
            exam_dateLabel.AutoSize = true;
            exam_dateLabel.Location = new System.Drawing.Point(51, 174);
            exam_dateLabel.Name = "exam_dateLabel";
            exam_dateLabel.Size = new System.Drawing.Size(109, 16);
            exam_dateLabel.TabIndex = 12;
            exam_dateLabel.Text = "Дата экзамена:";
            // 
            // id_LectLabel
            // 
            id_LectLabel.AutoSize = true;
            id_LectLabel.Location = new System.Drawing.Point(66, 207);
            id_LectLabel.Name = "id_LectLabel";
            id_LectLabel.Size = new System.Drawing.Size(99, 16);
            id_LectLabel.TabIndex = 13;
            id_LectLabel.Text = "Экзаменатор:";
            // 
            // label1
            // 
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label1.ForeColor = System.Drawing.Color.DarkBlue;
            this.label1.Location = new System.Drawing.Point(12, 27);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(352, 42);
            this.label1.TabIndex = 8;
            this.label1.Text = "Таблица \"Экзамен\"";
            this.label1.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // lab_5DataSet
            // 
            this.lab_5DataSet.DataSetName = "Lab_5DataSet";
            this.lab_5DataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // examBindingSource
            // 
            this.examBindingSource.DataMember = "Exam";
            this.examBindingSource.DataSource = this.lab_5DataSet;
            // 
            // examTableAdapter
            // 
            this.examTableAdapter.ClearBeforeFill = true;
            // 
            // tableAdapterManager
            // 
            this.tableAdapterManager.BackupDataSetBeforeUpdate = false;
            this.tableAdapterManager.ExamNewTableAdapter = null;
            this.tableAdapterManager.ExamTableAdapter = this.examTableAdapter;
            this.tableAdapterManager.ExamTestTableAdapter = null;
            this.tableAdapterManager.LecturerNewTableAdapter = null;
            this.tableAdapterManager.LecturerTableAdapter = this.lecturerTableAdapter;
            this.tableAdapterManager.StudentTableAdapter = this.studentTableAdapter;
            this.tableAdapterManager.StudGroupNewTableAdapter = null;
            this.tableAdapterManager.StudGroupTableAdapter = this.studGroupTableAdapter;
            this.tableAdapterManager.StudGroupTestTableAdapter = null;
            this.tableAdapterManager.SubjectLectTableAdapter = null;
            this.tableAdapterManager.UpdateOrder = DM_DB.Lab_5DataSetTableAdapters.TableAdapterManager.UpdateOrderOption.InsertUpdateDelete;
            // 
            // lecturerTableAdapter
            // 
            this.lecturerTableAdapter.ClearBeforeFill = true;
            // 
            // studentTableAdapter
            // 
            this.studentTableAdapter.ClearBeforeFill = true;
            // 
            // studGroupTableAdapter
            // 
            this.studGroupTableAdapter.ClearBeforeFill = true;
            // 
            // examBindingNavigator
            // 
            this.examBindingNavigator.AddNewItem = this.bindingNavigatorAddNewItem;
            this.examBindingNavigator.BindingSource = this.examBindingSource;
            this.examBindingNavigator.CountItem = this.bindingNavigatorCountItem;
            this.examBindingNavigator.DeleteItem = this.bindingNavigatorDeleteItem;
            this.examBindingNavigator.ImageScalingSize = new System.Drawing.Size(20, 20);
            this.examBindingNavigator.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
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
            this.examBindingNavigatorSaveItem});
            this.examBindingNavigator.Location = new System.Drawing.Point(0, 0);
            this.examBindingNavigator.MoveFirstItem = this.bindingNavigatorMoveFirstItem;
            this.examBindingNavigator.MoveLastItem = this.bindingNavigatorMoveLastItem;
            this.examBindingNavigator.MoveNextItem = this.bindingNavigatorMoveNextItem;
            this.examBindingNavigator.MovePreviousItem = this.bindingNavigatorMovePreviousItem;
            this.examBindingNavigator.Name = "examBindingNavigator";
            this.examBindingNavigator.PositionItem = this.bindingNavigatorPositionItem;
            this.examBindingNavigator.Size = new System.Drawing.Size(404, 31);
            this.examBindingNavigator.TabIndex = 9;
            this.examBindingNavigator.Text = "bindingNavigator1";
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
            // examBindingNavigatorSaveItem
            // 
            this.examBindingNavigatorSaveItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.examBindingNavigatorSaveItem.Image = ((System.Drawing.Image)(resources.GetObject("examBindingNavigatorSaveItem.Image")));
            this.examBindingNavigatorSaveItem.Name = "examBindingNavigatorSaveItem";
            this.examBindingNavigatorSaveItem.Size = new System.Drawing.Size(29, 28);
            this.examBindingNavigatorSaveItem.Text = "Save Data";
            this.examBindingNavigatorSaveItem.Click += new System.EventHandler(this.examBindingNavigatorSaveItem_Click);
            // 
            // subjectTextBox
            // 
            this.subjectTextBox.DataBindings.Add(new System.Windows.Forms.Binding("Text", this.examBindingSource, "Subject", true));
            this.subjectTextBox.Location = new System.Drawing.Point(171, 105);
            this.subjectTextBox.Name = "subjectTextBox";
            this.subjectTextBox.Size = new System.Drawing.Size(155, 22);
            this.subjectTextBox.TabIndex = 11;
            // 
            // markTextBox
            // 
            this.markTextBox.DataBindings.Add(new System.Windows.Forms.Binding("Text", this.examBindingSource, "Mark", true));
            this.markTextBox.Location = new System.Drawing.Point(171, 138);
            this.markTextBox.Name = "markTextBox";
            this.markTextBox.Size = new System.Drawing.Size(155, 22);
            this.markTextBox.TabIndex = 12;
            // 
            // exam_dateDateTimePicker
            // 
            this.exam_dateDateTimePicker.DataBindings.Add(new System.Windows.Forms.Binding("Value", this.examBindingSource, "Exam_date", true));
            this.exam_dateDateTimePicker.Location = new System.Drawing.Point(171, 171);
            this.exam_dateDateTimePicker.Name = "exam_dateDateTimePicker";
            this.exam_dateDateTimePicker.Size = new System.Drawing.Size(155, 22);
            this.exam_dateDateTimePicker.TabIndex = 13;
            // 
            // comboBox1
            // 
            this.comboBox1.DataBindings.Add(new System.Windows.Forms.Binding("SelectedValue", this.examBindingSource, "Id_Student", true));
            this.comboBox1.DataSource = this.studentBindingSource;
            this.comboBox1.DisplayMember = "Id_Student";
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Location = new System.Drawing.Point(171, 71);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(155, 24);
            this.comboBox1.TabIndex = 15;
            this.comboBox1.ValueMember = "Id_Student";
            // 
            // studentBindingSource
            // 
            this.studentBindingSource.DataMember = "Student";
            this.studentBindingSource.DataSource = this.lab_5DataSet;
            // 
            // studGroupBindingSource
            // 
            this.studGroupBindingSource.DataMember = "StudGroup";
            this.studGroupBindingSource.DataSource = this.lab_5DataSet;
            // 
            // comboBox2
            // 
            this.comboBox2.DataBindings.Add(new System.Windows.Forms.Binding("SelectedValue", this.examBindingSource, "Id_Lect", true));
            this.comboBox2.DataSource = this.lecturerBindingSource;
            this.comboBox2.DisplayMember = "FIO";
            this.comboBox2.FormattingEnabled = true;
            this.comboBox2.Location = new System.Drawing.Point(171, 203);
            this.comboBox2.Name = "comboBox2";
            this.comboBox2.Size = new System.Drawing.Size(155, 24);
            this.comboBox2.TabIndex = 16;
            this.comboBox2.ValueMember = "Id_Lect";
            // 
            // lecturerBindingSource
            // 
            this.lecturerBindingSource.DataMember = "Lecturer";
            this.lecturerBindingSource.DataSource = this.lab_5DataSet;
            // 
            // lecturerBindingSource1
            // 
            this.lecturerBindingSource1.DataMember = "Lecturer";
            this.lecturerBindingSource1.DataSource = this.lab_5DataSet;
            // 
            // first
            // 
            this.first.Location = new System.Drawing.Point(14, 247);
            this.first.Margin = new System.Windows.Forms.Padding(5);
            this.first.Name = "first";
            this.first.Size = new System.Drawing.Size(120, 30);
            this.first.TabIndex = 17;
            this.first.Text = "Первая";
            this.first.UseVisualStyleBackColor = true;
            this.first.Click += new System.EventHandler(this.button1_Click);
            // 
            // before
            // 
            this.before.Location = new System.Drawing.Point(144, 247);
            this.before.Margin = new System.Windows.Forms.Padding(5);
            this.before.Name = "before";
            this.before.Size = new System.Drawing.Size(120, 30);
            this.before.TabIndex = 18;
            this.before.Text = "Предыдущая";
            this.before.UseVisualStyleBackColor = true;
            this.before.Click += new System.EventHandler(this.button2_Click);
            // 
            // add
            // 
            this.add.Location = new System.Drawing.Point(274, 247);
            this.add.Margin = new System.Windows.Forms.Padding(5);
            this.add.Name = "add";
            this.add.Size = new System.Drawing.Size(120, 30);
            this.add.TabIndex = 19;
            this.add.Text = "Добавить";
            this.add.UseVisualStyleBackColor = true;
            this.add.Click += new System.EventHandler(this.button3_Click);
            // 
            // last
            // 
            this.last.Location = new System.Drawing.Point(14, 287);
            this.last.Margin = new System.Windows.Forms.Padding(5);
            this.last.Name = "last";
            this.last.Size = new System.Drawing.Size(120, 30);
            this.last.TabIndex = 20;
            this.last.Text = "Последняя";
            this.last.UseVisualStyleBackColor = true;
            this.last.Click += new System.EventHandler(this.button4_Click);
            // 
            // next
            // 
            this.next.Location = new System.Drawing.Point(144, 287);
            this.next.Margin = new System.Windows.Forms.Padding(5);
            this.next.Name = "next";
            this.next.Size = new System.Drawing.Size(120, 30);
            this.next.TabIndex = 21;
            this.next.Text = " Следующая";
            this.next.UseVisualStyleBackColor = true;
            this.next.Click += new System.EventHandler(this.button5_Click);
            // 
            // delete
            // 
            this.delete.Location = new System.Drawing.Point(274, 287);
            this.delete.Margin = new System.Windows.Forms.Padding(5);
            this.delete.Name = "delete";
            this.delete.Size = new System.Drawing.Size(120, 30);
            this.delete.TabIndex = 22;
            this.delete.Text = " Удалить";
            this.delete.UseVisualStyleBackColor = true;
            this.delete.Click += new System.EventHandler(this.button6_Click);
            // 
            // save
            // 
            this.save.Location = new System.Drawing.Point(144, 327);
            this.save.Margin = new System.Windows.Forms.Padding(5);
            this.save.Name = "save";
            this.save.Size = new System.Drawing.Size(120, 30);
            this.save.TabIndex = 23;
            this.save.Text = "Сохранить";
            this.save.UseVisualStyleBackColor = true;
            this.save.Click += new System.EventHandler(this.button7_Click);
            // 
            // Exam
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(404, 364);
            this.Controls.Add(this.save);
            this.Controls.Add(this.delete);
            this.Controls.Add(this.next);
            this.Controls.Add(this.last);
            this.Controls.Add(this.add);
            this.Controls.Add(this.before);
            this.Controls.Add(this.first);
            this.Controls.Add(this.comboBox2);
            this.Controls.Add(this.comboBox1);
            this.Controls.Add(id_LectLabel);
            this.Controls.Add(exam_dateLabel);
            this.Controls.Add(this.exam_dateDateTimePicker);
            this.Controls.Add(markLabel);
            this.Controls.Add(this.markTextBox);
            this.Controls.Add(subjectLabel);
            this.Controls.Add(this.subjectTextBox);
            this.Controls.Add(id_StudentLabel);
            this.Controls.Add(this.examBindingNavigator);
            this.Controls.Add(this.label1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.Fixed3D;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Exam";
            this.Text = "Таблица \"Экзамен\"";
            this.Load += new System.EventHandler(this.Exam_Load);
            ((System.ComponentModel.ISupportInitialize)(this.lab_5DataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.examBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.examBindingNavigator)).EndInit();
            this.examBindingNavigator.ResumeLayout(false);
            this.examBindingNavigator.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.studentBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.studGroupBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.lecturerBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.lecturerBindingSource1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private Lab_5DataSet lab_5DataSet;
        private System.Windows.Forms.BindingSource examBindingSource;
        private Lab_5DataSetTableAdapters.ExamTableAdapter examTableAdapter;
        private Lab_5DataSetTableAdapters.TableAdapterManager tableAdapterManager;
        private System.Windows.Forms.BindingNavigator examBindingNavigator;
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
        private System.Windows.Forms.ToolStripButton examBindingNavigatorSaveItem;
        private System.Windows.Forms.TextBox subjectTextBox;
        private System.Windows.Forms.TextBox markTextBox;
        private System.Windows.Forms.DateTimePicker exam_dateDateTimePicker;
        private Lab_5DataSetTableAdapters.StudentTableAdapter studentTableAdapter;
        private System.Windows.Forms.ComboBox comboBox1;
        private System.Windows.Forms.BindingSource studentBindingSource;
        private Lab_5DataSetTableAdapters.StudGroupTableAdapter studGroupTableAdapter;
        private System.Windows.Forms.BindingSource studGroupBindingSource;
        private Lab_5DataSetTableAdapters.LecturerTableAdapter lecturerTableAdapter;
        private System.Windows.Forms.ComboBox comboBox2;
        private System.Windows.Forms.BindingSource lecturerBindingSource;
        private System.Windows.Forms.BindingSource lecturerBindingSource1;
        private System.Windows.Forms.Button first;
        private System.Windows.Forms.Button before;
        private System.Windows.Forms.Button add;
        private System.Windows.Forms.Button last;
        private System.Windows.Forms.Button next;
        private System.Windows.Forms.Button delete;
        private System.Windows.Forms.Button save;
    }
}