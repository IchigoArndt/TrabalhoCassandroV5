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
		CadastroVenda()
		{
			InitializeComponent();
			PopularListagem();
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
	private: System::Windows::Forms::ToolStripButton^  btnDeletar;

	private: System::Windows::Forms::ListBox^  lbVendas;

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
			this->btnDeletar = (gcnew System::Windows::Forms::ToolStripButton());
			this->lbVendas = (gcnew System::Windows::Forms::ListBox());
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->btnCadastrar, this->btnDeletar });
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
			// btnDeletar
			// 
			this->btnDeletar->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->btnDeletar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeletar.Image")));
			this->btnDeletar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnDeletar->Name = L"btnDeletar";
			this->btnDeletar->Size = System::Drawing::Size(48, 22);
			this->btnDeletar->Text = L"Deletar";
			this->btnDeletar->Click += gcnew System::EventHandler(this, &CadastroVenda::btnDeletar_Click);
			// 
			// lbVendas
			// 
			this->lbVendas->FormattingEnabled = true;
			this->lbVendas->Location = System::Drawing::Point(0, 30);
			this->lbVendas->Name = L"lbVendas";
			this->lbVendas->Size = System::Drawing::Size(415, 264);
			this->lbVendas->TabIndex = 1;
			// 
			// CadastroVenda
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(415, 293);
			this->Controls->Add(this->lbVendas);
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
	private: void PopularListagem()
	{
		lbVendas->Items->Clear();
		String^ Path = "C:\\Users\\Luiz Arndt\\Documents\\Visual Studio 2017\\Projects\\TrabalhoCassandroV5\\TrabalhoCassandroV5\\Vendas.txt";
		if (File::Exists(Path) == false)
			MessageBox::Show("A lista será carregada vazia\n pois o arquivo não Existe !");
		else
		{
			int cont = 0;
			FileStream^ fs = gcnew FileStream(Path, FileMode::Open);
			StreamReader^ sr = gcnew StreamReader(fs);
			while (sr->Peek() >= 0)
			{
				lbVendas->Items->Add(sr->ReadLine());
			}
			sr->Close();
		}
	}
private: System::Void btnDeletar_Click(System::Object^  sender, System::EventArgs^  e) 
{
	String^ Path = "C:\\Users\\Luiz Arndt\\Documents\\Visual Studio 2017\\Projects\\TrabalhoCassandroV5\\TrabalhoCassandroV5\\Vendas.txt";
	if (MessageBox::Show("você realmente deseja excluir", "deletar", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
	{
		File::Delete(Path);
		MessageBox::Show("Arquivo Deletado !");
		lbVendas->Items->Clear();
		PopularListagem();
	}
}
};
}
