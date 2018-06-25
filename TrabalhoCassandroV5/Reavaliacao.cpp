#include "Reavaliacao.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace std;

void CarregarTelaReavaliacaoForm()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TrabalhoCassandroV5::Reavaliacao rvl;
	Application::Run(%rvl);
}