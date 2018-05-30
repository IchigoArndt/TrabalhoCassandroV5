#include "CadastroProfissao.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace std;
void CarregarTelaProfissao()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TrabalhoCassandroV5::CadastroProfissao cdp;
	Application::Run(%cdp);
}