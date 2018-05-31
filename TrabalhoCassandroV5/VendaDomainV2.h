#pragma once
#include "ClienteDomainV2.h"
ref class VendaDomainV2
{
public:
	ClienteDomainV2^ cliente = gcnew ClienteDomainV2();
	String^ Bem;
	String^ Descricao;
	double  valor;
	int     ano_modelo;
	int     prazo;
	VendaDomainV2();
	void    validate();
	bool     CalcularResultado(double salario);
private:
	int     resultado;
};

