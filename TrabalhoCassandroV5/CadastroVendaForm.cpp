#include "CadastroVendaForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace std;
void CarregarTelaVendaForm()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TrabalhoCassandroV5::CadastroVendaForm cdvf;
	Application::Run(%cdvf);
}



