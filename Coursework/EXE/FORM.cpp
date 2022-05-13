#include "FORM.h"

using namespace System;
using namespace System::Windows::Forms;

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	EXE::FORM form; //WinFormsTest - имя вашего проекта
	Application::Run(% form);
}