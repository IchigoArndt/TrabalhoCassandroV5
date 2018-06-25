#pragma once
#include "VendaDomainV2.h"
namespace TrabalhoCassandroV5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Sumário para CadastroVendaForm
	/// </summary>
	public ref class CadastroVendaForm : public System::Windows::Forms::Form
	{
	public:
		CadastroVendaForm(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~CadastroVendaForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tbCliente;
	protected:

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  lbNome;
	private: System::Windows::Forms::TextBox^  tbDescricao;
	private: System::Windows::Forms::TextBox^  tbValor;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tbAno;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  tbPrazo;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  tbBem;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  btnCadastrar;

	private: System::Windows::Forms::Button^  btnCancelar;

	public: double Salario;
	public:	String^ Nome;
	public:	String^ Cpf;

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
			this->tbCliente = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lbNome = (gcnew System::Windows::Forms::Label());
			this->tbDescricao = (gcnew System::Windows::Forms::TextBox());
			this->tbValor = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbAno = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPrazo = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbBem = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnCadastrar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cliente";
			// 
			// tbCliente
			// 
			this->tbCliente->Location = System::Drawing::Point(70, 13);
			this->tbCliente->Name = L"tbCliente";
			this->tbCliente->Size = System::Drawing::Size(146, 20);
			this->tbCliente->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Pesquisar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CadastroVendaForm::button1_Click);
			// 
			// lbNome
			// 
			this->lbNome->AccessibleDescription = L"";
			this->lbNome->AutoSize = true;
			this->lbNome->Location = System::Drawing::Point(3, 72);
			this->lbNome->Name = L"lbNome";
			this->lbNome->Size = System::Drawing::Size(55, 13);
			this->lbNome->TabIndex = 3;
			this->lbNome->Text = L"Descrição";
			// 
			// tbDescricao
			// 
			this->tbDescricao->Location = System::Drawing::Point(70, 69);
			this->tbDescricao->Name = L"tbDescricao";
			this->tbDescricao->Size = System::Drawing::Size(146, 20);
			this->tbDescricao->TabIndex = 4;
			// 
			// tbValor
			// 
			this->tbValor->Location = System::Drawing::Point(70, 111);
			this->tbValor->Name = L"tbValor";
			this->tbValor->Size = System::Drawing::Size(146, 20);
			this->tbValor->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AccessibleDescription = L"";
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Valor";
			// 
			// tbAno
			// 
			this->tbAno->Location = System::Drawing::Point(70, 160);
			this->tbAno->Name = L"tbAno";
			this->tbAno->Size = System::Drawing::Size(146, 20);
			this->tbAno->TabIndex = 8;
			this->tbAno->TextChanged += gcnew System::EventHandler(this, &CadastroVendaForm::textBox4_TextChanged);
			// 
			// label3
			// 
			this->label3->AccessibleDescription = L"";
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Ano/Modelo";
			this->label3->Click += gcnew System::EventHandler(this, &CadastroVendaForm::label3_Click);
			// 
			// tbPrazo
			// 
			this->tbPrazo->Location = System::Drawing::Point(70, 205);
			this->tbPrazo->Name = L"tbPrazo";
			this->tbPrazo->Size = System::Drawing::Size(146, 20);
			this->tbPrazo->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AccessibleDescription = L"";
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Prazo";
			// 
			// tbBem
			// 
			this->tbBem->Location = System::Drawing::Point(70, 249);
			this->tbBem->Name = L"tbBem";
			this->tbBem->Size = System::Drawing::Size(146, 20);
			this->tbBem->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AccessibleDescription = L"";
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 252);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Bem";
			// 
			// btnCadastrar
			// 
			this->btnCadastrar->Location = System::Drawing::Point(6, 283);
			this->btnCadastrar->Name = L"btnCadastrar";
			this->btnCadastrar->Size = System::Drawing::Size(75, 23);
			this->btnCadastrar->TabIndex = 13;
			this->btnCadastrar->Text = L"Cadastrar";
			this->btnCadastrar->UseVisualStyleBackColor = true;
			this->btnCadastrar->Click += gcnew System::EventHandler(this, &CadastroVendaForm::btnCadastrar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(141, 283);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(75, 23);
			this->btnCancelar->TabIndex = 14;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			// 
			// CadastroVendaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(219, 318);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->btnCadastrar);
			this->Controls->Add(this->tbBem);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbPrazo);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbAno);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbValor);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbDescricao);
			this->Controls->Add(this->lbNome);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbCliente);
			this->Controls->Add(this->label1);
			this->Name = L"CadastroVendaForm";
			this->Text = L"jd";
			this->Load += gcnew System::EventHandler(this, &CadastroVendaForm::CadastroVendaForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void CadastroVendaForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	String^ path = Directory::GetCurrentDirectory();
	FileStream^ fs = gcnew FileStream(path+"\\ClientesTxt.txt", FileMode::Open);
	StreamReader^ sr = gcnew StreamReader(fs);
	while (sr->Peek()>=0)
	{
		String^ pesquisa = sr->ReadLine();
		if (pesquisa->Contains(tbCliente->Text))
		{
			Nome = pesquisa;
			for (int i = 0; i < 3; i++) 
			{
				String^ pesquisa2 = sr->ReadLine();
				if (i == 1)
					Cpf = pesquisa2;
				if (pesquisa2->Contains("Salário :"))
				{
					String^ pesquisa2 = sr->ReadLine();
					Salario = Convert::ToDouble(pesquisa2);
					MessageBox::Show("Cliente Encontrado !\n"+"Nome :"+Nome+"\nCpf :"+Cpf+"\nSalario :"+Salario);
				}
			 }
		}
	}
}
private: System::Void btnCadastrar_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (String::IsNullOrEmpty(Nome) || String::IsNullOrEmpty(Cpf) || String::IsNullOrEmpty(Salario.ToString()))
	{
		MessageBox::Show("Cliente não pode ficar vazio !");
		this->Close();
	}
	else
	{
		VendaDomainV2^ venda = gcnew VendaDomainV2();
		venda->Descricao = tbDescricao->Text;
		venda->valor = Convert::ToDouble(tbValor->Text);
		venda->ano_modelo = Convert::ToInt32(tbAno->Text);
		venda->prazo = Convert::ToInt32(tbPrazo->Text);
		venda->Bem = tbBem->Text;
		try
		{
			venda->validate();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
		if (venda->CalcularResultado(Salario) == true)
		{
			double precoParcela = venda->valor / venda->prazo;
			MessageBox::Show("Parabéns você adquiriu um " + venda->Bem + "\nValor :" + venda->valor + "\nPrazo :" + venda->prazo + "\nPreco por parcela :" + precoParcela.ToString());
			String^ path = Directory::GetCurrentDirectory();
			FileStream^ fs = gcnew FileStream(path+"\\Vendas.txt", FileMode::OpenOrCreate);
			StreamWriter^ VendaEscrita = gcnew StreamWriter(fs);
			VendaEscrita->WriteLine("Descrição :" + venda->Descricao);
			VendaEscrita->WriteLine("Valor :" + venda->valor);
			VendaEscrita->WriteLine("Ano/Modelo :" + venda->ano_modelo);
			VendaEscrita->WriteLine("Prazo :" + venda->prazo);
			VendaEscrita->WriteLine("Bem :" + venda->Bem);
			VendaEscrita->WriteLine("Cliente");
			VendaEscrita->WriteLine("Nome :"+Nome);
			VendaEscrita->WriteLine("Cpf  :" +Cpf);
			VendaEscrita->Close();
			MessageBox::Show("Venda Gravada com Sucesso !");
			this->Close();
		}
		else
		{
			MessageBox::Show("Infelizmente não foi possivel efetuar a venda deste Veiculo :" + venda->Descricao + "\nDevido a sua Renda '_' !");
			this->Close();
		}
	}
}
};
}