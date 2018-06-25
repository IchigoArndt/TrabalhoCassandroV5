#pragma once
#include "CadastroClienteForm.h"

namespace TrabalhoCassandroV5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace IO;

	/// <summary>
	/// Sumário para CadastroCliente
	/// </summary>
	public ref class CadastroCliente : public System::Windows::Forms::Form
	{
	public:
		CadastroCliente()
		{
			InitializeComponent();
			PopularListagem();
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~CadastroCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  lbTxt;
	protected:
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  tsbCadastrar;
	private: System::Windows::Forms::ToolStripButton^  tspDeletar;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CadastroCliente::typeid));
			this->lbTxt = (gcnew System::Windows::Forms::ListBox());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->tsbCadastrar = (gcnew System::Windows::Forms::ToolStripButton());
			this->tspDeletar = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbTxt
			// 
			this->lbTxt->FormattingEnabled = true;
			this->lbTxt->Location = System::Drawing::Point(-2, 22);
			this->lbTxt->Name = L"lbTxt";
			this->lbTxt->Size = System::Drawing::Size(372, 342);
			this->lbTxt->TabIndex = 0;
			this->lbTxt->SelectedIndexChanged += gcnew System::EventHandler(this, &CadastroCliente::lbTxt_SelectedIndexChanged);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->tsbCadastrar, this->tspDeletar });
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(371, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// tsbCadastrar
			// 
			this->tsbCadastrar->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->tsbCadastrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbCadastrar.Image")));
			this->tsbCadastrar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbCadastrar->Name = L"tsbCadastrar";
			this->tsbCadastrar->Size = System::Drawing::Size(61, 22);
			this->tsbCadastrar->Text = L"Cadastrar";
			this->tsbCadastrar->Click += gcnew System::EventHandler(this, &CadastroCliente::tsbCadastrar_Click);
			// 
			// tspDeletar
			// 
			this->tspDeletar->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->tspDeletar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tspDeletar.Image")));
			this->tspDeletar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tspDeletar->Name = L"tspDeletar";
			this->tspDeletar->Size = System::Drawing::Size(48, 22);
			this->tspDeletar->Text = L"Deletar";
			this->tspDeletar->Click += gcnew System::EventHandler(this, &CadastroCliente::tspDeletar_Click);
			// 
			// CadastroCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(371, 364);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->lbTxt);
			this->Name = L"CadastroCliente";
			this->Text = L"CadastroCliente";
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tsbCadastrar_Click(System::Object^  sender, System::EventArgs^  e) {
		CadastroClienteForm fcc;
		fcc.ShowDialog();
		PopularListagem();
	}
	private: void PopularListagem() 
	{
		lbTxt->Items->Clear();
		String^ caminho = Directory::GetCurrentDirectory();
		String^ Path = caminho+"\\ClientesTxt.txt";
		if (File::Exists(Path) == false)
			MessageBox::Show("A lista será carregada vazia\n pois o arquivo não Existe !");
		else
		{
			int cont = 0;
			FileStream^ fs = gcnew FileStream(Path, FileMode::Open);
			StreamReader^ sr = gcnew StreamReader(fs);
			while (sr->Peek()>=0)
			{
				lbTxt->Items->Add(sr->ReadLine());
			}
			sr->Close();
		}
	}
private: System::Void tspDeletar_Click(System::Object^  sender, System::EventArgs^  e) 
{
	String^ caminho = Directory::GetCurrentDirectory();
	String^ Path = caminho+"\\ClientesTxt.txt";
	if (MessageBox::Show("você realmente deseja excluir", "deletar", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
	{
		File::Delete(Path);
		MessageBox::Show("Arquivo Deletado !");
		lbTxt->Items->Clear();
		PopularListagem();
	}
}
private: System::Void lbTxt_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
