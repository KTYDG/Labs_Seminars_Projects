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
    public partial class Form1: Form {
        public Form1() {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e) {
            Form Form2 = new Form2();
            Form2.Show();
        }

        private void button2_Click(object sender, EventArgs e) {
            Form Lecturer = new Lecturer();
            Lecturer.Show();
        }

        private void button3_Click(object sender, EventArgs e) {
            Form Student = new Student();
            Student.Show();
        }

        private void button4_Click(object sender, EventArgs e) {
            Form Exam = new Exam();
            Exam.Show();
        }

        private void button5_Click(object sender, EventArgs e) {
            Form ITvar1 = new ITvar1();
            ITvar1.Show();
        }

        private void button6_Click(object sender, EventArgs e) {
            Form ITvar3 = new ITvar3();
            ITvar3.Show();
        }
    }
}
