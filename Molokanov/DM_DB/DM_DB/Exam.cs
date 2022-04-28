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
    public partial class Exam: Form {
        public Exam() {
            InitializeComponent();
        }

        private void examBindingNavigatorSaveItem_Click(object sender, EventArgs e) {
            this.Validate();
            this.examBindingSource.EndEdit();
            this.tableAdapterManager.UpdateAll(this.lab_5DataSet);

        }

        private void Exam_Load(object sender, EventArgs e) {
            // TODO: This line of code loads data into the 'lab_5DataSet.Lecturer' table. You can move, or remove it, as needed.
            this.lecturerTableAdapter.Fill(this.lab_5DataSet.Lecturer);
            // TODO: This line of code loads data into the 'lab_5DataSet.Student' table. You can move, or remove it, as needed.
            this.studentTableAdapter.Fill(this.lab_5DataSet.Student);
            // TODO: This line of code loads data into the 'lab_5DataSet.Exam' table. You can move, or remove it, as needed.
            this.examTableAdapter.Fill(this.lab_5DataSet.Exam);

        }

        private void button4_Click(object sender, EventArgs e) {
            examBindingSource.MoveLast();
        }

        private void button7_Click(object sender, EventArgs e) {
            this.Validate(); // Проверяет введеные поля на соответсвие типам данных
            this.examBindingSource.EndEdit(); // Закрывает подключение с сервером
            this.tableAdapterManager.UpdateAll(this.lab_5DataSet); // Обновляет данные на сервере
        }

        private void button1_Click(object sender, EventArgs e) {
            examBindingSource.MoveFirst();
        }

        private void button2_Click(object sender, EventArgs e) {
            examBindingSource.MovePrevious();
        }

        private void button5_Click(object sender, EventArgs e) {
            examBindingSource.MoveNext();
        }

        private void button3_Click(object sender, EventArgs e) {
            examBindingSource.AddNew();
        }

        private void button6_Click(object sender, EventArgs e) {
            examBindingSource.RemoveCurrent();
        }
    }
}
