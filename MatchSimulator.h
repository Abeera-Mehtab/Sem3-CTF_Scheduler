#pragma once
#include "WelcomeForm.h"
#include "Teams.h"
#include"Tournament.h"

namespace FinalProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MatchSimulator
	/// </summary>
	public ref class MatchSimulator : public System::Windows::Forms::Form
	{
	public:
		MatchSimulator(void)
		{
			InitializeComponent();
			teams = new Teams();  // Create a native Teams object using 'new'
			teams->LoadTeamsFromFile("Teams.txt");  // Load team data into the unmanaged Teams object
			tournament = new Tournament();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MatchSimulator()
		{
			if (components)
			{
				delete components;
			}
		}
		Tournament* tournament;
		Teams* teams;  // Declare a native Teams pointer
	private:
		// Arrays to hold winners as managed types
	private: System::Windows::Forms::Button^ Back_BT;
	private: System::Windows::Forms::Button^ simulateBT;
	private: System::Windows::Forms::Button^ Revert_Orignal_BT;
	private: System::Windows::Forms::Label^ T_lb;
	private: System::Windows::Forms::Label^ Team1lb;
	private: System::Windows::Forms::Label^ Team9lb;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ Team2lb;
	private: System::Windows::Forms::Label^ Team10lb;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ Team3lb;
	private: System::Windows::Forms::Label^ Team11lb;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ Team4lb;
	private: System::Windows::Forms::Label^ Team12lb;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ Team16lb;
	private: System::Windows::Forms::Label^ Team8lb;
	private: System::Windows::Forms::Label^ Team15lb;
	private: System::Windows::Forms::Label^ Team7lb;
	private: System::Windows::Forms::Label^ Team14lb;
	private: System::Windows::Forms::Label^ Team6lb;
	private: System::Windows::Forms::Label^ Team13lb;
	private: System::Windows::Forms::Label^ Team5lb;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ Round1Winner1lb;
	private: System::Windows::Forms::Label^ Round1Winner2lb;
	private: System::Windows::Forms::Label^ Round1Winner3lb;
	private: System::Windows::Forms::Label^ Round1Winner4lb;
	private: System::Windows::Forms::Label^ Round1Winner5lb;
	private: System::Windows::Forms::Label^ Round1Winner6lb;
	private: System::Windows::Forms::Label^ Round1winner7lb;
	private: System::Windows::Forms::Label^ Round1Winner8lb;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::Label^ Round2Winner1lb;
	private: System::Windows::Forms::Label^ Round2Winner2lb;
	private: System::Windows::Forms::Label^ Round2Winner3lb;
	private: System::Windows::Forms::Label^ Round2Winner4lb;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::Label^ Round3Winner1lb;
	private: System::Windows::Forms::Label^ Round3Winner2lb;
	public: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::Label^ Round4Winner1lb;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MatchSimulator::typeid));
			this->Back_BT = (gcnew System::Windows::Forms::Button());
			this->simulateBT = (gcnew System::Windows::Forms::Button());
			this->Revert_Orignal_BT = (gcnew System::Windows::Forms::Button());
			this->T_lb = (gcnew System::Windows::Forms::Label());
			this->Team1lb = (gcnew System::Windows::Forms::Label());
			this->Team9lb = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Team2lb = (gcnew System::Windows::Forms::Label());
			this->Team10lb = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Team3lb = (gcnew System::Windows::Forms::Label());
			this->Team11lb = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->Team4lb = (gcnew System::Windows::Forms::Label());
			this->Team12lb = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->Team16lb = (gcnew System::Windows::Forms::Label());
			this->Team8lb = (gcnew System::Windows::Forms::Label());
			this->Team15lb = (gcnew System::Windows::Forms::Label());
			this->Team7lb = (gcnew System::Windows::Forms::Label());
			this->Team14lb = (gcnew System::Windows::Forms::Label());
			this->Team6lb = (gcnew System::Windows::Forms::Label());
			this->Team13lb = (gcnew System::Windows::Forms::Label());
			this->Team5lb = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->Round1Winner1lb = (gcnew System::Windows::Forms::Label());
			this->Round1Winner2lb = (gcnew System::Windows::Forms::Label());
			this->Round1Winner3lb = (gcnew System::Windows::Forms::Label());
			this->Round1Winner4lb = (gcnew System::Windows::Forms::Label());
			this->Round1Winner5lb = (gcnew System::Windows::Forms::Label());
			this->Round1Winner6lb = (gcnew System::Windows::Forms::Label());
			this->Round1winner7lb = (gcnew System::Windows::Forms::Label());
			this->Round1Winner8lb = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->Round2Winner1lb = (gcnew System::Windows::Forms::Label());
			this->Round2Winner2lb = (gcnew System::Windows::Forms::Label());
			this->Round2Winner3lb = (gcnew System::Windows::Forms::Label());
			this->Round2Winner4lb = (gcnew System::Windows::Forms::Label());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->Round3Winner1lb = (gcnew System::Windows::Forms::Label());
			this->Round3Winner2lb = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->Round4Winner1lb = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->SuspendLayout();
			// 
			// Back_BT
			// 
			this->Back_BT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Back_BT->Location = System::Drawing::Point(12, 23);
			this->Back_BT->Name = L"Back_BT";
			this->Back_BT->Size = System::Drawing::Size(36, 38);
			this->Back_BT->TabIndex = 3;
			this->Back_BT->Text = L"<";
			this->Back_BT->UseVisualStyleBackColor = true;
			this->Back_BT->UseWaitCursor = true;
			this->Back_BT->Click += gcnew System::EventHandler(this, &MatchSimulator::Back_BT_Click);
			// 
			// simulateBT
			// 
			this->simulateBT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->simulateBT->Location = System::Drawing::Point(702, 599);
			this->simulateBT->Name = L"simulateBT";
			this->simulateBT->Size = System::Drawing::Size(187, 38);
			this->simulateBT->TabIndex = 4;
			this->simulateBT->Text = L"Simulate Match";
			this->simulateBT->UseVisualStyleBackColor = true;
			this->simulateBT->Click += gcnew System::EventHandler(this, &MatchSimulator::simulateBT_Click);
			// 
			// Revert_Orignal_BT
			// 
			this->Revert_Orignal_BT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Revert_Orignal_BT->Location = System::Drawing::Point(906, 599);
			this->Revert_Orignal_BT->Name = L"Revert_Orignal_BT";
			this->Revert_Orignal_BT->Size = System::Drawing::Size(187, 38);
			this->Revert_Orignal_BT->TabIndex = 6;
			this->Revert_Orignal_BT->Text = L"Reveret to Default";
			this->Revert_Orignal_BT->UseVisualStyleBackColor = true;
			this->Revert_Orignal_BT->Click += gcnew System::EventHandler(this, &MatchSimulator::Revert_Orignal_BT_Click);
			// 
			// T_lb
			// 
			this->T_lb->AutoSize = true;
			this->T_lb->BackColor = System::Drawing::Color::Transparent;
			this->T_lb->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->T_lb->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T_lb->Location = System::Drawing::Point(766, 151);
			this->T_lb->Name = L"T_lb";
			this->T_lb->Size = System::Drawing::Size(378, 35);
			this->T_lb->TabIndex = 7;
			this->T_lb->Text = L"Tornument Simulation";
			this->T_lb->UseWaitCursor = true;
			// 
			// Team1lb
			// 
			this->Team1lb->AutoSize = true;
			this->Team1lb->BackColor = System::Drawing::Color::Transparent;
			this->Team1lb->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Team1lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Team1lb->Location = System::Drawing::Point(16, 99);
			this->Team1lb->Name = L"Team1lb";
			this->Team1lb->Size = System::Drawing::Size(91, 24);
			this->Team1lb->TabIndex = 8;
			this->Team1lb->Text = L"Team 1";
			this->Team1lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Team1lb_Click);
			// 
			// Team9lb
			// 
			this->Team9lb->AutoSize = true;
			this->Team9lb->BackColor = System::Drawing::Color::Transparent;
			this->Team9lb->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Team9lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Team9lb->Location = System::Drawing::Point(16, 144);
			this->Team9lb->Name = L"Team9lb";
			this->Team9lb->Size = System::Drawing::Size(91, 24);
			this->Team9lb->TabIndex = 9;
			this->Team9lb->Text = L"Team 9";
			this->Team9lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Team9lb_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(146, 104);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(61, 64);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// Team2lb
			// 
			this->Team2lb->AutoSize = true;
			this->Team2lb->BackColor = System::Drawing::Color::Transparent;
			this->Team2lb->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Team2lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Team2lb->Location = System::Drawing::Point(16, 216);
			this->Team2lb->Name = L"Team2lb";
			this->Team2lb->Size = System::Drawing::Size(91, 24);
			this->Team2lb->TabIndex = 11;
			this->Team2lb->Text = L"Team 2";
			this->Team2lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Team2lb_Click);
			// 
			// Team10lb
			// 
			this->Team10lb->AutoSize = true;
			this->Team10lb->BackColor = System::Drawing::Color::Transparent;
			this->Team10lb->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Team10lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Team10lb->Location = System::Drawing::Point(0, 273);
			this->Team10lb->Name = L"Team10lb";
			this->Team10lb->Size = System::Drawing::Size(107, 24);
			this->Team10lb->TabIndex = 12;
			this->Team10lb->Text = L"Team 10";
			this->Team10lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Team10lb_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(146, 228);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(61, 69);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// Team3lb
			// 
			this->Team3lb->AutoSize = true;
			this->Team3lb->BackColor = System::Drawing::Color::Transparent;
			this->Team3lb->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Team3lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Team3lb->Location = System::Drawing::Point(9, 355);
			this->Team3lb->Name = L"Team3lb";
			this->Team3lb->Size = System::Drawing::Size(91, 24);
			this->Team3lb->TabIndex = 14;
			this->Team3lb->Text = L"Team 3";
			this->Team3lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Team3lb_Click);
			// 
			// Team11lb
			// 
			this->Team11lb->AutoSize = true;
			this->Team11lb->BackColor = System::Drawing::Color::Transparent;
			this->Team11lb->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Team11lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Team11lb->Location = System::Drawing::Point(-7, 413);
			this->Team11lb->Name = L"Team11lb";
			this->Team11lb->Size = System::Drawing::Size(107, 24);
			this->Team11lb->TabIndex = 15;
			this->Team11lb->Text = L"Team 11";
			this->Team11lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Team11lb_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(146, 363);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(61, 74);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			// 
			// Team4lb
			// 
			this->Team4lb->AutoSize = true;
			this->Team4lb->BackColor = System::Drawing::Color::Transparent;
			this->Team4lb->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Team4lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Team4lb->Location = System::Drawing::Point(9, 489);
			this->Team4lb->Name = L"Team4lb";
			this->Team4lb->Size = System::Drawing::Size(91, 24);
			this->Team4lb->TabIndex = 17;
			this->Team4lb->Text = L"Team 4";
			this->Team4lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Team4lb_Click);
			// 
			// Team12lb
			// 
			this->Team12lb->AutoSize = true;
			this->Team12lb->BackColor = System::Drawing::Color::Transparent;
			this->Team12lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Team12lb->Location = System::Drawing::Point(-7, 541);
			this->Team12lb->Name = L"Team12lb";
			this->Team12lb->Size = System::Drawing::Size(107, 24);
			this->Team12lb->TabIndex = 18;
			this->Team12lb->Text = L"Team 12";
			this->Team12lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Team12lb_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(146, 489);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(61, 76);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 19;
			this->pictureBox4->TabStop = false;
			// 
			// Team16lb
			// 
			this->Team16lb->AutoSize = true;
			this->Team16lb->BackColor = System::Drawing::Color::Transparent;
			this->Team16lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Team16lb->Location = System::Drawing::Point(1659, 548);
			this->Team16lb->Name = L"Team16lb";
			this->Team16lb->Size = System::Drawing::Size(107, 24);
			this->Team16lb->TabIndex = 27;
			this->Team16lb->Text = L"Team 16";
			this->Team16lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Team16lb_Click);
			// 
			// Team8lb
			// 
			this->Team8lb->AutoSize = true;
			this->Team8lb->BackColor = System::Drawing::Color::Transparent;
			this->Team8lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Team8lb->Location = System::Drawing::Point(1659, 496);
			this->Team8lb->Name = L"Team8lb";
			this->Team8lb->Size = System::Drawing::Size(91, 24);
			this->Team8lb->TabIndex = 26;
			this->Team8lb->Text = L"Team 8";
			this->Team8lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Team8lb_Click);
			// 
			// Team15lb
			// 
			this->Team15lb->AutoSize = true;
			this->Team15lb->BackColor = System::Drawing::Color::Transparent;
			this->Team15lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Team15lb->Location = System::Drawing::Point(1659, 413);
			this->Team15lb->Name = L"Team15lb";
			this->Team15lb->Size = System::Drawing::Size(107, 24);
			this->Team15lb->TabIndex = 25;
			this->Team15lb->Text = L"Team 15";
			this->Team15lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Team15lb_Click);
			// 
			// Team7lb
			// 
			this->Team7lb->AutoSize = true;
			this->Team7lb->BackColor = System::Drawing::Color::Transparent;
			this->Team7lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Team7lb->Location = System::Drawing::Point(1659, 355);
			this->Team7lb->Name = L"Team7lb";
			this->Team7lb->Size = System::Drawing::Size(91, 24);
			this->Team7lb->TabIndex = 24;
			this->Team7lb->Text = L"Team 7";
			this->Team7lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Team7lb_Click);
			// 
			// Team14lb
			// 
			this->Team14lb->AutoSize = true;
			this->Team14lb->BackColor = System::Drawing::Color::Transparent;
			this->Team14lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Team14lb->Location = System::Drawing::Point(1659, 280);
			this->Team14lb->Name = L"Team14lb";
			this->Team14lb->Size = System::Drawing::Size(107, 24);
			this->Team14lb->TabIndex = 23;
			this->Team14lb->Text = L"Team 14";
			this->Team14lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Team14lb_Click);
			// 
			// Team6lb
			// 
			this->Team6lb->AutoSize = true;
			this->Team6lb->BackColor = System::Drawing::Color::Transparent;
			this->Team6lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Team6lb->Location = System::Drawing::Point(1659, 223);
			this->Team6lb->Name = L"Team6lb";
			this->Team6lb->Size = System::Drawing::Size(91, 24);
			this->Team6lb->TabIndex = 22;
			this->Team6lb->Text = L"Team 6";
			this->Team6lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Team6lb_Click);
			// 
			// Team13lb
			// 
			this->Team13lb->AutoSize = true;
			this->Team13lb->BackColor = System::Drawing::Color::Transparent;
			this->Team13lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Team13lb->Location = System::Drawing::Point(1659, 151);
			this->Team13lb->Name = L"Team13lb";
			this->Team13lb->Size = System::Drawing::Size(107, 24);
			this->Team13lb->TabIndex = 21;
			this->Team13lb->Text = L"Team 13";
			this->Team13lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Team13lb_Click);
			// 
			// Team5lb
			// 
			this->Team5lb->AutoSize = true;
			this->Team5lb->BackColor = System::Drawing::Color::Transparent;
			this->Team5lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Team5lb->Location = System::Drawing::Point(1659, 98);
			this->Team5lb->Name = L"Team5lb";
			this->Team5lb->Size = System::Drawing::Size(91, 24);
			this->Team5lb->TabIndex = 20;
			this->Team5lb->Text = L"Team 5";
			this->Team5lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Team5lb_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(1593, 104);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(44, 71);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 28;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(1593, 224);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(44, 73);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 29;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(1593, 362);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(49, 75);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 30;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(1588, 501);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(49, 72);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 31;
			this->pictureBox8->TabStop = false;
			// 
			// Round1Winner1lb
			// 
			this->Round1Winner1lb->AutoSize = true;
			this->Round1Winner1lb->BackColor = System::Drawing::Color::Transparent;
			this->Round1Winner1lb->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Round1Winner1lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Round1Winner1lb->Location = System::Drawing::Point(224, 115);
			this->Round1Winner1lb->Name = L"Round1Winner1lb";
			this->Round1Winner1lb->Size = System::Drawing::Size(112, 48);
			this->Round1Winner1lb->TabIndex = 32;
			this->Round1Winner1lb->Text = L"Round1\r\nWinner1";
			this->Round1Winner1lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Round1Winner1lb_Click);
			// 
			// Round1Winner2lb
			// 
			this->Round1Winner2lb->AutoSize = true;
			this->Round1Winner2lb->BackColor = System::Drawing::Color::Transparent;
			this->Round1Winner2lb->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Round1Winner2lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Round1Winner2lb->Location = System::Drawing::Point(213, 232);
			this->Round1Winner2lb->Name = L"Round1Winner2lb";
			this->Round1Winner2lb->Size = System::Drawing::Size(112, 48);
			this->Round1Winner2lb->TabIndex = 33;
			this->Round1Winner2lb->Text = L"Round1\r\nWinner2";
			this->Round1Winner2lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Round1Winner2lb_Click);
			// 
			// Round1Winner3lb
			// 
			this->Round1Winner3lb->AutoSize = true;
			this->Round1Winner3lb->BackColor = System::Drawing::Color::Transparent;
			this->Round1Winner3lb->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Round1Winner3lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Round1Winner3lb->Location = System::Drawing::Point(213, 368);
			this->Round1Winner3lb->Name = L"Round1Winner3lb";
			this->Round1Winner3lb->Size = System::Drawing::Size(112, 48);
			this->Round1Winner3lb->TabIndex = 34;
			this->Round1Winner3lb->Text = L"Round1\r\nWinner3";
			this->Round1Winner3lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Round1Winner3lb_Click);
			// 
			// Round1Winner4lb
			// 
			this->Round1Winner4lb->AutoSize = true;
			this->Round1Winner4lb->BackColor = System::Drawing::Color::Transparent;
			this->Round1Winner4lb->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Round1Winner4lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Round1Winner4lb->Location = System::Drawing::Point(213, 506);
			this->Round1Winner4lb->Name = L"Round1Winner4lb";
			this->Round1Winner4lb->Size = System::Drawing::Size(112, 48);
			this->Round1Winner4lb->TabIndex = 35;
			this->Round1Winner4lb->Text = L"Round1\r\nWinner4";
			this->Round1Winner4lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Round1Winner4lb_Click);
			// 
			// Round1Winner5lb
			// 
			this->Round1Winner5lb->AutoSize = true;
			this->Round1Winner5lb->BackColor = System::Drawing::Color::Transparent;
			this->Round1Winner5lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Round1Winner5lb->Location = System::Drawing::Point(1429, 104);
			this->Round1Winner5lb->Name = L"Round1Winner5lb";
			this->Round1Winner5lb->Size = System::Drawing::Size(112, 48);
			this->Round1Winner5lb->TabIndex = 36;
			this->Round1Winner5lb->Text = L"Round1\r\nWinner5\r\n";
			this->Round1Winner5lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Round1Winner5lb_Click);
			// 
			// Round1Winner6lb
			// 
			this->Round1Winner6lb->AutoSize = true;
			this->Round1Winner6lb->BackColor = System::Drawing::Color::Transparent;
			this->Round1Winner6lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Round1Winner6lb->Location = System::Drawing::Point(1429, 232);
			this->Round1Winner6lb->Name = L"Round1Winner6lb";
			this->Round1Winner6lb->Size = System::Drawing::Size(112, 48);
			this->Round1Winner6lb->TabIndex = 37;
			this->Round1Winner6lb->Text = L"Round1\r\nWinner6\r\n";
			this->Round1Winner6lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Round1Winner6lb_Click);
			// 
			// Round1winner7lb
			// 
			this->Round1winner7lb->AutoSize = true;
			this->Round1winner7lb->BackColor = System::Drawing::Color::Transparent;
			this->Round1winner7lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Round1winner7lb->Location = System::Drawing::Point(1429, 363);
			this->Round1winner7lb->Name = L"Round1winner7lb";
			this->Round1winner7lb->Size = System::Drawing::Size(112, 48);
			this->Round1winner7lb->TabIndex = 38;
			this->Round1winner7lb->Text = L"Round1\r\nWinner7";
			this->Round1winner7lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Round1winner7lb_Click);
			// 
			// Round1Winner8lb
			// 
			this->Round1Winner8lb->AutoSize = true;
			this->Round1Winner8lb->BackColor = System::Drawing::Color::Transparent;
			this->Round1Winner8lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Round1Winner8lb->Location = System::Drawing::Point(1429, 506);
			this->Round1Winner8lb->Name = L"Round1Winner8lb";
			this->Round1Winner8lb->Size = System::Drawing::Size(112, 48);
			this->Round1Winner8lb->TabIndex = 39;
			this->Round1Winner8lb->Text = L"Round1\r\nWinner8\r\n";
			this->Round1Winner8lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Round1Winner8lb_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(356, 113);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(49, 167);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 40;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(356, 377);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(60, 177);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 41;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(1368, 119);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(55, 146);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 42;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(1379, 377);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(44, 161);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 43;
			this->pictureBox12->TabStop = false;
			// 
			// Round2Winner1lb
			// 
			this->Round2Winner1lb->AutoSize = true;
			this->Round2Winner1lb->BackColor = System::Drawing::Color::Transparent;
			this->Round2Winner1lb->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Round2Winner1lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Round2Winner1lb->Location = System::Drawing::Point(422, 179);
			this->Round2Winner1lb->Name = L"Round2Winner1lb";
			this->Round2Winner1lb->Size = System::Drawing::Size(112, 48);
			this->Round2Winner1lb->TabIndex = 44;
			this->Round2Winner1lb->Text = L"Round2\r\nWinner1";
			this->Round2Winner1lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Round2Winner1lb_Click);
			// 
			// Round2Winner2lb
			// 
			this->Round2Winner2lb->AutoSize = true;
			this->Round2Winner2lb->BackColor = System::Drawing::Color::Transparent;
			this->Round2Winner2lb->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Round2Winner2lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Round2Winner2lb->Location = System::Drawing::Point(422, 438);
			this->Round2Winner2lb->Name = L"Round2Winner2lb";
			this->Round2Winner2lb->Size = System::Drawing::Size(112, 48);
			this->Round2Winner2lb->TabIndex = 45;
			this->Round2Winner2lb->Text = L"Round2\r\nWinner2";
			this->Round2Winner2lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Round2Winner2lb_Click);
			// 
			// Round2Winner3lb
			// 
			this->Round2Winner3lb->AutoSize = true;
			this->Round2Winner3lb->BackColor = System::Drawing::Color::Transparent;
			this->Round2Winner3lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Round2Winner3lb->Location = System::Drawing::Point(1250, 171);
			this->Round2Winner3lb->Name = L"Round2Winner3lb";
			this->Round2Winner3lb->Size = System::Drawing::Size(112, 48);
			this->Round2Winner3lb->TabIndex = 46;
			this->Round2Winner3lb->Text = L"Round2\r\nWinner3";
			this->Round2Winner3lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Round2Winner3lb_Click);
			// 
			// Round2Winner4lb
			// 
			this->Round2Winner4lb->AutoSize = true;
			this->Round2Winner4lb->BackColor = System::Drawing::Color::Transparent;
			this->Round2Winner4lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Round2Winner4lb->Location = System::Drawing::Point(1250, 428);
			this->Round2Winner4lb->Name = L"Round2Winner4lb";
			this->Round2Winner4lb->Size = System::Drawing::Size(112, 48);
			this->Round2Winner4lb->TabIndex = 47;
			this->Round2Winner4lb->Text = L"Round2\r\nWinner4";
			this->Round2Winner4lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Round2Winner4lb_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox13->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(540, 171);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(60, 291);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 48;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox14->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(1178, 188);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(54, 288);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 49;
			this->pictureBox14->TabStop = false;
			// 
			// Round3Winner1lb
			// 
			this->Round3Winner1lb->AutoSize = true;
			this->Round3Winner1lb->BackColor = System::Drawing::Color::Transparent;
			this->Round3Winner1lb->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Round3Winner1lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Round3Winner1lb->Location = System::Drawing::Point(596, 290);
			this->Round3Winner1lb->Name = L"Round3Winner1lb";
			this->Round3Winner1lb->Size = System::Drawing::Size(112, 48);
			this->Round3Winner1lb->TabIndex = 50;
			this->Round3Winner1lb->Text = L"Round3\r\nWinner1";
			this->Round3Winner1lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Round3Winner1lb_Click);
			// 
			// Round3Winner2lb
			// 
			this->Round3Winner2lb->AutoSize = true;
			this->Round3Winner2lb->BackColor = System::Drawing::Color::Transparent;
			this->Round3Winner2lb->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Round3Winner2lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Round3Winner2lb->Location = System::Drawing::Point(1070, 290);
			this->Round3Winner2lb->Name = L"Round3Winner2lb";
			this->Round3Winner2lb->Size = System::Drawing::Size(112, 48);
			this->Round3Winner2lb->TabIndex = 51;
			this->Round3Winner2lb->Text = L"Round3\r\nWinner2";
			this->Round3Winner2lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Round3Winner2lb_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(501, 245);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(776, 161);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 53;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &MatchSimulator::pictureBox15_Click);
			// 
			// Round4Winner1lb
			// 
			this->Round4Winner1lb->AutoSize = true;
			this->Round4Winner1lb->BackColor = System::Drawing::Color::Transparent;
			this->Round4Winner1lb->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Round4Winner1lb->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Round4Winner1lb->Location = System::Drawing::Point(824, 304);
			this->Round4Winner1lb->Name = L"Round4Winner1lb";
			this->Round4Winner1lb->Size = System::Drawing::Size(159, 24);
			this->Round4Winner1lb->TabIndex = 54;
			this->Round4Winner1lb->Text = L"FinalWinner";
			this->Round4Winner1lb->Click += gcnew System::EventHandler(this, &MatchSimulator::Round4Winner1lb_Click);
			// 
			// MatchSimulator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1789, 675);
			this->Controls->Add(this->Round4Winner1lb);
			this->Controls->Add(this->Round3Winner2lb);
			this->Controls->Add(this->Round3Winner1lb);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->Round2Winner4lb);
			this->Controls->Add(this->Round2Winner3lb);
			this->Controls->Add(this->Round2Winner2lb);
			this->Controls->Add(this->Round2Winner1lb);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->Round1Winner8lb);
			this->Controls->Add(this->Round1winner7lb);
			this->Controls->Add(this->Round1Winner6lb);
			this->Controls->Add(this->Round1Winner5lb);
			this->Controls->Add(this->Round1Winner4lb);
			this->Controls->Add(this->Round1Winner3lb);
			this->Controls->Add(this->Round1Winner2lb);
			this->Controls->Add(this->Round1Winner1lb);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->Team16lb);
			this->Controls->Add(this->Team8lb);
			this->Controls->Add(this->Team15lb);
			this->Controls->Add(this->Team7lb);
			this->Controls->Add(this->Team14lb);
			this->Controls->Add(this->Team6lb);
			this->Controls->Add(this->Team13lb);
			this->Controls->Add(this->Team5lb);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->Team12lb);
			this->Controls->Add(this->Team4lb);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->Team11lb);
			this->Controls->Add(this->Team3lb);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->Team10lb);
			this->Controls->Add(this->Team2lb);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Team9lb);
			this->Controls->Add(this->Team1lb);
			this->Controls->Add(this->T_lb);
			this->Controls->Add(this->Revert_Orignal_BT);
			this->Controls->Add(this->simulateBT);
			this->Controls->Add(this->Back_BT);
			this->Controls->Add(this->pictureBox15);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Name = L"MatchSimulator";
			this->Text = L"MatchSimulator";
			this->Load += gcnew System::EventHandler(this, &MatchSimulator::MatchSimulator_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: void SetInitialTeams() {
			// Ensure teams are loaded
			if (teams == nullptr) {
				MessageBox::Show("Teams data not loaded!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Loop through ranks 1 to 16
			for (int rank = 1; rank <= 16; rank++) {
				// Get the team name for the current rank
				std::string teamName = teams->GetTeamNameAtRank(rank);

				// Construct the label name dynamically (e.g., Team1lb, Team2lb, ..., Team16lb)
				std::string labelName = "Team" + std::to_string(rank) + "lb";

				// Search for the label control by name
				bool labelFound = false;
				for (int i = 0; i < this->Controls->Count; i++) {
					Control^ labelControl = this->Controls[i];
					if (labelControl->Name == gcnew String(labelName.c_str())) {
						// If the label is found, set the team name
						Label^ label = dynamic_cast<Label^>(labelControl);
						if (label != nullptr) {
							label->Text = gcnew String(teamName.c_str());
						}
						labelFound = true;
						break;
					}
				}

				if (!labelFound) {
					MessageBox::Show("Label not found for " + gcnew String(labelName.c_str()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		};
		private: void ClearWinnerLabels() {
			// Clear all winner labels
			Round1Winner1lb->Text = "Round1 Winner1";
			Round1Winner2lb->Text = "Round1 Winner2";
			Round1Winner3lb->Text = "Round1 Winner3";
			Round1Winner4lb->Text = "Round1 Winner4";
			Round1Winner5lb->Text = "Round1 Winner5";
			Round1Winner6lb->Text = "Round1 Winner6";
			Round1winner7lb->Text = "Round1 Winner7";
			Round1Winner8lb->Text = "Round1 Winner8";
			Round2Winner1lb->Text = "Round2 Winner1";
			Round2Winner2lb->Text = "Round2 Winner2";
			Round2Winner3lb->Text = "Round2 Winner3";
			Round2Winner4lb->Text = "Round2 Winner4";
			Round3Winner1lb->Text = "Round3 Winner1";
			Round3Winner2lb->Text = "Round3 Winner2";
			Round4Winner1lb->Text = "Final Winner"; // Placeholder for final winner
		}
			   // MatchSimulator.cpp

private: void UpdateLabelsForRound(int round) {
	if (round < 1 || round > 4) {
		return; // Invalid round
	}

	// Define label names based on the round
	if (round == 1) {
		for (int i = 0; i < 8; i++) {
			if (!tournament->round1Winners[i].empty()) {
				Label^ winnerLabel = dynamic_cast<Label^>(this->Controls["Round1Winner" + (i + 1) + "lb"]);
				if (winnerLabel != nullptr) {
					winnerLabel->Text = gcnew String(tournament->round1Winners[i].c_str());
				}
			}
		}
	}
	else if (round == 2) {
		for (int i = 0; i < 4; i++) {
			if (!tournament->round2Winners[i].empty()) {
				Label^ winnerLabel = dynamic_cast<Label^>(this->Controls["Round2Winner" + (i + 1) + "lb"]);
				if (winnerLabel != nullptr) {
					winnerLabel->Text = gcnew String(tournament->round2Winners[i].c_str());
				}
			}
		}
	}
	else if (round == 3) {
		for (int i = 0; i < 2; i++) {
			if (!tournament->round3Winners[i].empty()) {
				Label^ winnerLabel = dynamic_cast<Label^>(this->Controls["Round3Winner" + (i + 1) + "lb"]);
				if (winnerLabel != nullptr) {
					winnerLabel->Text = gcnew String(tournament->round3Winners[i].c_str());
				}
			}
		}
	}
	else if (round == 4) {
		if (!tournament->round4Winners[0].empty()) {
			Round4Winner1lb->Text = gcnew String(tournament->round4Winners[0].c_str());
		}
	}
}

private: System::Void MatchSimulator_Load(System::Object^ sender, System::EventArgs^ e) {
	SetInitialTeams();  // Call the SetInitialTeams function
}
private: System::Void simulateBT_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tournament != nullptr) {
		// Check the current round
		if (tournament->currentRound == 1) {
			tournament->simulateMatch();  // Simulate Round 1 matches
			UpdateLabelsForRound(1);      // Update labels with winners
		}
		else if (tournament->currentRound == 2) {
			tournament->simulateMatch();  // Simulate Round 2 matches
			UpdateLabelsForRound(2);      // Update labels with winners
		}
		else if (tournament->currentRound == 3) {
			tournament->simulateMatch();  // Simulate Round 3 matches
			UpdateLabelsForRound(3);      // Update labels with winners
		}
		else if (tournament->currentRound == 4) {
			tournament->simulateMatch();  // Simulate Round 4 matches
			UpdateLabelsForRound(4);      // Update labels with winners
		}
		else {
			MessageBox::Show("No matches left to simulate!", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else {
		MessageBox::Show("Tournament not initialized.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	}
private: System::Void Revert_Orignal_BT_Click(System::Object^ sender, System::EventArgs^ e) {
	// Clear winner labels
	ClearWinnerLabels();
	// Call the revert function in the Tournament class to reset the state
	if (tournament != nullptr) {
		tournament->revertToOriginal();
		MessageBox::Show("Tournament has been reset to the original state.", "Reset", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		MessageBox::Show("Tournament object is not initialized.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	};
private: System::Void Back_BT_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void Team1lb_Click(System::Object^ sender, System::EventArgs^ e) {
	   }
private: System::Void Team9lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Team2lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Team10lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Team3lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Team11lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Team4lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Team12lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Team5lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Team13lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Team6lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Team14lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Team7lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Team15lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Team8lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Team16lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Round1Winner1lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Round1Winner2lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Round1Winner3lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Round1Winner4lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Round1Winner5lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Round1Winner6lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Round1winner7lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Round1Winner8lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Round2Winner1lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Round2Winner2lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Round2Winner3lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Round2Winner4lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Round3Winner1lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Round3Winner2lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Round4Winner1lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox15_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void Round1Winner4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}