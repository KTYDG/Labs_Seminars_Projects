namespace DM_DB {
    partial class ITvar1 {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing) {
            if(disposing && (components != null)) {
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
            this.lab_5DataSet = new DM_DB.Lab_5DataSet();
            this.studGroupBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.studGroupTableAdapter = new DM_DB.Lab_5DataSetTableAdapters.StudGroupTableAdapter();
            this.tableAdapterManager = new DM_DB.Lab_5DataSetTableAdapters.TableAdapterManager();
            this.studGroupDataGridView = new System.Windows.Forms.DataGridView();
            this.dataGridViewTextBoxColumn1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewTextBoxColumn2 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewTextBoxColumn3 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.kafedra = new System.Windows.Forms.RadioButton();
            this.kurs = new System.Windows.Forms.RadioButton();
            this.group = new System.Windows.Forms.RadioButton();
            this.value = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.lab_5DataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.studGroupBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.studGroupDataGridView)).BeginInit();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
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
            this.tableAdapterManager.ExamTableAdapter = null;
            this.tableAdapterManager.LecturerTableAdapter = null;
            this.tableAdapterManager.StudentTableAdapter = null;
            this.tableAdapterManager.StudGroupTableAdapter = this.studGroupTableAdapter;
            this.tableAdapterManager.StudGroupTestTableAdapter = null;
            this.tableAdapterManager.UpdateOrder = DM_DB.Lab_5DataSetTableAdapters.TableAdapterManager.UpdateOrderOption.InsertUpdateDelete;
            // 
            // studGroupDataGridView
            // 
            this.studGroupDataGridView.AutoGenerateColumns = false;
            this.studGroupDataGridView.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.studGroupDataGridView.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.dataGridViewTextBoxColumn1,
            this.dataGridViewTextBoxColumn2,
            this.dataGridViewTextBoxColumn3});
            this.studGroupDataGridView.DataSource = this.studGroupBindingSource;
            this.studGroupDataGridView.Location = new System.Drawing.Point(12, 158);
            this.studGroupDataGridView.Name = "studGroupDataGridView";
            this.studGroupDataGridView.RowHeadersWidth = 51;
            this.studGroupDataGridView.RowTemplate.Height = 24;
            this.studGroupDataGridView.Size = new System.Drawing.Size(499, 268);
            this.studGroupDataGridView.TabIndex = 1;
            // 
            // dataGridViewTextBoxColumn1
            // 
            this.dataGridViewTextBoxColumn1.DataPropertyName = "NameGroup";
            this.dataGridViewTextBoxColumn1.HeaderText = "NameGroup";
            this.dataGridViewTextBoxColumn1.MinimumWidth = 6;
            this.dataGridViewTextBoxColumn1.Name = "dataGridViewTextBoxColumn1";
            this.dataGridViewTextBoxColumn1.Width = 125;
            // 
            // dataGridViewTextBoxColumn2
            // 
            this.dataGridViewTextBoxColumn2.DataPropertyName = "Kurs";
            this.dataGridViewTextBoxColumn2.HeaderText = "Kurs";
            this.dataGridViewTextBoxColumn2.MinimumWidth = 6;
            this.dataGridViewTextBoxColumn2.Name = "dataGridViewTextBoxColumn2";
            this.dataGridViewTextBoxColumn2.Width = 125;
            // 
            // dataGridViewTextBoxColumn3
            // 
            this.dataGridViewTextBoxColumn3.DataPropertyName = "Kafedra";
            this.dataGridViewTextBoxColumn3.HeaderText = "Kafedra";
            this.dataGridViewTextBoxColumn3.MinimumWidth = 6;
            this.dataGridViewTextBoxColumn3.Name = "dataGridViewTextBoxColumn3";
            this.dataGridViewTextBoxColumn3.Width = 125;
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.kafedra);
            this.groupBox1.Controls.Add(this.kurs);
            this.groupBox1.Controls.Add(this.group);
            this.groupBox1.Location = new System.Drawing.Point(353, 30);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(158, 110);
            this.groupBox1.TabIndex = 2;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "В столбце";
            // 
            // kafedra
            // 
            this.kafedra.AutoSize = true;
            this.kafedra.Location = new System.Drawing.Point(6, 73);
            this.kafedra.Name = "kafedra";
            this.kafedra.Size = new System.Drawing.Size(87, 20);
            this.kafedra.TabIndex = 2;
            this.kafedra.TabStop = true;
            this.kafedra.Text = "Кафедра";
            this.kafedra.UseVisualStyleBackColor = true;
            // 
            // kurs
            // 
            this.kurs.AutoSize = true;
            this.kurs.Location = new System.Drawing.Point(6, 47);
            this.kurs.Name = "kurs";
            this.kurs.Size = new System.Drawing.Size(59, 20);
            this.kurs.TabIndex = 1;
            this.kurs.TabStop = true;
            this.kurs.Text = "Курс";
            this.kurs.UseVisualStyleBackColor = true;
            // 
            // group
            // 
            this.group.AutoSize = true;
            this.group.Checked = true;
            this.group.Location = new System.Drawing.Point(6, 21);
            this.group.Name = "group";
            this.group.Size = new System.Drawing.Size(121, 20);
            this.group.TabIndex = 0;
            this.group.TabStop = true;
            this.group.Text = "Номер группы";
            this.group.UseVisualStyleBackColor = true;
            // 
            // value
            // 
            this.value.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.value.Location = new System.Drawing.Point(146, 40);
            this.value.Name = "value";
            this.value.Size = new System.Drawing.Size(100, 34);
            this.value.TabIndex = 3;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label1.Location = new System.Drawing.Point(12, 43);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(128, 29);
            this.label1.TabIndex = 4;
            this.label1.Text = "Значение";
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(146, 93);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(100, 30);
            this.button1.TabIndex = 5;
            this.button1.Text = "Найти";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // ITvar1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(523, 438);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.value);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.studGroupDataGridView);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.Fixed3D;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "ITvar1";
            this.Text = "ITvar1";
            this.Load += new System.EventHandler(this.ITvar1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.lab_5DataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.studGroupBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.studGroupDataGridView)).EndInit();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private Lab_5DataSet lab_5DataSet;
        private System.Windows.Forms.BindingSource studGroupBindingSource;
        private Lab_5DataSetTableAdapters.StudGroupTableAdapter studGroupTableAdapter;
        private Lab_5DataSetTableAdapters.TableAdapterManager tableAdapterManager;
        private System.Windows.Forms.DataGridView studGroupDataGridView;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn1;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn2;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn3;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.RadioButton kafedra;
        private System.Windows.Forms.RadioButton kurs;
        private System.Windows.Forms.RadioButton group;
        private System.Windows.Forms.TextBox value;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button button1;
    }
}