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
    public partial class TableStudent: Form {
        public TableStudent() {
            InitializeComponent();
        }

        private void studentBindingNavigatorSaveItem_Click(object sender, EventArgs e) {
            this.Validate();
            this.studentBindingSource.EndEdit();
            this.tableAdapterManager.UpdateAll(this.lab_5DataSet);

        }

        private void TableStudent_Load(object sender, EventArgs e) {
            // TODO: This line of code loads data into the 'lab_5DataSet.Student' table. You can move, or remove it, as needed.
            this.studentTableAdapter.Fill(this.lab_5DataSet.Student);

        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e) {
            button1.Enabled=true;
        }

        private void button1_Click(object sender, EventArgs e) {
            System.Windows.Forms.DataGridViewColumn Col = default(System.Windows.Forms.DataGridViewColumn);
            switch(listBox1.SelectedIndex) {
                case 0:
                    Col=dataGridViewTextBoxColumn2;
                    break;
                case 1:
                    Col=dataGridViewTextBoxColumn3;
                    break;
                case 2:
                    Col=dataGridViewTextBoxColumn4;
                    break;
                case 3:
                    Col=dataGridViewTextBoxColumn5;
                    break;
                case 4:
                    Col=dataGridViewTextBoxColumn6;
                    break;
            }
            if(radioButton1.Checked) {
                studentDataGridView.Sort(Col, System.ComponentModel.ListSortDirection.Ascending);
            }
            else {
                studentDataGridView.Sort(Col, System.ComponentModel.ListSortDirection.Descending);
            }
        }

        private void button2_Click(object sender, EventArgs e) {
            studentBindingSource.Filter="FIO LIKE '"+textBox1.Text+"%'";
        }

        private void button3_Click(object sender, EventArgs e) {
            studentBindingSource.Filter="";
        }
    }
}
