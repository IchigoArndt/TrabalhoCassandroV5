#include "CadastroCliente.h"
#include "CadastroVenda.h"

namespace TrabalhoCassandroV5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para FormPrincipal
	/// </summary>
	public ref class FormPrincipal : public System::Windows::Forms::Form
	{
	public:
		FormPrincipal(void)
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
		~FormPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;

	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormPrincipal::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem1 });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(242, 24);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem4
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(69, 20);
			this->toolStripMenuItem1->Text = L"Cadastrar";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->toolStripMenuItem2->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem2->Text = L"Cliente";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &FormPrincipal::btnCadastrar_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->toolStripMenuItem4->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem4->Text = L"Venda";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &FormPrincipal::toolStripMenuItem4_Click);
			// 
			// FormPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(242, 402);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"FormPrincipal";
			this->Text = L"FormPrincipal";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCadastrar_Click(System::Object^  sender, System::EventArgs^  e) {
		CadastroCliente cc;
		cc.ShowDialog();

	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Se fudeu otário !\n" + "Não tem como Apagar Dados Babaca");
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void toolStripMenuItem4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	CadastroVenda cv;
	cv.ShowDialog();
}
};
}
