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
    public partial class Lecturer: Form {
        public Lecturer() {
            InitializeComponent();
        }

        private void lecturerBindingNavigatorSaveItem_Click(object sender, EventArgs e) {
            this.Validate();
            this.lecturerBindingSource.EndEdit();
            this.tableAdapterManager.UpdateAll(this.lab_5DataSet);

        }

        private void Lecturer_Load(object sender, EventArgs e) {
            // TODO: This line of code loads data into the 'lab_5DataSet.Lecturer' table. You can move, or remove it, as needed.
            this.lecturerTableAdapter.Fill(this.lab_5DataSet.Lecturer);

        }
    }
}
