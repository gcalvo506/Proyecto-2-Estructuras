#include "MyForm.h"

using namespace GUI;    // Reemplazar Project1 por el nombre que se le haya dado al proyecto
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Globalization;

[STAThread]

void main(/*array<String^>^ arg*/) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//Project1 es el nombre del proyecto
	MyForm form;	//Reemplazar MyForm por el nombre que tenga tu clase 
	Application::Run(%form);
}