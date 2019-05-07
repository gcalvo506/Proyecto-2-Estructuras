#include "MyForm.h"

using namespace GUI;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Globalization;

[STAThread]

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MyForm form;
	Application::Run(%form);
}