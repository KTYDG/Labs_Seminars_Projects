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
    public partial class ITvar3: Form {
        public ITvar3() {
            InitializeComponent();
        }

        private void lecturerBindingNavigatorSaveItem_Click(object sender, EventArgs e) {
            this.Validate();
            this.lecturerBindingSource.EndEdit();
            this.tableAdapterManager.UpdateAll(this.lab_5DataSet);

        }

        private void ITvar3_Load(object sender, EventArgs e) {
            // TODO: This line of code loads data into the 'lab_5DataSet.Lecturer' table. You can move, or remove it, as needed.
            this.lecturerTableAdapter.Fill(this.lab_5DataSet.Lecturer);

        }

        private void findButton_Click(object sender, EventArgs e) {
            List<string> list = new List<string>(2);
            if(stageCheck.Checked && comboBox1.Text.Length > 0 && stageText.Text.Length > 0) {
                list.Add("Stage " + comboBox1.Text + " '" + stageText.Text + "'");
            }
            if(kafedraCheck.Checked && kafedraText.Text.Length > 0) {
                list.Add("Kafedra = '" + kafedraText.Text + "'");
            }
            lecturerBindingSource.Filter = string.Join(" AND ", list.ToArray());
            //lecturerBindingSource.Filter="Stage "+comboBox1.Text+" '"+stageText.Text+"' AND Kafedra='"+kafedraText.Text+"'";
        }

        private void clearButton_Click(object sender, EventArgs e) {
            comboBox1.Text = "";
            stageText.Text = "";
            kafedraText.Text = "";
            stageCheck.Checked = false;
            kafedraCheck.Checked = false;
            lecturerBindingSource.Filter = "";
        }
    }
}
