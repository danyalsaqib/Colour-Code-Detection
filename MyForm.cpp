#include "MyForm.h"
#include"MyForm1.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
int Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project48::MyForm form;
	Application::Run(%form);
	return 0;
}
