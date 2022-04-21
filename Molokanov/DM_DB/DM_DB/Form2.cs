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
    public partial class Form2: Form {
        public Form2() {
            InitializeComponent();
        }

        private void studGroupBindingNavigatorSaveItem_Click(object sender, EventArgs e) {
            this.Validate();
            this.studGroupBindingSource.EndEdit();
            //this.tableAdapterManager.UpdateAll(this.Lab_5DataSet);

        }

        private void Form2_Load(object sender, EventArgs e) {
            // TODO: This line of code loads data into the 'lab_5DataSet.Student' table. You can move, or remove it, as needed.
            this.studentTableAdapter.Fill(this.lab_5DataSet.Student);
            // TODO: This line of code loads data into the 'lab_5DataSet.StudGroup' table. You can move, or remove it, as needed.
            this.studGroupTableAdapter.Fill(this.lab_5DataSet.StudGroup);

        }

        private void fillByToolStripButton_Click(object sender, EventArgs e) {
            try {
                this.studGroupTableAdapter.FillBy(this.lab_5DataSet.StudGroup);
            }
            catch(System.Exception ex) {
                System.Windows.Forms.MessageBox.Show(ex.Message);
            }

        }

        private void studGroupBindingNavigatorSaveItem_Click_1(object sender, EventArgs e) {
            this.Validate();
            this.studGroupBindingSource.EndEdit();
            this.tableAdapterManager.UpdateAll(this.lab_5DataSet);

        }

        private void studGroupBindingNavigatorSaveItem_Click_2(object sender, EventArgs e) {
            this.Validate();
            this.studGroupBindingSource.EndEdit();
            this.tableAdapterManager.UpdateAll(this.lab_5DataSet);

        }

        private void button1_Click(object sender, EventArgs e) {
            Form ITvar1 = new ITvar1();
            ITvar1.Show();
        }
    }
}
