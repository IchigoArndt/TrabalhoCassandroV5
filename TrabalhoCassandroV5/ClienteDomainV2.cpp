#include "ClienteDomainV2.h"



void ClienteDomainV2::Validate(){
	if (this->Nome->Length < 3 || this->Nome->Length > 50)
		throw gcnew Exception("Nome n�o pode ser menor que 3 ou maior que 40");
	if (String::IsNullOrEmpty(this->Nome))
		throw gcnew Exception("Nome n�o pode ser vazio");
	if (String::IsNullOrEmpty(this->CPF))
		throw gcnew Exception("CPF n�o pode ser vazio");
	if (String::IsNullOrEmpty(this->DataNascimento))
		throw gcnew Exception("A data de nascimento n�o pode ser vazia");
	if (this->NomeMae->Length < 3 || this->NomeMae->Length > 50)
		throw gcnew Exception("Nome da mae do cliente n�o pode ser menor que 3 ou maior que 40");
	if (String::IsNullOrEmpty(this->NomeMae))
		throw gcnew Exception("Nome da mae do cliente n�o pode ser vazio");
	if (String::IsNullOrEmpty(this->endreco.Endereco))
		throw gcnew Exception("O endere�o n�o pode ser vazio");

}
String^ ClienteDomainV2::ToStringCliente()
{
	String^ tostring = "Id :" + this->id + "\n  Nome :" + this->Nome + "\n  CPF :" + this->CPF + "\n  Sal�rio :" + this->profissao->Salario;
	return tostring;
}

bool ClienteDomainV2::verificaCpf(String^ cpf)
{
	int multiplicador1[9] =  { 10, 9, 8, 7, 6, 5, 4, 3, 2 };
	int multiplicador2[10] = { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2 };
	String^ tempCpf;
	String^ digito;
	int soma;
	int resto;
	cpf = cpf->Trim();
	//Replace(".", "").Replace("-", "")
	cpf = cpf->Replace(".","")->Replace("-","");
	if (cpf->Length != 11)
		return false;
	if ((cpf->CompareTo("00000000000") == 0) || (cpf->CompareTo("11111111111") == 0) || (cpf->CompareTo("22222222222") == 0) ||
		(cpf->CompareTo("33333333333") == 0) || (cpf->CompareTo("44444444444") == 0) || (cpf->CompareTo("55555555555") == 0) ||
		(cpf->CompareTo("66666666666") == 0) || (cpf->CompareTo("77777777777") == 0) || (cpf->CompareTo("88888888888") == 0) ||
		(cpf->CompareTo("99999999999") == 0)) {
		return false;
	}
	tempCpf = cpf->Substring(0, 9);
	soma = 0;

	for (int i = 0; i<9; i++)
		soma += Convert::ToInt32(tempCpf[i].ToString()) * multiplicador1[i];
	resto = soma % 11;
	if (resto < 2)
		resto = 0;
	else
		resto = 11 - resto;
	digito = resto.ToString();
	tempCpf = tempCpf + digito;
	soma = 0;
	for (int i = 0; i<10; i++)
		soma += Convert::ToInt32(tempCpf[i].ToString()) * multiplicador2[i];
	resto = soma % 11;
	if (resto < 2)
		resto = 0;
	else
		resto = 11 - resto;
	digito = digito + resto.ToString();
	return cpf->EndsWith(digito);
}
