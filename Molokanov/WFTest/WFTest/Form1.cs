using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

using System.Runtime.InteropServices;

namespace WFTest {
    public partial class Form1: Form {
        public Form1() {
            InitializeComponent();
        }

        [DllImport("MyDll.dll", EntryPoint = "SaveText", CallingConvention = CallingConvention.StdCall)]
        public static extern int SaveText(ref string text);
        [DllImport("MyDll.dll", EntryPoint = "LoadText", CallingConvention = CallingConvention.StdCall)]
        public static extern int LoadText(ref string text);

        private void button1_Click(object sender, EventArgs e) {
            string s = rb1.Text;
            int result = SaveText(ref s);
        }

        private void button2_Click(object sender, EventArgs e) {
            string s = "";
            LoadText(ref s);
            rb2.Text = s;
        }

        public static IntPtr IntArrayToIntPtr<GenChar>(int[] inputIntArray) {
            int size = inputIntArray.Length;
            IntPtr[] inPointers = new IntPtr[size];
            int dim = IntPtr.Size * size;

            IntPtr rRoot = Marshal.AllocCoTaskMem(dim);

            for(int i = 0; i < size; i++) {
                inPointers[i] = new IntPtr(inputIntArray[i]);
            }

            Marshal.Copy(inPointers, 0, rRoot, size);

            return rRoot;
        }

        public static IntPtr DoubleArrayToIntPtr<GenChar>(double[] d) {
            int size = d.Length;
            IntPtr[] inPointers = new IntPtr[size];
            int dim = IntPtr.Size * size;

            IntPtr rRoot = Marshal.AllocCoTaskMem(dim);

            for(int i = 0; i < size; i++) {
                string s = "";
                // IntPtr ip = new IntPtr((int)d[i]);
                // ip = Convert.ToInt32(d[i]);
                inPointers[i] = new IntPtr((int)d[i]);
            }

            Marshal.Copy(inPointers, 0, rRoot, size);

            return rRoot;
        }


        public static IntPtr StringArrayToIntPtr<GenChar>(string[] inputStrArray) {
            int size = inputStrArray.Length;
            IntPtr[] inPointers = new IntPtr[size];
            int dim = IntPtr.Size * size;
            IntPtr rRoot = Marshal.AllocCoTaskMem(dim);

            for(int i = 0; i < size; i++) {
                if(typeof(GenChar) == typeof(char))
                    inPointers[i] = Marshal.StringToCoTaskMemUni(inputStrArray[i]);
                else if(typeof(GenChar) == typeof(byte))
                    inPointers[i] = Marshal.StringToCoTaskMemAnsi(inputStrArray[i]);
                else if(typeof(GenChar) == typeof(IntPtr))
                    inPointers[i] = Marshal.StringToBSTR(inputStrArray[i]);
            }

            Marshal.Copy(inPointers, 0, rRoot, size);

            return rRoot;
        }

        public static string[] IntPtrToStringArray<GenChar>(int size, IntPtr rRoot) {
            IntPtr[] outPointers = new IntPtr[size];
            Marshal.Copy(rRoot, outPointers, 0, size);
            string[] outputStrArray = new string[size];

            for(int i = 0; i < size; i++) {
                if(typeof(GenChar) == typeof(char))
                    outputStrArray[i] = Marshal.PtrToStringUni(outPointers[i]);
                else if(typeof(GenChar) == typeof(byte))
                    outputStrArray[i] = Marshal.PtrToStringAnsi(outPointers[i]);
                else if(typeof(GenChar) == typeof(IntPtr))
                    outputStrArray[i] = Marshal.PtrToStringBSTR(outPointers[i]);

                Marshal.FreeCoTaskMem(outPointers[i]);
            }

            Marshal.FreeCoTaskMem(rRoot);

            return outputStrArray;
        }
        public static int[] IntPtrToIntArray<inT>(int size, IntPtr rRoot) where inT : struct {
            IntPtr[] outPointers = new IntPtr[size];
            Marshal.Copy(rRoot, outPointers, 0, size);
            int[] outputIntArray = new int[size];

            for(int i = 0; i < size; i++) {
                if(typeof(inT) == typeof(int))
                    outputIntArray[i] = (int)Marshal.PtrToStructure(outPointers[i], typeof(int));

                Marshal.FreeCoTaskMem(outPointers[i]);
            }

            Marshal.FreeCoTaskMem(rRoot);

            return outputIntArray;
        }

