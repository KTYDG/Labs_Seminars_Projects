namespace Test_Of_Forms {
    public partial class Form1: Form {
        public Form1() {
            InitializeComponent();
        }

        private void ButtonPushName(object sender, EventArgs e) {
            if(!string.IsNullOrWhiteSpace(PushName.Text)&&!ListNames.Items.Contains(PushName.Text)) {
                ListNames.Items.Add(PushName.Text);
                PushName.Clear();
            }
        }
    }
}