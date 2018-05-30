#include "CadastroCliente.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace std;

void CarregarTela() 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TrabalhoCassandroV5::CadastroCliente cdf;
	Application::Run(%cdf);
}
