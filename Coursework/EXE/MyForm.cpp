#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace EXE;

int main() {
	locale::global(locale("ru_RU.UTF-8"));
	setlocale(LC_ALL, "Rus");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
}