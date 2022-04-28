using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DM_DB {
    public partial class ITvar6: Form {
        public ITvar6() {
            InitializeComponent();
        }

        private void examBindingNavigatorSaveItem_Click(object sender, EventArgs e) {
            this.Validate();
            this.examBindingSource.EndEdit();
            this.tableAdapterManager.UpdateAll(this.lab_5DataSet);

        }

        private void ITvar6_Load(object sender, EventArgs e) {
            // TODO: This line of code loads data into the 'lab_5DataSet.Lecturer' table. You can move, or remove it, as needed.
            this.lecturerTableAdapter.Fill(this.lab_5DataSet.Lecturer);
            // TODO: This line of code loads data into the 'lab_5DataSet.Exam' table. You can move, or remove it, as needed.
            this.examTableAdapter.Fill(this.lab_5DataSet.Exam);

        }

        private void fillByToolStripButton_Click(object sender, EventArgs e) {
            try {
                this.examTableAdapter.FillBy(this.lab_5DataSet.Exam);
            }
            catch(System.Exception ex) {
                System.Windows.Forms.MessageBox.Show(ex.Message);
            }

        }

        private void fillBy1ToolStripButton_Click(object sender, EventArgs e) {
            try {
                this.examTableAdapter.FillBy1(this.lab_5DataSet.Exam);
            }
            catch(System.Exception ex) {
                System.Windows.Forms.MessageBox.Show(ex.Message);
            }

        }

        private void fillBy2ToolStripButton_Click(object sender, EventArgs e) {
            try {
                this.examTableAdapter.FillBy2(this.lab_5DataSet.Exam);
            }
            catch(System.Exception ex) {
                System.Windows.Forms.MessageBox.Show(ex.Message);
            }

        }
    }
}
