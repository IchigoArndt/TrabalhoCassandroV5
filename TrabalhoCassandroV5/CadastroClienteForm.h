#pragma once
#include "ClienteDomainV2.h"
#include "CadastroProfissao.h"
#include "ProfissaoDomainV2.h"
namespace TrabalhoCassandroV5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;
	/// <summary>
	/// Sumário para CadastroClienteForm
	/// </summary>
	public ref class CadastroClienteForm : public System::Windows::Forms::Form
	{
	public:
		CadastroClienteForm(void)
		{
			InitializeComponent();
			//CarregaProfissoes();
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~CadastroClienteForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label6;






	private: System::Windows::Forms::Button^  BtnCadastrar;
	private: System::Windows::Forms::Button^  btnCancelar;
	private: System::Windows::Forms::Button^  btnPesquisarCep;
	public:  bool existeEndereco = false;




	public: System::String^ Tostring;
	public: ProfissaoDomainV2 ^ profissao = gcnew ProfissaoDomainV2();

	public:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->BtnCadastrar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnPesquisarCep = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nome";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Cep";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"CPF";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 123);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"RG";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 149);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Data Nascimento";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(55, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(182, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(55, 38);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(182, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(72, 93);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(165, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &CadastroClienteForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(72, 123);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(165, 20);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(99, 149);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(138, 20);
			this->textBox5->TabIndex = 9;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(99, 184);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(138, 20);
			this->textBox6->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(4, 191);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Nome da mãe";
			// 
			// BtnCadastrar
			// 
			this->BtnCadastrar->Location = System::Drawing::Point(7, 222);
			this->BtnCadastrar->Name = L"BtnCadastrar";
			this->BtnCadastrar->Size = System::Drawing::Size(97, 23);
			this->BtnCadastrar->TabIndex = 18;
			this->BtnCadastrar->Text = L"Cadastrar";
			this->BtnCadastrar->UseVisualStyleBackColor = true;
			this->BtnCadastrar->Click += gcnew System::EventHandler(this, &CadastroClienteForm::BtnCadastrar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(140, 222);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(97, 23);
			this->btnCancelar->TabIndex = 19;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &CadastroClienteForm::btnCancelar_Click);
			// 
			// btnPesquisarCep
			// 
			this->btnPesquisarCep->Location = System::Drawing::Point(99, 64);
			this->btnPesquisarCep->Name = L"btnPesquisarCep";
			this->btnPesquisarCep->Size = System::Drawing::Size(75, 23);
			this->btnPesquisarCep->TabIndex = 20;
			this->btnPesquisarCep->Text = L"pesquisar cep";
			this->btnPesquisarCep->UseVisualStyleBackColor = true;
			this->btnPesquisarCep->Click += gcnew System::EventHandler(this, &CadastroClienteForm::btnPesquisarCep_Click);
			// 
			// CadastroClienteForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(243, 246);
			this->Controls->Add(this->btnPesquisarCep);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->BtnCadastrar);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"CadastroClienteForm";
			this->Text = L"CadastroClienteForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnCadastrar_Click(System::Object^  sender, System::EventArgs^  e)
	{
		try
		{
			Random rnd;
			ClienteDomainV2 cliente;
			cliente.id = rnd.Next(1, 1000000);
			cliente.Nome = textBox1->Text;
			//Valida o cpf
			if (cliente.verificaCpf(textBox3->Text) == true)
				cliente.CPF = textBox3->Text;
			else
				throw gcnew Exception("Cpf Inválido");
			//////////////////////////////////////////
			if (String::IsNullOrEmpty(textBox4->Text))
				throw gcnew Exception("Campo do rg não pode ser vazio ou\n conter letra");
			cliente.RG = Convert::ToInt32(textBox4->Text);
			cliente.DataNascimento = textBox5->Text;
			cliente.NomeMae = textBox6->Text;
			
			if (existeEndereco == true)
				cliente.endreco.Endereco = textBox2->Text;
			//Cadastro de Profissão em Cliente
			CadastroProfissao cp;
			System::Windows::Forms::DialogResult result = cp.ShowDialog();
			if (result == System::Windows::Forms::DialogResult::OK)
			{
				profissao = cp.retornaProfissao();
			}
			cliente.profissao = gcnew ProfissaoDomainV2();
			cliente.profissao->Salario = profissao->Salario;
			cliente.profissao->Admissao = profissao->Admissao;
			cliente.profissao->nomeFuncao = profissao->nomeFuncao;
			//Validar Cliente
			cliente.Validate();
			//Grava No Arquivo o cliente com suas infromações
			FileStream^ fs = gcnew FileStream("C:\\Users\\Luiz Arndt\\Documents\\Visual Studio 2017\\Projects\\TrabalhoCassandroV5\\TrabalhoCassandroV5\\ClientesTxt.txt", FileMode::OpenOrCreate);
			StreamWriter^ arquivoTxt = gcnew StreamWriter(fs);
			arquivoTxt->WriteLine(cliente.ToStringCliente());
			arquivoTxt->Close();
			MessageBox::Show("Cliente Gravado com sucesso !");
			this->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}
	private: System::Void btnCancelar_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnPesquisarCep_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ Path = "C:\\Users\\Luiz Arndt\\Documents\\Visual Studio 2017\\Projects\\TrabalhoCassandroV5\\TrabalhoCassandroV5\\cep2.txt";
		int cont = 0;
		FileStream^ fs = gcnew FileStream(Path, FileMode::Open);
		StreamReader^ sr = gcnew StreamReader(fs);
		while (sr->Peek()>=0)
		{
			String^ contens = sr->ReadLine();
			if (contens->Contains(textBox2->Text) == true)
			{
				MessageBox::Show(contens);
				existeEndereco = true;
			}
		}
		if (existeEndereco == false)
			throw gcnew Exception("Cep Invalido !");
		sr->Close();
	}
private: System::Void btnProfissao_Click(System::Object^  sender, System::EventArgs^  e) 
{
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
