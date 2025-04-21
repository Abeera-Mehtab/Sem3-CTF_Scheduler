#pragma once
#include "CreditsForm.h"
#include "ViewTeams.h"
#include "ViewSchedule.h"
#include "MatchSimulator.h"
namespace FinalProj {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for WelcomeForm
	/// </summary>
	public ref class WelcomeForm : public System::Windows::Forms::Form
	{
	public:
		WelcomeForm(void)
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
		~WelcomeForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ Welcome_LB;
	private: System::Windows::Forms::Button^ Teams_BT;
	private: System::Windows::Forms::Button^ Schedule_BT;
	private: System::Windows::Forms::Button^ Simulate_BT;
	private: System::Windows::Forms::Button^ Credits_BT;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WelcomeForm::typeid));
			this->Welcome_LB = (gcnew System::Windows::Forms::Label());
			this->Teams_BT = (gcnew System::Windows::Forms::Button());
			this->Schedule_BT = (gcnew System::Windows::Forms::Button());
			this->Simulate_BT = (gcnew System::Windows::Forms::Button());
			this->Credits_BT = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Welcome_LB
			// 
			this->Welcome_LB->AutoSize = true;
			this->Welcome_LB->BackColor = System::Drawing::Color::Transparent;
			this->Welcome_LB->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Welcome_LB->Location = System::Drawing::Point(263, 172);
			this->Welcome_LB->Name = L"Welcome_LB";
			this->Welcome_LB->Size = System::Drawing::Size(622, 35);
			this->Welcome_LB->TabIndex = 1;
			this->Welcome_LB->Text = L"CTF Showdown Hackathon Schedular";
			this->Welcome_LB->Click += gcnew System::EventHandler(this, &WelcomeForm::Welcome_LB_Click);
			// 
			// Teams_BT
			// 
			this->Teams_BT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Teams_BT->Location = System::Drawing::Point(219, 333);
			this->Teams_BT->Name = L"Teams_BT";
			this->Teams_BT->Size = System::Drawing::Size(213, 59);
			this->Teams_BT->TabIndex = 2;
			this->Teams_BT->Text = L"View Teams";
			this->Teams_BT->UseVisualStyleBackColor = true;
			this->Teams_BT->Click += gcnew System::EventHandler(this, &WelcomeForm::Teams_BT_Click);
			// 
			// Schedule_BT
			// 
			this->Schedule_BT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Schedule_BT->Location = System::Drawing::Point(461, 333);
			this->Schedule_BT->Name = L"Schedule_BT";
			this->Schedule_BT->Size = System::Drawing::Size(213, 59);
			this->Schedule_BT->TabIndex = 3;
			this->Schedule_BT->Text = L"View Schedule";
			this->Schedule_BT->UseVisualStyleBackColor = true;
			this->Schedule_BT->Click += gcnew System::EventHandler(this, &WelcomeForm::Schedule_BT_Click);
			// 
			// Simulate_BT
			// 
			this->Simulate_BT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Simulate_BT->Location = System::Drawing::Point(697, 333);
			this->Simulate_BT->Name = L"Simulate_BT";
			this->Simulate_BT->Size = System::Drawing::Size(220, 59);
			this->Simulate_BT->TabIndex = 4;
			this->Simulate_BT->Text = L"Simulate";
			this->Simulate_BT->UseVisualStyleBackColor = true;
			this->Simulate_BT->Click += gcnew System::EventHandler(this, &WelcomeForm::Simulate_BT_Click);
			// 
			// Credits_BT
			// 
			this->Credits_BT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Credits_BT->Location = System::Drawing::Point(976, 576);
			this->Credits_BT->Name = L"Credits_BT";
			this->Credits_BT->Size = System::Drawing::Size(159, 46);
			this->Credits_BT->TabIndex = 5;
			this->Credits_BT->Text = L"Credits";
			this->Credits_BT->UseVisualStyleBackColor = true;
			this->Credits_BT->Click += gcnew System::EventHandler(this, &WelcomeForm::Credits_BT_Click);
			// 
			// WelcomeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1174, 649);
			this->Controls->Add(this->Credits_BT);
			this->Controls->Add(this->Simulate_BT);
			this->Controls->Add(this->Schedule_BT);
			this->Controls->Add(this->Teams_BT);
			this->Controls->Add(this->Welcome_LB);
			this->Name = L"WelcomeForm";
			this->Text = L"WelcomeForm";
			this->Load += gcnew System::EventHandler(this, &WelcomeForm::WelcomeForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void WelcomeForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Credits_BT_Click(System::Object^ sender, System::EventArgs^ e) {
		CreditsForm^ Credits = gcnew CreditsForm;
		Credits->ShowDialog();
	}
	private: System::Void Teams_BT_Click(System::Object^ sender, System::EventArgs^ e) {
		ViewTeams^ Teams = gcnew ViewTeams;
		Teams->ShowDialog();
	}
	private: System::Void Schedule_BT_Click(System::Object^ sender, System::EventArgs^ e) {
		ViewSchedule^ Schedule = gcnew ViewSchedule;
		Schedule->Show();
	}
	private: System::Void Simulate_BT_Click(System::Object^ sender, System::EventArgs^ e) {
		MatchSimulator^ Simulator = gcnew MatchSimulator;
		Simulator->Show();
	}
	private: System::Void Welcome_LB_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}