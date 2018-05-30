#include "EnderecoDomainV2.h"

void EnderecoDomainV2::Validate() {
	if (String::IsNullOrEmpty(this->Endereco))
		throw gcnew Exception();
}