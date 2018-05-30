#pragma once
using namespace System;
using namespace std;
ref class ProfissaoDomainV2
{
public:
	  ProfissaoDomainV2();
	String ^ nomeFuncao;
	double Salario;
	String^ Admissao;
	void Validate();
};

