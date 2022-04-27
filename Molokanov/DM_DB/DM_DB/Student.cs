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
    public partial class Student: Form {
        public Student() {
            InitializeComponent();
        }

        private void studentBindingNavigatorSaveItem_Click(object sender, EventArgs e) {
            this.Validate();
            this.studentBindingSource.EndEdit();
            this.tableAdapterManager.UpdateAll(this.lab_5DataSet);

        }

        private void Student_Load(object sender, EventArgs e) {
            // TODO: This line of code loads data into the 'lab_5DataSet.StudGroup' table. You can move, or remove it, as needed.
            this.studGroupTableAdapter.Fill(this.lab_5DataSet.StudGroup);
            // TODO: This line of code loads data into the 'lab_5DataSet.Student' table. You can move, or remove it, as needed.
            this.studentTableAdapter.Fill(this.lab_5DataSet.Student);

        }

        private void button1_Click(object sender, EventArgs e) {
            Form TableStudent = new TableStudent();
            TableStudent.Show();
        }
    }
}
