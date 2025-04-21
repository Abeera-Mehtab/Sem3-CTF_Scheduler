#pragma once
#include "WelcomeForm.h" 
#include "Teams.h" 

namespace FinalProj {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewTeams
	/// </summary>
	public ref class ViewTeams : public System::Windows::Forms::Form
	{
	public:
		ViewTeams(void)
		{
			InitializeComponent();
			teams = new Teams();  // Create a native Teams object using 'new'

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewTeams()
		{
			if (components)
			{
				delete components;
			}
			// Clean up the native Teams object

			if (teams) {
				delete teams;
			}
		}
	Teams* teams;  // Declare a native Teams pointer
	private: System::Windows::Forms::Label^ Q_Team_LB;
	private: System::Windows::Forms::Button^ Refresh_BT;
	private: System::Windows::Forms::Button^ Back_BT;
	private: System::Windows::Forms::TableLayoutPanel^ TableTeams;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewTeams::typeid));
			this->Q_Team_LB = (gcnew System::Windows::Forms::Label());
			this->Refresh_BT = (gcnew System::Windows::Forms::Button());
			this->Back_BT = (gcnew System::Windows::Forms::Button());
			this->TableTeams = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->SuspendLayout();
			// 
			// Q_Team_LB
			// 
			this->Q_Team_LB->AutoSize = true;
			this->Q_Team_LB->BackColor = System::Drawing::Color::Transparent;
			this->Q_Team_LB->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Q_Team_LB->Location = System::Drawing::Point(456, 7);
			this->Q_Team_LB->Name = L"Q_Team_LB";
			this->Q_Team_LB->Size = System::Drawing::Size(269, 35);
			this->Q_Team_LB->TabIndex = 2;
			this->Q_Team_LB->Text = L"Qualified Teams";
			// 
			// Refresh_BT
			// 
			this->Refresh_BT->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Refresh_BT.Image")));
			this->Refresh_BT->Location = System::Drawing::Point(1220, -1);
			this->Refresh_BT->Name = L"Refresh_BT";
			this->Refresh_BT->Size = System::Drawing::Size(58, 43);
			this->Refresh_BT->TabIndex = 5;
			this->Refresh_BT->UseVisualStyleBackColor = true;
			this->Refresh_BT->Click += gcnew System::EventHandler(this, &ViewTeams::Refresh_BT_Click);
			// 
			// Back_BT
			// 
			this->Back_BT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Back_BT->Location = System::Drawing::Point(-3, -1);
			this->Back_BT->Name = L"Back_BT";
			this->Back_BT->Size = System::Drawing::Size(49, 43);
			this->Back_BT->TabIndex = 6;
			this->Back_BT->Text = L"<";
			this->Back_BT->UseVisualStyleBackColor = true;
			this->Back_BT->Click += gcnew System::EventHandler(this, &ViewTeams::Back_BT_Click);
			// 
			// TableTeams
			// 
			this->TableTeams->AutoSize = true;
			this->TableTeams->BackColor = System::Drawing::Color::Transparent;
			this->TableTeams->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->TableTeams->ColumnCount = 3;
			this->TableTeams->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->TableTeams->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 33.33334F)));
			this->TableTeams->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 33.33334F)));
			this->TableTeams->Location = System::Drawing::Point(58, 45);
			this->TableTeams->Name = L"TableTeams";
			this->TableTeams->RowCount = 17;
			this->TableTeams->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 45)));
			this->TableTeams->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableTeams->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableTeams->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableTeams->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableTeams->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableTeams->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableTeams->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableTeams->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableTeams->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableTeams->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableTeams->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableTeams->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableTeams->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableTeams->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableTeams->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableTeams->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->TableTeams->Size = System::Drawing::Size(1134, 625);
			this->TableTeams->TabIndex = 7;
			this->TableTeams->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ViewTeams::TableTeams_Paint_1);
			// 
			// ViewTeams
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1280, 718);
			this->Controls->Add(this->TableTeams);
			this->Controls->Add(this->Back_BT);
			this->Controls->Add(this->Refresh_BT);
			this->Controls->Add(this->Q_Team_LB);
			this->Name = L"ViewTeams";
			this->Text = L"View Teams";
			this->Load += gcnew System::EventHandler(this, &ViewTeams::ViewTeams_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Function to load and populate the table with team data
		private: System::Void LoadAndPopulateTable() {
			// Check the file format and load teams
			if (teams->CheckFileAndFormat("Teams.txt", this)) {
				// Load teams data from file
				if (teams->LoadTeamsFromFile("Teams.txt")) {
					// Populate the table with the team data
					for (int i = 0; i < Teams::TOTAL_TEAMS; i++) {
						// Retrieve the rank, team name, and members
						String^ rank = gcnew String(teams->GetRank(i).c_str());
						String^ name = gcnew String(teams->GetName(i).c_str());
						String^ members = gcnew String(teams->GetMembers(i).c_str());

						// Add the data to the table
						Label^ rankLabel = gcnew Label();
						rankLabel->Text = rank;
						rankLabel->TextAlign = ContentAlignment::MiddleCenter;
						rankLabel->Dock = DockStyle::Fill;
						TableTeams->Controls->Add(rankLabel, 0, i + 1);  // Row 1 to 16, Column 0 (Rank)

						Label^ nameLabel = gcnew Label();
						nameLabel->Text = name;
						nameLabel->TextAlign = ContentAlignment::MiddleCenter;
						nameLabel->Dock = DockStyle::Fill;
						TableTeams->Controls->Add(nameLabel, 1, i + 1);  // Row 1 to 16, Column 1 (Team Name)

						Label^ membersLabel = gcnew Label();
						membersLabel->Text = members;
						membersLabel->TextAlign = ContentAlignment::MiddleCenter;
						membersLabel->Dock = DockStyle::Fill;
						TableTeams->Controls->Add(membersLabel, 2, i + 1);  // Row 1 to 16, Column 2 (Members)
					}
				}
			}
		}
		private: System::Void ViewTeams_Load(System::Object^ sender, System::EventArgs^ e) {
			// Add the header row to the TableLayoutPanel
			Label^ rankLabel = gcnew Label();
			rankLabel->Text = "Rank";
			rankLabel->TextAlign = ContentAlignment::MiddleCenter;
			rankLabel->Font = gcnew System::Drawing::Font(L"Arial", 10, FontStyle::Bold);
			rankLabel->Dock = DockStyle::Fill;  // Makes the label stretch across the cell
			TableTeams->Controls->Add(rankLabel, 0, 0);  // Column 0, Row 0

			Label^ nameLabel = gcnew Label();
			nameLabel->Text = "Team Name";

			nameLabel->TextAlign = ContentAlignment::MiddleCenter;
			nameLabel->Font = gcnew System::Drawing::Font(L"Arial", 10, FontStyle::Bold);
			nameLabel->Dock = DockStyle::Fill;
			TableTeams->Controls->Add(nameLabel, 1, 0);  // Column 1, Row 0

			Label^ membersLabel = gcnew Label();
			membersLabel->Text = "Members";
			membersLabel->TextAlign = ContentAlignment::MiddleCenter;
			membersLabel->Font = gcnew System::Drawing::Font(L"Arial", 10, FontStyle::Bold);
			membersLabel->Dock = DockStyle::Fill;
			TableTeams->Controls->Add(membersLabel, 2, 0);  // Column 2, Row 0
			
			LoadAndPopulateTable();

		}
		
		private: System::Void Refresh_BT_Click(System::Object^ sender, System::EventArgs^ e) {
			// Clear the table first
			TableTeams->Controls->Clear();
			{
				// Add the header row to the TableLayoutPanel
				Label^ rankLabel = gcnew Label();
				rankLabel->Text = "Rank";
				rankLabel->TextAlign = ContentAlignment::MiddleCenter;
				rankLabel->Font = gcnew System::Drawing::Font(L"Arial", 10, FontStyle::Bold);
				rankLabel->Dock = DockStyle::Fill;  // Makes the label stretch across the cell
				TableTeams->Controls->Add(rankLabel, 0, 0);  // Column 0, Row 0

				Label^ nameLabel = gcnew Label();
				nameLabel->Text = "Team Name";
				nameLabel->TextAlign = ContentAlignment::MiddleCenter;
				nameLabel->Font = gcnew System::Drawing::Font(L"Arial", 10, FontStyle::Bold);
				nameLabel->Dock = DockStyle::Fill;
				TableTeams->Controls->Add(nameLabel, 1, 0);  // Column 1, Row 0

				Label^ membersLabel = gcnew Label();
				membersLabel->Text = "Members";
				membersLabel->TextAlign = ContentAlignment::MiddleCenter;
				membersLabel->Font = gcnew System::Drawing::Font(L"Arial", 10, FontStyle::Bold);
				membersLabel->Dock = DockStyle::Fill;
				TableTeams->Controls->Add(membersLabel, 2, 0);  // Column 2, Row 0
			};
			// Reload and repopulate the table
			LoadAndPopulateTable();
		}
		private: System::Void Back_BT_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}		
		private: System::Void TableTeams_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
};
}
