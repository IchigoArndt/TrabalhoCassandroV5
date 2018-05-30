#include "ProfissaoDomainV2.h"

ProfissaoDomainV2::ProfissaoDomainV2() 
{

}

void ProfissaoDomainV2::Validate() {
	if (String::IsNullOrEmpty(this->nomeFuncao))
		throw gcnew Exception("O nome da função nao pode ficar vazio");
	if (String::IsNullOrEmpty(this->Admissao))
		throw gcnew Exception("A data da admissão nao pode ficar vazia");
	if (this->Salario == 0)
		throw gcnew Exception("O salário não pode ser zero ou nulo");
}