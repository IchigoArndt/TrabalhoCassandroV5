#pragma once

namespace TrabalhoCassandroV5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para TelaCasado
	/// </summary>
	public ref class TelaCasado : public System::Windows::Forms::Form
	{
	public:
		TelaCasado(void)
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
		~TelaCasado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  lbSalario;
	public:  double salarioConjuge;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lbSalario = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button1->Location = System::Drawing::Point(94, 44);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Informar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TelaCasado::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(94, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(168, 20);
			this->textBox1->TabIndex = 4;
			// 
			// lbSalario
			// 
			this->lbSalario->AutoSize = true;
			this->lbSalario->Location = System::Drawing::Point(3, 12);
			this->lbSalario->Name = L"lbSalario";
			this->lbSalario->Size = System::Drawing::Size(84, 13);
			this->lbSalario->TabIndex = 3;
			this->lbSalario->Text = L"Salario Conjuge:";
			// 
			// TelaCasado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 67);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lbSalario);
			this->Name = L"TelaCasado";
			this->Text = L"TelaCasado";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		salarioConjuge = Convert::ToDouble(textBox1->Text);
	}
	};
}
