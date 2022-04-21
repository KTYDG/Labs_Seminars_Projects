using System.Runtime.InteropServices;
namespace Forms {
    public partial class Form1: Form {
        [DllImport("../x64/Debug/pr38", CallingConvention = CallingConvention.Cdecl)]
        public static extern DB db;
        public Form1() {
            DB db1;
            InitializeComponent();
        }

    }
}
