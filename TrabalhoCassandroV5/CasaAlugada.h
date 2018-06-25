#pragma once

namespace TrabalhoCassandroV5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para CasaAlugada
	/// </summary>
	public ref class CasaAlugada : public System::Windows::Forms::Form
	{
	public:
		CasaAlugada(void)
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
		~CasaAlugada()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbSalario;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	
	public:  double Salario;
	
	protected:

	protected:

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
			this->lbSalario = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbSalario
			// 
			this->lbSalario->AutoSize = true;
			this->lbSalario->Location = System::Drawing::Point(13, 28);
			this->lbSalario->Name = L"lbSalario";
			this->lbSalario->Size = System::Drawing::Size(72, 13);
			this->lbSalario->TabIndex = 0;
			this->lbSalario->Text = L"Valor Aluguel:";
			this->lbSalario->Click += gcnew System::EventHandler(this, &CasaAlugada::lbSalario_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(104, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(168, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &CasaAlugada::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button1->Location = System::Drawing::Point(104, 60);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Informar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CasaAlugada::button1_Click);
			// 
			// CasaAlugada
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 95);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lbSalario);
			this->Name = L"CasaAlugada";
			this->Text = L"CasaAlugada";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Salario = Convert::ToDouble(textBox1->Text);
	}
	private: System::Void lbSalario_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
