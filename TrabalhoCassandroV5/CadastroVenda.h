#pragma once
#include "CadastroVendaForm.h"
namespace TrabalhoCassandroV5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para CadastroVenda
	/// </summary>
	public ref class CadastroVenda : public System::Windows::Forms::Form
	{
	public:
		CadastroVenda(void)
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
		~CadastroVenda()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  btnCadastrar;
	private: System::Windows::Forms::ToolStripButton^  btnAtualizar;
	private: System::Windows::Forms::ListBox^  listBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CadastroVenda::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->btnCadastrar = (gcnew System::Windows::Forms::ToolStripButton());
			this->btnAtualizar = (gcnew System::Windows::Forms::ToolStripButton());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->btnCadastrar, this->btnAtualizar });
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(415, 25);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// btnCadastrar
			// 
			this->btnCadastrar->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->btnCadastrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCadastrar.Image")));
			this->btnCadastrar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnCadastrar->Name = L"btnCadastrar";
			this->btnCadastrar->Size = System::Drawing::Size(61, 22);
			this->btnCadastrar->Text = L"Cadastrar";
			this->btnCadastrar->Click += gcnew System::EventHandler(this, &CadastroVenda::btnCadastrar_Click);
			// 
			// btnAtualizar
			// 
			this->btnAtualizar->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->btnAtualizar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAtualizar.Image")));
			this->btnAtualizar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnAtualizar->Name = L"btnAtualizar";
			this->btnAtualizar->Size = System::Drawing::Size(57, 22);
			this->btnAtualizar->Text = L"Atualizar";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(0, 30);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(415, 264);
			this->listBox1->TabIndex = 1;
			// 
			// CadastroVenda
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(415, 293);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->toolStrip1);
			this->Name = L"CadastroVenda";
			this->Text = L"CadastroVenda";
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCadastrar_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		CadastroVendaForm cvf;

		cvf.ShowDialog();
	}
};
}
