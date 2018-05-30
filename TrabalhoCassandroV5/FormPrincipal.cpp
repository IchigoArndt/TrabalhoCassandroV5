#include "FormPrincipal.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace std;


[STAThreadAttribute]
int main(array<System::String^>^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TrabalhoCassandroV5::FormPrincipal form;
	Application::Run(%form);
}