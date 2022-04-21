namespace DM_DB {
    partial class Lecturer {
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
            System.Windows.Forms.Label id_LectLabel;
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Lecturer));
            System.Windows.Forms.Label fIOLabel;
            System.Windows.Forms.Label stageLabel;
            System.Windows.Forms.Label kafedraLabel;
            this.label1 = new System.Windows.Forms.Label();
            this.lab_5DataSet = new DM_DB.Lab_5DataSet();
            this.lecturerBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.lecturerTableAdapter = new DM_DB.Lab_5DataSetTableAdapters.LecturerTableAdapter();
            this.tableAdapterManager = new DM_DB.Lab_5DataSetTableAdapters.TableAdapterManager();
            this.lecturerBindingNavigator = new System.Windows.Forms.BindingNavigator(this.components);
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
            this.lecturerBindingNavigatorSaveItem = new System.Windows.Forms.ToolStripButton();
            this.id_LectTextBox = new System.Windows.Forms.TextBox();
            this.fIOTextBox = new System.Windows.Forms.TextBox();
            this.stageTextBox = new System.Windows.Forms.TextBox();
            this.kafedraTextBox = new System.Windows.Forms.TextBox();
            id_LectLabel = new System.Windows.Forms.Label();
            fIOLabel = new System.Windows.Forms.Label();
            stageLabel = new System.Windows.Forms.Label();
            kafedraLabel = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.lab_5DataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.lecturerBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.lecturerBindingNavigator)).BeginInit();
            this.lecturerBindingNavigator.SuspendLayout();
            this.SuspendLayout();
            // 
            // id_LectLabel
            // 
            id_LectLabel.AutoSize = true;
            id_LectLabel.Location = new System.Drawing.Point(78, 75);
            id_LectLabel.Name = "id_LectLabel";
            id_LectLabel.Size = new System.Drawing.Size(53, 16);
            id_LectLabel.TabIndex = 7;
            id_LectLabel.Text = "Номер:";
            // 
            // label1
            // 
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label1.ForeColor = System.Drawing.Color.DarkBlue;
            this.label1.Location = new System.Drawing.Point(12, 27);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(344, 42);
            this.label1.TabIndex = 6;
            this.label1.Text = "Таблица \"Лектор\"";
            this.label1.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // lab_5DataSet
            // 
            this.lab_5DataSet.DataSetName = "Lab_5DataSet";
            this.lab_5DataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // lecturerBindingSource
            // 
            this.lecturerBindingSource.DataMember = "Lecturer";
            this.lecturerBindingSource.DataSource = this.lab_5DataSet;
            // 
            // lecturerTableAdapter
            // 
            this.lecturerTableAdapter.ClearBeforeFill = true;
            // 
            // tableAdapterManager
            // 
            this.tableAdapterManager.BackupDataSetBeforeUpdate = false;
            this.tableAdapterManager.ExamNewTableAdapter = null;
            this.tableAdapterManager.ExamTableAdapter = null;
            this.tableAdapterManager.ExamTestTableAdapter = null;
            this.tableAdapterManager.LecturerNewTableAdapter = null;
            this.tableAdapterManager.LecturerTableAdapter = this.lecturerTableAdapter;
            this.tableAdapterManager.StudentTableAdapter = null;
            this.tableAdapterManager.StudGroupNewTableAdapter = null;
            this.tableAdapterManager.StudGroupTableAdapter = null;
            this.tableAdapterManager.StudGroupTestTableAdapter = null;
            this.tableAdapterManager.SubjectLectTableAdapter = null;
            this.tableAdapterManager.UpdateOrder = DM_DB.Lab_5DataSetTableAdapters.TableAdapterManager.UpdateOrderOption.InsertUpdateDelete;
            // 
            // lecturerBindingNavigator
            // 
            this.lecturerBindingNavigator.AddNewItem = this.bindingNavigatorAddNewItem;
            this.lecturerBindingNavigator.BindingSource = this.lecturerBindingSource;
            this.lecturerBindingNavigator.CountItem = this.bindingNavigatorCountItem;
            this.lecturerBindingNavigator.DeleteItem = this.bindingNavigatorDeleteItem;
            this.lecturerBindingNavigator.ImageScalingSize = new System.Drawing.Size(20, 20);
            this.lecturerBindingNavigator.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
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
            this.lecturerBindingNavigatorSaveItem});
            this.lecturerBindingNavigator.Location = new System.Drawing.Point(0, 0);
            this.lecturerBindingNavigator.MoveFirstItem = this.bindingNavigatorMoveFirstItem;
            this.lecturerBindingNavigator.MoveLastItem = this.bindingNavigatorMoveLastItem;
            this.lecturerBindingNavigator.MoveNextItem = this.bindingNavigatorMoveNextItem;
            this.lecturerBindingNavigator.MovePreviousItem = this.bindingNavigatorMovePreviousItem;
            this.lecturerBindingNavigator.Name = "lecturerBindingNavigator";
            this.lecturerBindingNavigator.PositionItem = this.bindingNavigatorPositionItem;
            this.lecturerBindingNavigator.Size = new System.Drawing.Size(368, 31);
            this.lecturerBindingNavigator.TabIndex = 7;
            this.lecturerBindingNavigator.Text = "bindingNavigator1";
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
            this.bindingNavigatorCountItem.Size = new System.Drawing.Size(45, 24);
            this.bindingNavigatorCountItem.Text = "of {0}";
            this.bindingNavigatorCountItem.ToolTipText = "Total number of items";
            // 
            // bindingNavigatorDeleteItem
            // 
            this.bindingNavigatorDeleteItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorDeleteItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorDeleteItem.Image")));
            this.bindingNavigatorDeleteItem.Name = "bindingNavigatorDeleteItem";
            this.bindingNavigatorDeleteItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorDeleteItem.Size = new System.Drawing.Size(29, 24);
            this.bindingNavigatorDeleteItem.Text = "Delete";
            // 
            // bindingNavigatorMoveFirstItem
            // 
            this.bindingNavigatorMoveFirstItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveFirstItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveFirstItem.Image")));
            this.bindingNavigatorMoveFirstItem.Name = "bindingNavigatorMoveFirstItem";
            this.bindingNavigatorMoveFirstItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMoveFirstItem.Size = new System.Drawing.Size(29, 24);
            this.bindingNavigatorMoveFirstItem.Text = "Move first";
            // 
            // bindingNavigatorMovePreviousItem
            // 
            this.bindingNavigatorMovePreviousItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMovePreviousItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMovePreviousItem.Image")));
            this.bindingNavigatorMovePreviousItem.Name = "bindingNavigatorMovePreviousItem";
            this.bindingNavigatorMovePreviousItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMovePreviousItem.Size = new System.Drawing.Size(29, 24);
            this.bindingNavigatorMovePreviousItem.Text = "Move previous";
            // 
            // bindingNavigatorSeparator
            // 
            this.bindingNavigatorSeparator.Name = "bindingNavigatorSeparator";
            this.bindingNavigatorSeparator.Size = new System.Drawing.Size(6, 27);
            // 
            // bindingNavigatorPositionItem
            // 
            this.bindingNavigatorPositionItem.AccessibleName = "Position";
            this.bindingNavigatorPositionItem.AutoSize = false;
            this.bindingNavigatorPositionItem.Name = "bindingNavigatorPositionItem";
            this.bindingNavigatorPositionItem.Size = new System.Drawing.Size(50, 27);
            this.bindingNavigatorPositionItem.Text = "0";
            this.bindingNavigatorPositionItem.ToolTipText = "Current position";
            // 
            // bindingNavigatorSeparator1
            // 
            this.bindingNavigatorSeparator1.Name = "bindingNavigatorSeparator1";
            this.bindingNavigatorSeparator1.Size = new System.Drawing.Size(6, 27);
            // 
            // bindingNavigatorMoveNextItem
            // 
            this.bindingNavigatorMoveNextItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveNextItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveNextItem.Image")));
            this.bindingNavigatorMoveNextItem.Name = "bindingNavigatorMoveNextItem";
            this.bindingNavigatorMoveNextItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMoveNextItem.Size = new System.Drawing.Size(29, 24);
            this.bindingNavigatorMoveNextItem.Text = "Move next";
            // 
            // bindingNavigatorMoveLastItem
            // 
            this.bindingNavigatorMoveLastItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveLastItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveLastItem.Image")));
            this.bindingNavigatorMoveLastItem.Name = "bindingNavigatorMoveLastItem";
            this.bindingNavigatorMoveLastItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMoveLastItem.Size = new System.Drawing.Size(29, 24);
            this.bindingNavigatorMoveLastItem.Text = "Move last";
            // 
            // bindingNavigatorSeparator2
            // 
            this.bindingNavigatorSeparator2.Name = "bindingNavigatorSeparator2";
            this.bindingNavigatorSeparator2.Size = new System.Drawing.Size(6, 27);
            // 
            // lecturerBindingNavigatorSaveItem
            // 
            this.lecturerBindingNavigatorSaveItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.lecturerBindingNavigatorSaveItem.Image = ((System.Drawing.Image)(resources.GetObject("lecturerBindingNavigatorSaveItem.Image")));
            this.lecturerBindingNavigatorSaveItem.Name = "lecturerBindingNavigatorSaveItem";
            this.lecturerBindingNavigatorSaveItem.Size = new System.Drawing.Size(29, 24);
            this.lecturerBindingNavigatorSaveItem.Text = "Save Data";
            this.lecturerBindingNavigatorSaveItem.Click += new System.EventHandler(this.lecturerBindingNavigatorSaveItem_Click);
            // 
            // id_LectTextBox
            // 
            this.id_LectTextBox.DataBindings.Add(new System.Windows.Forms.Binding("Text", this.lecturerBindingSource, "Id_Lect", true));
            this.id_LectTextBox.Location = new System.Drawing.Point(138, 72);
            this.id_LectTextBox.Name = "id_LectTextBox";
            this.id_LectTextBox.Size = new System.Drawing.Size(140, 22);
            this.id_LectTextBox.TabIndex = 8;
            // 
            // fIOLabel
            // 
            fIOLabel.AutoSize = true;
            fIOLabel.Location = new System.Drawing.Point(89, 108);
            fIOLabel.Name = "fIOLabel";
            fIOLabel.Size = new System.Drawing.Size(41, 16);
            fIOLabel.TabIndex = 8;
            fIOLabel.Text = "ФИО:";
            // 
            // fIOTextBox
            // 
            this.fIOTextBox.DataBindings.Add(new System.Windows.Forms.Binding("Text", this.lecturerBindingSource, "FIO", true));
            this.fIOTextBox.Location = new System.Drawing.Point(138, 105);
            this.fIOTextBox.Name = "fIOTextBox";
            this.fIOTextBox.Size = new System.Drawing.Size(140, 22);
            this.fIOTextBox.TabIndex = 9;
            // 
            // stageLabel
            // 
            stageLabel.AutoSize = true;
            stageLabel.Location = new System.Drawing.Point(88, 141);
            stageLabel.Name = "stageLabel";
            stageLabel.Size = new System.Drawing.Size(43, 16);
            stageLabel.TabIndex = 9;
            stageLabel.Text = "Стаж:";
            // 
            // stageTextBox
            // 
            this.stageTextBox.DataBindings.Add(new System.Windows.Forms.Binding("Text", this.lecturerBindingSource, "Stage", true));
            this.stageTextBox.Location = new System.Drawing.Point(138, 138);
            this.stageTextBox.Name = "stageTextBox";
            this.stageTextBox.Size = new System.Drawing.Size(140, 22);
            this.stageTextBox.TabIndex = 10;
            // 
            // kafedraLabel
            // 
            kafedraLabel.AutoSize = true;
            kafedraLabel.Location = new System.Drawing.Point(62, 174);
            kafedraLabel.Name = "kafedraLabel";
            kafedraLabel.Size = new System.Drawing.Size(69, 16);
            kafedraLabel.TabIndex = 10;
            kafedraLabel.Text = "Кафедра:";
            // 
            // kafedraTextBox
            // 
            this.kafedraTextBox.DataBindings.Add(new System.Windows.Forms.Binding("Text", this.lecturerBindingSource, "Kafedra", true));
            this.kafedraTextBox.Location = new System.Drawing.Point(138, 171);
            this.kafedraTextBox.Name = "kafedraTextBox";
            this.kafedraTextBox.Size = new System.Drawing.Size(140, 22);
            this.kafedraTextBox.TabIndex = 11;
            // 
            // Lecturer
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(368, 224);
            this.Controls.Add(kafedraLabel);
            this.Controls.Add(this.kafedraTextBox);
            this.Controls.Add(stageLabel);
            this.Controls.Add(this.stageTextBox);
            this.Controls.Add(fIOLabel);
            this.Controls.Add(this.fIOTextBox);
            this.Controls.Add(id_LectLabel);
            this.Controls.Add(this.id_LectTextBox);
            this.Controls.Add(this.lecturerBindingNavigator);
            this.Controls.Add(this.label1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.Fixed3D;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Lecturer";
            this.Text = "Таблица \"Лектор\"";
            this.Load += new System.EventHandler(this.Lecturer_Load);
            ((System.ComponentModel.ISupportInitialize)(this.lab_5DataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.lecturerBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.lecturerBindingNavigator)).EndInit();
            this.lecturerBindingNavigator.ResumeLayout(false);
            this.lecturerBindingNavigator.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private Lab_5DataSet lab_5DataSet;
        private System.Windows.Forms.BindingSource lecturerBindingSource;
        private Lab_5DataSetTableAdapters.LecturerTableAdapter lecturerTableAdapter;
        private Lab_5DataSetTableAdapters.TableAdapterManager tableAdapterManager;
        private System.Windows.Forms.BindingNavigator lecturerBindingNavigator;
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
        private System.Windows.Forms.ToolStripButton lecturerBindingNavigatorSaveItem;
        private System.Windows.Forms.TextBox id_LectTextBox;
        private System.Windows.Forms.TextBox fIOTextBox;
        private System.Windows.Forms.TextBox stageTextBox;
        private System.Windows.Forms.TextBox kafedraTextBox;
    }
}