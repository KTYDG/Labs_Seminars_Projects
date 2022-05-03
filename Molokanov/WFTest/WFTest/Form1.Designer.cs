
namespace WFTest
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.button1 = new System.Windows.Forms.Button();
            this.rb1 = new System.Windows.Forms.RichTextBox();
            this.rb2 = new System.Windows.Forms.RichTextBox();
            this.button2 = new System.Windows.Forms.Button();
            this.button3 = new System.Windows.Forms.Button();
            this.button4 = new System.Windows.Forms.Button();
            this.button5 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(814, 104);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(367, 72);
            this.button1.TabIndex = 0;
            this.button1.Text = "Записать в файл";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // rb1
            // 
            this.rb1.Location = new System.Drawing.Point(12, 23);
            this.rb1.Name = "rb1";
            this.rb1.Size = new System.Drawing.Size(642, 123);
            this.rb1.TabIndex = 1;
            this.rb1.Text = "Проверка записи текста \n в файл";
            // 
            // rb2
            // 
            this.rb2.Location = new System.Drawing.Point(12, 152);
            this.rb2.Name = "rb2";
            this.rb2.Size = new System.Drawing.Size(642, 136);
            this.rb2.TabIndex = 2;
            this.rb2.Text = "";
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(814, 182);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(370, 68);
            this.button2.TabIndex = 3;
            this.button2.Text = "Прочитать из файла";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // button3
            // 
            this.button3.Location = new System.Drawing.Point(811, 256);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(373, 82);
            this.button3.TabIndex = 4;
            this.button3.Text = "Взять массив строк";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            // 
            // button4
            // 
            this.button4.Location = new System.Drawing.Point(808, 344);
            this.button4.Name = "button4";
            this.button4.Size = new System.Drawing.Size(373, 82);
            this.button4.TabIndex = 4;
            this.button4.Text = "Взять массив целых";
            this.button4.UseVisualStyleBackColor = true;
            this.button4.Click += new System.EventHandler(this.button4_Click);
            // 
            // button5
            // 
            this.button5.Location = new System.Drawing.Point(808, 432);
            this.button5.Name = "button5";
            this.button5.Size = new System.Drawing.Size(373, 82);
            this.button5.TabIndex = 4;
            this.button5.Text = "Взять массив дробных";
            this.button5.UseVisualStyleBackColor = true;
            this.button5.Click += new System.EventHandler(this.button5_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(16F, 31F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1497, 701);
            this.Controls.Add(this.button5);
            this.Controls.Add(this.button4);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.rb2);
            this.Controls.Add(this.rb1);
            this.Controls.Add(this.button1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.RichTextBox rb1;
        private System.Windows.Forms.RichTextBox rb2;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.Button button4;
        private System.Windows.Forms.Button button5;
    }
}

