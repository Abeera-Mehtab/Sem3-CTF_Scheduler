#pragma once
#include "WelcomeForm.h"
namespace FinalProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreditsForm
	/// </summary>
	public ref class CreditsForm : public System::Windows::Forms::Form
	{
	public:
		CreditsForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreditsForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ Back_BT;
	private: System::Windows::Forms::Label^ LabelCredits;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreditsForm::typeid));
			this->Back_BT = (gcnew System::Windows::Forms::Button());
			this->LabelCredits = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Back_BT
			// 
			this->Back_BT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Back_BT->Location = System::Drawing::Point(12, 12);
			this->Back_BT->Name = L"Back_BT";
			this->Back_BT->Size = System::Drawing::Size(36, 38);
			this->Back_BT->TabIndex = 4;
			this->Back_BT->Text = L"<";
			this->Back_BT->UseVisualStyleBackColor = true;
			this->Back_BT->Click += gcnew System::EventHandler(this, &CreditsForm::Back_BT_Click);
			// 
			// LabelCredits
			// 
			this->LabelCredits->AutoSize = true;
			this->LabelCredits->BackColor = System::Drawing::Color::Transparent;
			this->LabelCredits->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LabelCredits->Location = System::Drawing::Point(537, 12);
			this->LabelCredits->Name = L"LabelCredits";
			this->LabelCredits->Size = System::Drawing::Size(174, 44);
			this->LabelCredits->TabIndex = 5;
			this->LabelCredits->Text = L"Credits";
			this->LabelCredits->Click += gcnew System::EventHandler(this, &CreditsForm::label1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(111, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(484, 35);
			this->label1->TabIndex = 6;
			this->label1->Text = L"CTF Showdown Scheduler";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(111, 164);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(747, 35);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Project Data Structures And Algorithms";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(113, 295);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(282, 24);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Members Contribution";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(113, 375);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(199, 192);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Abeera Mehtab\r\nReg_ID: 232087\r\n\r\nMahnoor Ikram\r\nReg_ID 232115\r\n\r\nMuhammad Ayan\r\nR"
				L"eg_ID 233004\r\n";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(378, 375);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(287, 192);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Concept Design and\r\nTournmnet Structures\r\n\r\niGUI Designs and\r\nStructures\r\n\r\nFinal"
				L" GUI and \r\nImplementation\r\n";
			// 
			// CreditsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1528, 637);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LabelCredits);
			this->Controls->Add(this->Back_BT);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"CreditsForm";
			this->Text = L"CreditsForm";
			this->Load += gcnew System::EventHandler(this, &CreditsForm::CreditsForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Back_BT_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();                
	}
	private: System::Void CreditsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
