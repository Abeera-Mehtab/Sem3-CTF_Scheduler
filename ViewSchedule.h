#pragma once
#include "Teams.h"
#include "Tournament.h"
#include "WelcomeForm.h"
namespace FinalProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewSchedule
	/// </summary>
	public ref class ViewSchedule : public System::Windows::Forms::Form
	{
	public:
		ViewSchedule(void)
		{
			InitializeComponent();
			teams = new Teams();  // Create a native Teams object using 'new'
			teams->LoadTeamsFromFile("Teams.txt");  // Load team data into the unmanaged Teams object
			tournament = new Tournament();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewSchedule()
		{
			if (components)
			{
				delete components;
			}
		}
		Tournament* tournament;
		Teams* teams;  // Declare a native Teams pointer

	private: System::Windows::Forms::Button^ Back_BT;
	private: System::Windows::Forms::Label^ Mainlb;
	private: System::Windows::Forms::TableLayoutPanel^ TableRound1;

	private: System::Windows::Forms::Label^ R1lb;
	private: System::Windows::Forms::Label^ R2lb;
	private: System::Windows::Forms::TableLayoutPanel^ TableRound2;

	private: System::Windows::Forms::Label^ R3lb;
	private: System::Windows::Forms::TableLayoutPanel^ TableRound3;
	private: System::Windows::Forms::Label^ R4lb;


	private: System::Windows::Forms::TableLayoutPanel^ TableRound4;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewSchedule::typeid));
			this->Back_BT = (gcnew System::Windows::Forms::Button());
			this->Mainlb = (gcnew System::Windows::Forms::Label());
			this->TableRound1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->R1lb = (gcnew System::Windows::Forms::Label());
			this->R2lb = (gcnew System::Windows::Forms::Label());
			this->TableRound2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->R3lb = (gcnew System::Windows::Forms::Label());
			this->TableRound3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->R4lb = (gcnew System::Windows::Forms::Label());
			this->TableRound4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->SuspendLayout();
			// 
			// Back_BT
			// 
			this->Back_BT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Back_BT->Location = System::Drawing::Point(12, 12);
			this->Back_BT->Name = L"Back_BT";
			this->Back_BT->Size = System::Drawing::Size(36, 38);
			this->Back_BT->TabIndex = 1;
			this->Back_BT->Text = L"<";
			this->Back_BT->UseVisualStyleBackColor = true;
			this->Back_BT->Click += gcnew System::EventHandler(this, &ViewSchedule::Back_BT_Click);
			// 
			// Mainlb
			// 
			this->Mainlb->AutoSize = true;
			this->Mainlb->BackColor = System::Drawing::Color::Transparent;
			this->Mainlb->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mainlb->Location = System::Drawing::Point(327, 6);
			this->Mainlb->Name = L"Mainlb";
			this->Mainlb->Size = System::Drawing::Size(560, 44);
			this->Mainlb->TabIndex = 2;
			this->Mainlb->Text = L"Slowdown Match Scedules";
			this->Mainlb->Click += gcnew System::EventHandler(this, &ViewSchedule::Mainlb_Click);
			// 
			// TableRound1
			// 
			this->TableRound1->BackColor = System::Drawing::Color::Transparent;
			this->TableRound1->ColumnCount = 5;
			this->TableRound1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableRound1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableRound1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableRound1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableRound1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableRound1->Location = System::Drawing::Point(54, 92);
			this->TableRound1->Name = L"TableRound1";
			this->TableRound1->RowCount = 9;
			this->TableRound1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 45)));
			this->TableRound1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableRound1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableRound1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableRound1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableRound1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableRound1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableRound1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableRound1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableRound1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->TableRound1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->TableRound1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->TableRound1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->TableRound1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->TableRound1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->TableRound1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->TableRound1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->TableRound1->Size = System::Drawing::Size(1103, 329);
			this->TableRound1->TabIndex = 8;
			this->TableRound1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ViewSchedule::TableRound1_Paint);
			// 
			// R1lb
			// 
			this->R1lb->AutoSize = true;
			this->R1lb->BackColor = System::Drawing::Color::Transparent;
			this->R1lb->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R1lb->Location = System::Drawing::Point(464, 56);
			this->R1lb->Name = L"R1lb";
			this->R1lb->Size = System::Drawing::Size(291, 33);
			this->R1lb->TabIndex = 9;
			this->R1lb->Text = L"Round 1- Playoffs";
			this->R1lb->Click += gcnew System::EventHandler(this, &ViewSchedule::R1lb_Click);
			// 
			// R2lb
			// 
			this->R2lb->AutoSize = true;
			this->R2lb->BackColor = System::Drawing::Color::Transparent;
			this->R2lb->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R2lb->Location = System::Drawing::Point(405, 436);
			this->R2lb->Name = L"R2lb";
			this->R2lb->Size = System::Drawing::Size(410, 33);
			this->R2lb->TabIndex = 10;
			this->R2lb->Text = L"Round 2 - quarter finals";
			this->R2lb->Click += gcnew System::EventHandler(this, &ViewSchedule::R2lb_Click);
			// 
			// TableRound2
			// 
			this->TableRound2->BackColor = System::Drawing::Color::Transparent;
			this->TableRound2->ColumnCount = 5;
			this->TableRound2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableRound2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableRound2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableRound2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableRound2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableRound2->Location = System::Drawing::Point(54, 472);
			this->TableRound2->Name = L"TableRound2";
			this->TableRound2->RowCount = 5;
			this->TableRound2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 45)));
			this->TableRound2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableRound2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableRound2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableRound2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableRound2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->TableRound2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->TableRound2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->TableRound2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->TableRound2->Size = System::Drawing::Size(1103, 187);
			this->TableRound2->TabIndex = 11;
			this->TableRound2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ViewSchedule::TableRound2_Paint);
			// 
			// R3lb
			// 
			this->R3lb->AutoSize = true;
			this->R3lb->BackColor = System::Drawing::Color::Transparent;
			this->R3lb->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R3lb->Location = System::Drawing::Point(436, 676);
			this->R3lb->Name = L"R3lb";
			this->R3lb->Size = System::Drawing::Size(334, 33);
			this->R3lb->TabIndex = 12;
			this->R3lb->Text = L"Round 3 - Semi Fimals";
			this->R3lb->Click += gcnew System::EventHandler(this, &ViewSchedule::R3lb_Click);
			// 
			// TableRound3
			// 
			this->TableRound3->BackColor = System::Drawing::Color::Transparent;
			this->TableRound3->ColumnCount = 5;
			this->TableRound3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableRound3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableRound3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableRound3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableRound3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableRound3->Location = System::Drawing::Point(54, 726);
			this->TableRound3->Name = L"TableRound3";
			this->TableRound3->RowCount = 3;
			this->TableRound3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 45)));
			this->TableRound3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableRound3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableRound3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->TableRound3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->TableRound3->Size = System::Drawing::Size(1103, 114);
			this->TableRound3->TabIndex = 13;
			this->TableRound3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ViewSchedule::TableRound3_Paint);
			// 
			// R4lb
			// 
			this->R4lb->AutoSize = true;
			this->R4lb->BackColor = System::Drawing::Color::Transparent;
			this->R4lb->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R4lb->Location = System::Drawing::Point(464, 864);
			this->R4lb->Name = L"R4lb";
			this->R4lb->Size = System::Drawing::Size(269, 33);
			this->R4lb->TabIndex = 14;
			this->R4lb->Text = L"Round 4 - Finals";
			this->R4lb->Click += gcnew System::EventHandler(this, &ViewSchedule::R4lb_Click);
			// 
			// TableRound4
			// 
			this->TableRound4->BackColor = System::Drawing::Color::Transparent;
			this->TableRound4->ColumnCount = 5;
			this->TableRound4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableRound4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableRound4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableRound4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableRound4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->TableRound4->Location = System::Drawing::Point(54, 900);
			this->TableRound4->Name = L"TableRound4";
			this->TableRound4->RowCount = 2;
			this->TableRound4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 45)));
			this->TableRound4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableRound4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->TableRound4->Size = System::Drawing::Size(1103, 83);
			this->TableRound4->TabIndex = 15;
			this->TableRound4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ViewSchedule::TableRound4_Paint);
			// 
			// ViewSchedule
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1281, 995);
			this->Controls->Add(this->TableRound4);
			this->Controls->Add(this->R4lb);
			this->Controls->Add(this->TableRound3);
			this->Controls->Add(this->R3lb);
			this->Controls->Add(this->TableRound2);
			this->Controls->Add(this->R2lb);
			this->Controls->Add(this->R1lb);
			this->Controls->Add(this->TableRound1);
			this->Controls->Add(this->Mainlb);
			this->Controls->Add(this->Back_BT);
			this->Name = L"ViewSchedule";
			this->Text = L"ViewSchedule";
			this->Load += gcnew System::EventHandler(this, &ViewSchedule::ViewSchedule_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ViewSchedule_Load(System::Object^ sender, System::EventArgs^ e) {
		SetHeadersForRoundTables();      // Set headers for all tables
		SetPlaceholdersForRound1();      // Initialize Round 1 with actual team names
		SetPlaceholdersForRound2();      // Initialize Round 2 with placeholders
		SetPlaceholdersForRound3();      // Initialize Round 3 with placeholders
		SetPlaceholdersForRound4();      // Initialize Round 4 with placeholders
		tournament->updateScheduleTablesFromFile(1, TableRound1);
		tournament->updateScheduleTablesFromFile(2, TableRound2);
		tournament->updateScheduleTablesFromFile(3, TableRound3);
		tournament->updateScheduleTablesFromFile(4, TableRound4);
	}
		   // Set headers dynamically for all rounds
		   void ViewSchedule::SetHeadersForRoundTables() {
			   AddHeadersToTable(TableRound1, gcnew array<String^> { "Group A", "Group B", "Date/Time", "Status", "Winner" });
			   AddHeadersToTable(TableRound2, gcnew array<String^> { "Group A", "Group B", "Date/Time", "Status", "Winner" });
			   AddHeadersToTable(TableRound3, gcnew array<String^> { "Group A", "Group B", "Date/Time", "Status", "Winner" });
			   AddHeadersToTable(TableRound4, gcnew array<String^> { "Group A", "Group B", "Date/Time", "Status", "Winner" });
		   }
		   // Helper function to add headers to a table
		   void ViewSchedule::AddHeadersToTable(TableLayoutPanel^ table, array<String^>^ headers) {
			   for (int col = 0; col < headers->Length; ++col) {
				   Label^ headerLabel = gcnew Label();
				   headerLabel->Text = headers[col];
				   headerLabel->TextAlign = ContentAlignment::MiddleCenter;
				   headerLabel->Dock = DockStyle::Fill;
				   table->Controls->Add(headerLabel, col, 0);  // Add to the first row (header row)
			   }
		   }

		   // Set placeholders for Round 1 with actual team names
		   void ViewSchedule::SetPlaceholdersForRound1() {
			   for (int i = 0; i < 8; ++i) {
				   AddLabelToTable(TableRound1, gcnew String(teams->GetTeamNameAtRank(i + 1).c_str()), 0, i + 1);  // Group A
				   AddLabelToTable(TableRound1, gcnew String(teams->GetTeamNameAtRank(i + 9).c_str()), 1, i + 1);  // Group B
				   AddLabelToTable(TableRound1, "31/12/24 9:00", 2, i + 1);  // Date/Time
				   AddLabelToTable(TableRound1, "Pending", 3, i + 1);  // Status
				   AddLabelToTable(TableRound1, "-", 4, i + 1);  // Winner
			   }
		   }

		   // Set placeholders for Round 2 with winner placeholders
		   void ViewSchedule::SetPlaceholdersForRound2() {
			   for (int i = 0; i < 4; ++i) {
				   AddLabelToTable(TableRound2, "Round1Winner" + (2 * i + 1), 0, i + 1);  // Group A
				   AddLabelToTable(TableRound2, "Round1Winner" + (2 * i + 2), 1, i + 1);  // Group B
				   AddLabelToTable(TableRound2, "31/12/24 11:00", 2, i + 1);  // Date/Time
				   AddLabelToTable(TableRound2, "Pending", 3, i + 1);  // Status
				   AddLabelToTable(TableRound2, "-", 4, i + 1);  // Winner
			   }
		   }

		   // Set placeholders for Round 3 with winner placeholders
		   void ViewSchedule::SetPlaceholdersForRound3() {
			   for (int i = 0; i < 2; ++i) {
				   AddLabelToTable(TableRound3, "Round2Winner" + (2 * i + 1), 0, i + 1);  // Group A
				   AddLabelToTable(TableRound3, "Round2Winner" + (2 * i + 2), 1, i + 1);  // Group B
				   AddLabelToTable(TableRound3, "31/12/24 13:00", 2, i + 1);  // Date/Time
				   AddLabelToTable(TableRound3, "Pending", 3, i + 1);  // Status
				   AddLabelToTable(TableRound3, "-", 4, i + 1);  // Winner
			   }
		   }

		   // Set placeholders for Round 4 (Final Round)
		   void ViewSchedule::SetPlaceholdersForRound4() {
			   AddLabelToTable(TableRound4, "Round3Winner1", 0, 1);  // Group A
			   AddLabelToTable(TableRound4, "Round3Winner2", 1, 1);  // Group B
			   AddLabelToTable(TableRound4, "31/12/24 15:00", 2, 1);  // Date/Time
			   AddLabelToTable(TableRound4, "Pending", 3, 1);  // Status
			   AddLabelToTable(TableRound4, "-", 4, 1);  // Winner
		   }

		   // Helper function to add labels to a table
		   void ViewSchedule::AddLabelToTable(TableLayoutPanel^ table, String^ text, int col, int row) {
			   Label^ label = gcnew Label();
			   label->Text = text;
			   label->TextAlign = ContentAlignment::MiddleCenter;
			   label->Dock = DockStyle::Fill;
			   table->Controls->Add(label, col, row);
		   }
		 
private: System::Void TableRound1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void TableRound2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void TableRound3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void TableRound4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	private: System::Void Back_BT_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void R1lb_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void R2lb_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void R3lb_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void R4lb_Click(System::Object^ sender, System::EventArgs^ e) {
}		
private: System::Void Mainlb_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
