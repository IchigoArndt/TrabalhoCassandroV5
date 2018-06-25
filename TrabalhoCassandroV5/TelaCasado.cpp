#include "TelaCasado.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace std;
void CarregarTelaCasadoForm()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TrabalhoCassandroV5::TelaCasado tc;
	Application::Run(%tc);
}
