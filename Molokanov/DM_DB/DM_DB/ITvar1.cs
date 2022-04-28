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
    public partial class ITvar1: Form {
        public ITvar1() {
            InitializeComponent();
        }

        private void studGroupBindingNavigatorSaveItem_Click(object sender, EventArgs e) {
            this.Validate();
            this.studGroupBindingSource.EndEdit();
            this.tableAdapterManager.UpdateAll(this.lab_5DataSet);

        }

        private void ITvar1_Load(object sender, EventArgs e) {
            // TODO: This line of code loads data into the 'lab_5DataSet.StudGroup' table. You can move, or remove it, as needed.
            this.studGroupTableAdapter.Fill(this.lab_5DataSet.StudGroup);

        }

        private void button1_Click(object sender, EventArgs e) {
            if(group.Checked) {
                studGroupBindingSource.Filter = "NameGroup = '" + value.Text + "'";
            }
            else if(kurs.Checked) {
                try {
                    studGroupBindingSource.Filter = "Kurs = '" + value.Text + "' AND NameGroup = 'ИДБ-20-07' AND Kafedra LIKE '%'"; // Тут проверка множественного фильтра стоит, стереть если не надо
                }
                catch {
                    studGroupBindingSource.Filter = "Kurs = '-1'";
                }
            }
            else {
                studGroupBindingSource.Filter = "Kafedra = '" + value.Text + "'";
            }
        }
    }
}