        public static double[] IntPtrToDoubleArray<inT>(int size, IntPtr rRoot) where inT : struct {
            IntPtr[] outPointers = new IntPtr[size];
            Marshal.Copy(rRoot, outPointers, 0, size);
            double[] outputArray = new double[size];

            for(int i = 0; i < size; i++) {
                if(typeof(inT) == typeof(double))
                    outputArray[i] = (double)Marshal.PtrToStructure(outPointers[i], typeof(double));

                Marshal.FreeCoTaskMem(outPointers[i]);
            }

            Marshal.FreeCoTaskMem(rRoot);

            return outputArray;
        }

        [DllImport("MyDll.dll", CharSet = CharSet.Unicode)]
        public extern static int GetArrays(ref IntPtr names, ref int sz);

        [DllImport("MyDll.dll", CharSet = CharSet.Unicode)]
        public extern static int GetIntArrays(ref IntPtr names, ref int sz);

        [DllImport("MyDll.dll", CharSet = CharSet.Unicode)]
        public extern static int GetDoubleArrays(ref IntPtr names, ref int sz);

        private void getArray() {
            int size = 0;
            string[] inputStrArray = new string[size];
            IntPtr pNames = StringArrayToIntPtr<char>(inputStrArray);

            Int64 result = GetArrays(ref pNames, ref size);
            string[] names;
            names = null;
            if(size > 0) {
                names = IntPtrToStringArray<char>(size, pNames);
            }
            else return;

            int size1 = size;
            rb2.Clear();
            for(int i = 0; i < size1; i++) {
                rb2.Text += names[i] + '\n';
            }

        }

        private void button3_Click(object sender, EventArgs e) {
            getArray();
        }

        private void getIntArray() {
            int size = 0;
            int[] inputIntArray = new int[size];
            IntPtr data = IntArrayToIntPtr<int>(inputIntArray);

            int result = GetIntArrays(ref data, ref size);
            int[] ints;
            ints = null;
            if(size > 0) {
                ints = IntPtrToIntArray<int>(size, data);
            }
            else return;

            int size1 = size;
            rb2.Clear();
            for(int i = 0; i < size1; i++) {
                rb2.Text += ints[i].ToString() + '\n';
            }

        }

        private void getDoubleArray() {
            int size = 0;
            double[] inputArray = new double[size];
            IntPtr data = DoubleArrayToIntPtr<double>(inputArray);

            int result = GetDoubleArrays(ref data, ref size);
            double[] ds;
            ds = null;
            if(size > 0) {
                ds = IntPtrToDoubleArray<double>(size, data);
            }
            else return;

            int size1 = size;
            rb2.Clear();
            for(int i = 0; i < size1; i++) {
                rb2.Text += ds[i].ToString() + '\n';
            }

        }

        private void button5_Click(object sender, EventArgs e) {
            getDoubleArray();
        }

        private void button4_Click(object sender, EventArgs e) {
            getIntArray();
        }

        [DllImport("MyDll.dll", EntryPoint = "CreateCMyDll", CallingConvention = CallingConvention.StdCall)]
        public static extern IntPtr CreateCMyDll(ref string text);

        [DllImport("MyDll.dll", EntryPoint = "Getchar", CallingConvention = CallingConvention.StdCall)]
        public static extern void Getchar(IntPtr obj, ref string text);

        [DllImport("MyDll.dll", EntryPoint = "DestroyCMyDll", CallingConvention = CallingConvention.StdCall)]
        public static extern void DestroyCMyDll(IntPtr obj);

        private void button6_Click(object sender, EventArgs e) {
            string text = textBox1.Text;
            IntPtr Test = CreateCMyDll(ref text);
            Getchar(Test, ref text);
            textBox2.Text = text;
            DestroyCMyDll(Test);
        }
    }
}