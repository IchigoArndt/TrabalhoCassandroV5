#pragma once
#include "ProfissaoDomainV2.h"

namespace TrabalhoCassandroV5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para CadastroProfissao
	/// </summary>
	public ref class CadastroProfissao : public System::Windows::Forms::Form
	{
	public:
		CadastroProfissao(void)
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
		~CadastroProfissao()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tbSalario;
	protected:

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tbAdmissao;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btnCadastrar;

	public: double Salario;
	public: System::String^ Funcao;
	public: System::String^ Admissao;


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
			this->tbSalario = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbAdmissao = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnCadastrar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Salário";
			// 
			// tbSalario
			// 
			this->tbSalario->Location = System::Drawing::Point(68, 13);
			this->tbSalario->Name = L"tbSalario";
			this->tbSalario->Size = System::Drawing::Size(100, 20);
			this->tbSalario->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Admissão";
			// 
			// tbAdmissao
			// 
			this->tbAdmissao->Location = System::Drawing::Point(68, 57);
			this->tbAdmissao->Name = L"tbAdmissao";
			this->tbAdmissao->Size = System::Drawing::Size(100, 20);
			this->tbAdmissao->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(68, 108);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Função";
			// 
			// btnCadastrar
			// 
			this->btnCadastrar->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->btnCadastrar->Location = System::Drawing::Point(16, 145);
			this->btnCadastrar->Name = L"btnCadastrar";
			this->btnCadastrar->Size = System::Drawing::Size(147, 23);
			this->btnCadastrar->TabIndex = 6;
			this->btnCadastrar->Text = L"Cadastrar";
			this->btnCadastrar->UseVisualStyleBackColor = true;
			this->btnCadastrar->Click += gcnew System::EventHandler(this, &CadastroProfissao::btnCadastrar_Click);
			// 
			// CadastroProfissao
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(175, 182);
			this->Controls->Add(this->btnCadastrar);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbAdmissao);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbSalario);
			this->Controls->Add(this->label1);
			this->Name = L"CadastroProfissao";
			this->Text = L"CadastroProfissao";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		public: ProfissaoDomainV2^ retornaProfissao() 
		{
			ProfissaoDomainV2^ profissao = gcnew ProfissaoDomainV2();
			profissao->Salario = Salario;
			profissao->nomeFuncao = Funcao;
			profissao->Admissao = Admissao;
			return profissao;
		}
#pragma endregion
	private: System::Void btnCadastrar_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ProfissaoDomainV2^ profissao = gcnew ProfissaoDomainV2();
		Salario = Convert::ToDouble(tbSalario->Text);
		Funcao = textBox3->Text;
		Admissao = tbAdmissao->Text;
		profissao = retornaProfissao();
		this->Close();
	}
};
}
