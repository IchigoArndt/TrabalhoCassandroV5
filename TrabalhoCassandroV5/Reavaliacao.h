#pragma once

#include "CasaAlugada.h"
#include "TelaCasado.h"
#include "CadastroVendaForm.h"


namespace TrabalhoCassandroV5 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Sumário para Reavaliacao
	/// </summary>
	public ref class Reavaliacao : public System::Windows::Forms::Form
	{
	public:
		Reavaliacao(void)
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
		~Reavaliacao()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Reavaliar;
	protected:
	private: System::Windows::Forms::CheckBox^  cbAlugada;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::CheckBox^  cbCasado;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tbCliente;
	private: System::Windows::Forms::Label^  label1;

	public:  String ^ nome;
	public:  double   salario;
	public:  double   valorCasa;
	public:  double   salarioConjuge;
	public:  double   salarioAlterado;
	private: System::Windows::Forms::DateTimePicker^  dtpAdmissao;
	public:

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
			this->Reavaliar = (gcnew System::Windows::Forms::Button());
			this->cbAlugada = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cbCasado = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbCliente = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dtpAdmissao = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// Reavaliar
			// 
			this->Reavaliar->Location = System::Drawing::Point(73, 131);
			this->Reavaliar->Name = L"Reavaliar";
			this->Reavaliar->Size = System::Drawing::Size(158, 23);
			this->Reavaliar->TabIndex = 17;
			this->Reavaliar->Text = L"Reavaliar";
			this->Reavaliar->UseVisualStyleBackColor = true;
			this->Reavaliar->Click += gcnew System::EventHandler(this, &Reavaliacao::Reavaliar_Click);
			// 
			// cbAlugada
			// 
			this->cbAlugada->AutoSize = true;
			this->cbAlugada->Location = System::Drawing::Point(89, 100);
			this->cbAlugada->Name = L"cbAlugada";
			this->cbAlugada->Size = System::Drawing::Size(15, 14);
			this->cbAlugada->TabIndex = 16;
			this->cbAlugada->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(4, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Casa Alugada :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Adimissao :";
			// 
			// cbCasado
			// 
			this->cbCasado->AutoSize = true;
			this->cbCasado->Location = System::Drawing::Point(89, 43);
			this->cbCasado->Name = L"cbCasado";
			this->cbCasado->Size = System::Drawing::Size(15, 14);
			this->cbCasado->TabIndex = 12;
			this->cbCasado->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Casado :";
			// 
			// tbCliente
			// 
			this->tbCliente->Location = System::Drawing::Point(73, 12);
			this->tbCliente->Name = L"tbCliente";
			this->tbCliente->Size = System::Drawing::Size(208, 20);
			this->tbCliente->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Cliente :";
			// 
			// dtpAdmissao
			// 
			this->dtpAdmissao->Location = System::Drawing::Point(73, 74);
			this->dtpAdmissao->Name = L"dtpAdmissao";
			this->dtpAdmissao->Size = System::Drawing::Size(200, 20);
			this->dtpAdmissao->TabIndex = 18;
			// 
			// Reavaliacao
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 157);
			this->Controls->Add(this->dtpAdmissao);
			this->Controls->Add(this->Reavaliar);
			this->Controls->Add(this->cbAlugada);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cbCasado);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbCliente);
			this->Controls->Add(this->label1);
			this->Name = L"Reavaliacao";
			this->Text = L"Reavaliacao";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Reavaliar_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ path = Directory::GetCurrentDirectory();
		pesquisarAluno(tbCliente->Text);
		bool casaAlugada = false;
		bool salarioConjuge = false;
		double esposaSalario;
		if (cbCasado->Checked == true)
		{
			TelaCasado tc;
			System::Windows::Forms::DialogResult result = tc.ShowDialog();
			if (result == System::Windows::Forms::DialogResult::OK)
			{
				esposaSalario = tc.salarioConjuge;
				salarioConjuge = true;
				
			}
		}
		///////////////////////////////////////////////////
		DateTime^ admissao = Convert::ToDateTime(dtpAdmissao->Text);
		DateTime^ time = gcnew DateTime();///////////////
		TimeSpan final = Convert::ToDateTime(time->Now).Subtract(Convert::ToDateTime(dtpAdmissao->Text));
		int totalDias = final.Days;
		totalDias = totalDias / 365;
		///////////////////////////////////////////////
		if (cbAlugada->Checked == true)
		{
			CasaAlugada ca;
			System::Windows::Forms::DialogResult result = ca.ShowDialog();
			if (result == System::Windows::Forms::DialogResult::OK)
			{
				valorCasa = ca.Salario;
				casaAlugada = true;
			}
		}
		if (salarioConjuge == true)
		{
			salarioAlterado = salario + esposaSalario;
		}
		if (casaAlugada == true)
		{
			salarioAlterado -= valorCasa;
		}
		alterarAluno();
		File::Replace("ClientesCopia.txt", "ClientesTxt.txt", "BackpTexto.txt");
		File::Delete(path + "\\BackpTexto.txt");
		CadastroVendaForm^ cvf = gcnew CadastroVendaForm();
		cvf->ShowDialog();
	}
	private: void pesquisarAluno(String^ nomeCliente)
	{
		String^ path = Directory::GetCurrentDirectory();

		FileStream^ fs = gcnew FileStream(path+"\\ClientesTxt.txt", FileMode::Open);
		StreamReader^ sr = gcnew StreamReader(fs);

		while (sr->Peek() >= 0)
		{
			String^ pesquisa = sr->ReadLine();
			if (pesquisa->Contains(nomeCliente))
			{
				nome = pesquisa;
				for (int i = 0; i < 3; i++)
				{
					String^ pesquisa2 = sr->ReadLine();
					if (pesquisa2->Contains("Salário :"))
					{
						String^ pesquisa2 = sr->ReadLine();
						salario = Convert::ToDouble(pesquisa2);
						MessageBox::Show("Cliente Encontrado !\n" + "Nome :" + nome + "\nSalario :" + salario);
					}
				}
			}
		}
		sr->Close();
		fs->Close();
	}
	private: void alterarAluno()
	{
		String^ path = Directory::GetCurrentDirectory();
		FileStream^ fs = gcnew FileStream(path+"\\ClientesTxt.txt", FileMode::Open);
		StreamReader^ sr = gcnew StreamReader(fs);
		FileStream^ fsw = gcnew FileStream(path+"\\ClientesCopia.txt", FileMode::Create);
		StreamWriter^ sw = gcnew StreamWriter(fsw);
		while (sr->Peek() >= 0)
		{
			String^ pesquisa = sr->ReadLine();
			if (!pesquisa->Contains(tbCliente->Text))
			{
				sw->WriteLine(pesquisa);
			}
			else
			{
				nome = pesquisa;
				sw->WriteLine(nome);
				for (int i = 0; i < 3; i++)
				{
					String^ pesquisa2 = sr->ReadLine();
					if (i == 0)
					{
						sw->WriteLine(pesquisa2);
					}
					if (i == 1)
					{
						sw->WriteLine(pesquisa2);
					}
					if (pesquisa2->Contains("Salário :"))
					{
						sw->WriteLine("Salário :");
						sw->WriteLine(salarioAlterado);
						break;
					}
				}
				break;
			}

		}
		sw->Close();
		fs->Close();
	}
	};
}