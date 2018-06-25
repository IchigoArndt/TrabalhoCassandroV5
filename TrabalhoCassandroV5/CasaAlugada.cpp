#include "CasaAlugada.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace std;

void CarregarTelaCasaAlugadaForm()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TrabalhoCassandroV5::CasaAlugada ca;
	Application::Run(%ca);
}