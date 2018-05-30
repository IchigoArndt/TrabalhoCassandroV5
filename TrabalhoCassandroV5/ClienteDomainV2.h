#pragma once

#include "EnderecoDomainV2.h"
#include "ProfissaoDomainV2.h"

using namespace std;
using namespace System;

ref class ClienteDomainV2
{
public:
	int id;
	String^ Nome;
	EnderecoDomainV2 endreco;
	String^ DataNascimento;
	String^ CPF;
	int RG;
	String^ NomeMae;
	ProfissaoDomainV2^ profissao;
	void Validate();
	String^ ToStringCliente();
	bool verificaCpf(String^ cpf);
};

