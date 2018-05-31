#include "VendaDomainV2.h"

VendaDomainV2::VendaDomainV2()
{
}

void VendaDomainV2::validate()
{
	if (String::IsNullOrEmpty(this->Bem))
		throw gcnew Exception("O campo Bem não pode ficar vazio");
	if (String::IsNullOrEmpty(this->Descricao))
		throw gcnew Exception("O campo descrição não pode ficar vazio");
	if (this->ano_modelo == 0)
		throw gcnew Exception("O Campo Ano/Modelo não pode ser Zerado");
	if(this->prazo == 0)
		throw gcnew Exception("O Campo prazo não pode ser Zerado");
	if (this->valor == 0)
		throw gcnew Exception("O Campo valor não pode ser Zerado");
}

bool VendaDomainV2::CalcularResultado(double salario)
{
	double Resultado = (this->valor / this->prazo)* 0.30;
	if (salario > Resultado)
	{
		this->resultado = Resultado;
		return true;
	}
	else
		return false;
}
