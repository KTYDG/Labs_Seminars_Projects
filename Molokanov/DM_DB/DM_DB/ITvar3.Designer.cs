namespace DM_DB {
    partial class ITvar3 {
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
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.stageCheck = new System.Windows.Forms.CheckBox();
            this.kafedraCheck = new System.Windows.Forms.CheckBox();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.kafedraText = new System.Windows.Forms.TextBox();
            this.findButton = new System.Windows.Forms.Button();
            this.lab_5DataSet = new DM_DB.Lab_5DataSet();
            this.lecturerBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.lecturerTableAdapter = new DM_DB.Lab_5DataSetTableAdapters.LecturerTableAdapter();
            this.tableAdapterManager = new DM_DB.Lab_5DataSetTableAdapters.TableAdapterManager();
            this.lecturerDataGridView = new System.Windows.Forms.DataGridView();
            this.stageText = new System.Windows.Forms.NumericUpDown();
            this.dataGridViewTextBoxColumn1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewTextBoxColumn2 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewTextBoxColumn3 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewTextBoxColumn4 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.clearButton = new System.Windows.Forms.Button();
            this.groupBox1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.lab_5DataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.lecturerBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.lecturerDataGridView)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.stageText)).BeginInit();
            this.SuspendLayout();
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.clearButton);
            this.groupBox1.Controls.Add(this.stageText);
            this.groupBox1.Controls.Add(this.findButton);
            this.groupBox1.Controls.Add(this.kafedraText);
            this.groupBox1.Controls.Add(this.comboBox1);
            this.groupBox1.Controls.Add(this.kafedraCheck);
            this.groupBox1.Controls.Add(this.stageCheck);
            this.groupBox1.Location = new System.Drawing.Point(12, 12);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(442, 100);
            this.groupBox1.TabIndex = 0;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Критерий поиска";
            // 
            // stageCheck
            // 
            this.stageCheck.AutoSize = true;
            this.stageCheck.Location = new System.Drawing.Point(6, 30);
            this.stageCheck.Name = "stageCheck";
            this.stageCheck.Size = new System.Drawing.Size(113, 20);
            this.stageCheck.TabIndex = 0;
            this.stageCheck.Text = "Стаж работы";
            this.stageCheck.UseVisualStyleBackColor = true;
            // 
            // kafedraCheck
            // 
            this.kafedraCheck.AutoSize = true;
            this.kafedraCheck.Location = new System.Drawing.Point(6, 63);
            this.kafedraCheck.Name = "kafedraCheck";
            this.kafedraCheck.Size = new System.Drawing.Size(88, 20);
            this.kafedraCheck.TabIndex = 1;
            this.kafedraCheck.Text = "Кафедра";
            this.kafedraCheck.UseVisualStyleBackColor = true;
            // 
            // comboBox1
            // 
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Items.AddRange(new object[] {
            ">",
            ">=",
            "<",
            "<=",
            "=",
            "!="});
            this.comboBox1.Location = new System.Drawing.Point(126, 30);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(78, 24);
            this.comboBox1.TabIndex = 2;
            // 
            // kafedraText
            // 
            this.kafedraText.Location = new System.Drawing.Point(126, 63);
            this.kafedraText.Name = "kafedraText";
            this.kafedraText.Size = new System.Drawing.Size(100, 22);
            this.kafedraText.TabIndex = 3;
            // 
            // findButton
            // 
            this.findButton.Location = new System.Drawing.Point(232, 61);
            this.findButton.Name = "findButton";
            this.findButton.Size = new System.Drawing.Size(107, 25);
            this.findButton.TabIndex = 5;
            this.findButton.Text = "Найти";
            this.findButton.UseVisualStyleBackColor = true;
            this.findButton.Click += new System.EventHandler(this.findButton_Click);
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
            // lecturerDataGridView
            // 
            this.lecturerDataGridView.AutoGenerateColumns = false;
            this.lecturerDataGridView.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.lecturerDataGridView.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.dataGridViewTextBoxColumn1,
            this.dataGridViewTextBoxColumn2,
            this.dataGridViewTextBoxColumn3,
            this.dataGridViewTextBoxColumn4});
            this.lecturerDataGridView.DataSource = this.lecturerBindingSource;
            this.lecturerDataGridView.Location = new System.Drawing.Point(12, 118);
            this.lecturerDataGridView.Name = "lecturerDataGridView";
            this.lecturerDataGridView.RowHeadersWidth = 51;
            this.lecturerDataGridView.RowTemplate.Height = 24;
            this.lecturerDataGridView.Size = new System.Drawing.Size(547, 326);
            this.lecturerDataGridView.TabIndex = 2;
            // 
            // stageText
            // 
            this.stageText.Location = new System.Drawing.Point(210, 31);
            this.stageText.Name = "stageText";
            this.stageText.Size = new System.Drawing.Size(120, 22);
            this.stageText.TabIndex = 6;
            // 
            // dataGridViewTextBoxColumn1
            // 
            this.dataGridViewTextBoxColumn1.DataPropertyName = "Id_Lect";
            this.dataGridViewTextBoxColumn1.HeaderText = "Id_Lect";
            this.dataGridViewTextBoxColumn1.MinimumWidth = 6;
            this.dataGridViewTextBoxColumn1.Name = "dataGridViewTextBoxColumn1";
            // 
            // dataGridViewTextBoxColumn2
            // 
            this.dataGridViewTextBoxColumn2.DataPropertyName = "FIO";
            this.dataGridViewTextBoxColumn2.HeaderText = "FIO";
            this.dataGridViewTextBoxColumn2.MinimumWidth = 6;
            this.dataGridViewTextBoxColumn2.Name = "dataGridViewTextBoxColumn2";
            this.dataGridViewTextBoxColumn2.Width = 125;
            // 
            // dataGridViewTextBoxColumn3
            // 
            this.dataGridViewTextBoxColumn3.DataPropertyName = "Stage";
            this.dataGridViewTextBoxColumn3.HeaderText = "Stage";
            this.dataGridViewTextBoxColumn3.MinimumWidth = 6;
            this.dataGridViewTextBoxColumn3.Name = "dataGridViewTextBoxColumn3";
            this.dataGridViewTextBoxColumn3.Width = 50;
            // 
            // dataGridViewTextBoxColumn4
            // 
            this.dataGridViewTextBoxColumn4.DataPropertyName = "Kafedra";
            this.dataGridViewTextBoxColumn4.HeaderText = "Kafedra";
            this.dataGridViewTextBoxColumn4.MinimumWidth = 6;
            this.dataGridViewTextBoxColumn4.Name = "dataGridViewTextBoxColumn4";
            this.dataGridViewTextBoxColumn4.Width = 125;
            // 
            // clearButton
            // 
            this.clearButton.Location = new System.Drawing.Point(361, 12);
            this.clearButton.Name = "clearButton";
            this.clearButton.Size = new System.Drawing.Size(75, 82);
            this.clearButton.TabIndex = 7;
            this.clearButton.Text = "СБРОС";
            this.clearButton.UseVisualStyleBackColor = true;
            this.clearButton.Click += new System.EventHandler(this.clearButton_Click);
            // 
            // ITvar3
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(571, 456);
            this.Controls.Add(this.lecturerDataGridView);
            this.Controls.Add(this.groupBox1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.Fixed3D;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "ITvar3";
            this.Text = "ITvar3";
            this.Load += new System.EventHandler(this.ITvar3_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.lab_5DataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.lecturerBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.lecturerDataGridView)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.stageText)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.ComboBox comboBox1;
        private System.Windows.Forms.CheckBox kafedraCheck;
        private System.Windows.Forms.CheckBox stageCheck;
        private System.Windows.Forms.Button findButton;
        private System.Windows.Forms.TextBox kafedraText;
        private Lab_5DataSet lab_5DataSet;
        private System.Windows.Forms.BindingSource lecturerBindingSource;
        private Lab_5DataSetTableAdapters.LecturerTableAdapter lecturerTableAdapter;
        private Lab_5DataSetTableAdapters.TableAdapterManager tableAdapterManager;
        private System.Windows.Forms.DataGridView lecturerDataGridView;
        private System.Windows.Forms.NumericUpDown stageText;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn1;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn2;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn3;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn4;
        private System.Windows.Forms.Button clearButton;
    }
}