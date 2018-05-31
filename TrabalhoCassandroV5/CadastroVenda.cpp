#include "CadastroVenda.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace std;
void CarregarTelaVenda()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TrabalhoCassandroV5::CadastroVenda cdv;
	Application::Run(%cdv);
}

