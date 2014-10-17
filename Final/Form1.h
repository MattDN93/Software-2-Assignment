#pragma once
#pragma comment(lib,"winmm.lib")
#include <iostream>
#include "windows.h"
#include "mmsystem.h"
#include <time.h>
#include "AboutBox.h"
#include "UserIntruction.h"

namespace Final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int count = 0;
	bool status=false;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{

		static int second = 0;
	private: System::Windows::Forms::Label^  time;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  actionLabel;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  intrusion;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Button^  panic;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  usageInstructionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  programInfoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  clickHereForStudentDetailsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  c2014SoftwareEngineeringIIToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  PolicePictureBox;
	private: System::Windows::Forms::PictureBox^  FirePictureBox;

			 String ^ sec;
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  CPButton;
	protected: 

	private: System::Windows::Forms::Button^  doorButton;

	private: System::Windows::Forms::Button^  win5_Button;
	private: System::Windows::Forms::Button^  win4_Button;
	private: System::Windows::Forms::Button^  win3_Button;
	private: System::Windows::Forms::Button^  win2_Button;
	private: System::Windows::Forms::Button^  win1_Button;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  clearButton;
	private: System::Windows::Forms::Button^  verifyButton;



	private: System::Windows::Forms::Button^  button0;

	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  display_TextBox;



	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::TextBox^  check;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->CPButton = (gcnew System::Windows::Forms::Button());
			this->doorButton = (gcnew System::Windows::Forms::Button());
			this->win5_Button = (gcnew System::Windows::Forms::Button());
			this->win4_Button = (gcnew System::Windows::Forms::Button());
			this->win3_Button = (gcnew System::Windows::Forms::Button());
			this->win2_Button = (gcnew System::Windows::Forms::Button());
			this->win1_Button = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panic = (gcnew System::Windows::Forms::Button());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->verifyButton = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->display_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->check = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->time = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->actionLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->intrusion = (gcnew System::Windows::Forms::TextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usageInstructionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->programInfoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clickHereForStudentDetailsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->c2014SoftwareEngineeringIIToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->PolicePictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->FirePictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PolicePictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FirePictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1->Controls->Add(this->pictureBox10);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->CPButton);
			this->panel1->Controls->Add(this->doorButton);
			this->panel1->Controls->Add(this->win5_Button);
			this->panel1->Controls->Add(this->win4_Button);
			this->panel1->Controls->Add(this->win3_Button);
			this->panel1->Controls->Add(this->win2_Button);
			this->panel1->Controls->Add(this->win1_Button);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(35, 19);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(553, 324);
			this->panel1->TabIndex = 1;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(259, 74);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(50, 50);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 10;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &Form1::pictureBox10_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(378, 58);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(74, 74);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 9;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &Form1::pictureBox9_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(245, 161);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(74, 74);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 8;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &Form1::pictureBox8_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(116, 58);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(74, 74);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// CPButton
			// 
			this->CPButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CPButton->Location = System::Drawing::Point(229, 0);
			this->CPButton->Name = L"CPButton";
			this->CPButton->Size = System::Drawing::Size(48, 34);
			this->CPButton->TabIndex = 6;
			this->CPButton->Text = L"CP";
			this->CPButton->UseVisualStyleBackColor = true;
			this->CPButton->Click += gcnew System::EventHandler(this, &Form1::CPButton_Click);
			// 
			// doorButton
			// 
			this->doorButton->Enabled = false;
			this->doorButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->doorButton->Location = System::Drawing::Point(59, 0);
			this->doorButton->Name = L"doorButton";
			this->doorButton->Size = System::Drawing::Size(111, 23);
			this->doorButton->TabIndex = 5;
			this->doorButton->Text = L"Door";
			this->doorButton->UseVisualStyleBackColor = true;
			this->doorButton->Click += gcnew System::EventHandler(this, &Form1::doorButton_Click);
			// 
			// win5_Button
			// 
			this->win5_Button->Enabled = false;
			this->win5_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->win5_Button->Location = System::Drawing::Point(333, 0);
			this->win5_Button->Name = L"win5_Button";
			this->win5_Button->Size = System::Drawing::Size(218, 23);
			this->win5_Button->TabIndex = 4;
			this->win5_Button->Text = L"Window5";
			this->win5_Button->UseVisualStyleBackColor = true;
			this->win5_Button->Click += gcnew System::EventHandler(this, &Form1::win5_Button_Click);
			// 
			// win4_Button
			// 
			this->win4_Button->Enabled = false;
			this->win4_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->win4_Button->Location = System::Drawing::Point(530, 58);
			this->win4_Button->Name = L"win4_Button";
			this->win4_Button->Size = System::Drawing::Size(21, 174);
			this->win4_Button->TabIndex = 3;
			this->win4_Button->Text = L"Window44";
			this->win4_Button->UseVisualStyleBackColor = true;
			this->win4_Button->Click += gcnew System::EventHandler(this, &Form1::win4_Button_Click);
			// 
			// win3_Button
			// 
			this->win3_Button->Enabled = false;
			this->win3_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->win3_Button->Location = System::Drawing::Point(303, 301);
			this->win3_Button->Name = L"win3_Button";
			this->win3_Button->Size = System::Drawing::Size(218, 23);
			this->win3_Button->TabIndex = 2;
			this->win3_Button->Text = L"Window3";
			this->win3_Button->UseVisualStyleBackColor = true;
			this->win3_Button->Click += gcnew System::EventHandler(this, &Form1::win3_Button_Click);
			// 
			// win2_Button
			// 
			this->win2_Button->Enabled = false;
			this->win2_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->win2_Button->Location = System::Drawing::Point(33, 301);
			this->win2_Button->Name = L"win2_Button";
			this->win2_Button->Size = System::Drawing::Size(218, 23);
			this->win2_Button->TabIndex = 1;
			this->win2_Button->Text = L"Window2";
			this->win2_Button->UseVisualStyleBackColor = true;
			this->win2_Button->Click += gcnew System::EventHandler(this, &Form1::win2_Button_Click);
			// 
			// win1_Button
			// 
			this->win1_Button->Enabled = false;
			this->win1_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->win1_Button->Location = System::Drawing::Point(0, 54);
			this->win1_Button->Name = L"win1_Button";
			this->win1_Button->Size = System::Drawing::Size(22, 178);
			this->win1_Button->TabIndex = 0;
			this->win1_Button->Text = L"Window11";
			this->win1_Button->UseVisualStyleBackColor = true;
			this->win1_Button->Click += gcnew System::EventHandler(this, &Form1::win1_Button_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel2->Controls->Add(this->panic);
			this->panel2->Controls->Add(this->clearButton);
			this->panel2->Controls->Add(this->verifyButton);
			this->panel2->Controls->Add(this->button0);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->display_TextBox);
			this->panel2->Location = System::Drawing::Point(15, 26);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(257, 322);
			this->panel2->TabIndex = 2;
			this->panel2->Visible = false;
			// 
			// panic
			// 
			this->panic->Location = System::Drawing::Point(58, 258);
			this->panic->Name = L"panic";
			this->panic->Size = System::Drawing::Size(23, 55);
			this->panic->TabIndex = 15;
			this->panic->Text = L"P";
			this->panic->UseVisualStyleBackColor = true;
			this->panic->Click += gcnew System::EventHandler(this, &Form1::panic_Click);
			// 
			// clearButton
			// 
			this->clearButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearButton->Location = System::Drawing::Point(26, 258);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(23, 55);
			this->clearButton->TabIndex = 14;
			this->clearButton->Text = L"*";
			this->clearButton->UseVisualStyleBackColor = true;
			this->clearButton->Click += gcnew System::EventHandler(this, &Form1::clearButton_Click);
			// 
			// verifyButton
			// 
			this->verifyButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->verifyButton->Location = System::Drawing::Point(178, 259);
			this->verifyButton->Name = L"verifyButton";
			this->verifyButton->Size = System::Drawing::Size(55, 55);
			this->verifyButton->TabIndex = 13;
			this->verifyButton->Text = L"#";
			this->verifyButton->UseVisualStyleBackColor = true;
			this->verifyButton->Click += gcnew System::EventHandler(this, &Form1::verify_Button_Click);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->Location = System::Drawing::Point(101, 258);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(55, 55);
			this->button0->TabIndex = 11;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &Form1::button0_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(178, 198);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 55);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(101, 197);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(55, 55);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(26, 197);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 55);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(178, 131);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 55);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(101, 131);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 55);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(26, 131);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(55, 55);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(178, 63);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 55);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(101, 63);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 55);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(26, 63);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 55);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// display_TextBox
			// 
			this->display_TextBox->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->display_TextBox->Location = System::Drawing::Point(26, 14);
			this->display_TextBox->Name = L"display_TextBox";
			this->display_TextBox->Size = System::Drawing::Size(207, 23);
			this->display_TextBox->TabIndex = 0;
			this->display_TextBox->TextChanged += gcnew System::EventHandler(this, &Form1::display_TextBox_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(15, 21);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(236, 51);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"System Disarmed. All monitoring disabled. Enter key code to arm.";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// check
			// 
			this->check->Enabled = false;
			this->check->Location = System::Drawing::Point(398, 396);
			this->check->Name = L"check";
			this->check->Size = System::Drawing::Size(236, 20);
			this->check->TabIndex = 8;
			this->check->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->check->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// time
			// 
			this->time->AutoSize = true;
			this->time->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->time->Location = System::Drawing::Point(175, 26);
			this->time->Name = L"time";
			this->time->Size = System::Drawing::Size(19, 21);
			this->time->TabIndex = 9;
			this->time->Text = L"0";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(28, 66);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(223, 20);
			this->pictureBox6->TabIndex = 19;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(15, 66);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(195, 20);
			this->pictureBox5->TabIndex = 18;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(15, 66);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(154, 20);
			this->pictureBox4->TabIndex = 17;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(15, 66);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(107, 20);
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(15, 66);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(66, 20);
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(15, 66);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(20, 20);
			this->pictureBox7->TabIndex = 14;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->panel2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(662, 364);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(289, 389);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Key Code Entry";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(681, 346);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(251, 13);
			this->label10->TabIndex = 4;
			this->label10->Text = L"If Control Panel not visible below, click \"CP\" above.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 367);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(245, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Use the \"#\" key to confirm key code entry.";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(658, 27);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(267, 87);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"System Status";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->actionLabel);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->pictureBox5);
			this->groupBox3->Controls->Add(this->pictureBox7);
			this->groupBox3->Controls->Add(this->pictureBox2);
			this->groupBox3->Controls->Add(this->time);
			this->groupBox3->Controls->Add(this->pictureBox6);
			this->groupBox3->Controls->Add(this->pictureBox3);
			this->groupBox3->Controls->Add(this->pictureBox4);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(665, 181);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(269, 151);
			this->groupBox3->TabIndex = 22;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Arm/Disarm Progress";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(228, 100);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(26, 15);
			this->label9->TabIndex = 28;
			this->label9->Text = L"60s";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(184, 100);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(26, 15);
			this->label8->TabIndex = 27;
			this->label8->Text = L"50s";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(143, 100);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 15);
			this->label7->TabIndex = 26;
			this->label7->Text = L"40s";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(96, 100);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(26, 15);
			this->label6->TabIndex = 25;
			this->label6->Text = L"30s";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(55, 100);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 15);
			this->label5->TabIndex = 24;
			this->label5->Text = L"20s";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 15);
			this->label4->TabIndex = 23;
			this->label4->Text = L"10s";
			// 
			// actionLabel
			// 
			this->actionLabel->AutoSize = true;
			this->actionLabel->ForeColor = System::Drawing::Color::Red;
			this->actionLabel->Location = System::Drawing::Point(146, 121);
			this->actionLabel->Name = L"actionLabel";
			this->actionLabel->Size = System::Drawing::Size(105, 15);
			this->actionLabel->TabIndex = 22;
			this->actionLabel->Text = L"Action Imminent!";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(200, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 15);
			this->label3->TabIndex = 21;
			this->label3->Text = L"seconds";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 15);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Time Elapsed";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->intrusion);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(662, 120);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(269, 54);
			this->groupBox4->TabIndex = 23;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Intrusion Zone Indicator";
			// 
			// intrusion
			// 
			this->intrusion->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->intrusion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->intrusion->ForeColor = System::Drawing::Color::Red;
			this->intrusion->Location = System::Drawing::Point(15, 23);
			this->intrusion->Name = L"intrusion";
			this->intrusion->ReadOnly = true;
			this->intrusion->Size = System::Drawing::Size(236, 25);
			this->intrusion->TabIndex = 0;
			this->intrusion->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->panel1);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(12, 27);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(607, 360);
			this->groupBox5->TabIndex = 24;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"System Overview Pane";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Menu;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->helpToolStripMenuItem,
					this->programInfoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(959, 24);
			this->menuStrip1->TabIndex = 25;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->usageInstructionsToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// usageInstructionsToolStripMenuItem
			// 
			this->usageInstructionsToolStripMenuItem->Name = L"usageInstructionsToolStripMenuItem";
			this->usageInstructionsToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->usageInstructionsToolStripMenuItem->Text = L"Usage Instructions";
			this->usageInstructionsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::usageInstructionsToolStripMenuItem_Click);
			// 
			// programInfoToolStripMenuItem
			// 
			this->programInfoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->clickHereForStudentDetailsToolStripMenuItem,
					this->c2014SoftwareEngineeringIIToolStripMenuItem
			});
			this->programInfoToolStripMenuItem->Name = L"programInfoToolStripMenuItem";
			this->programInfoToolStripMenuItem->Size = System::Drawing::Size(89, 20);
			this->programInfoToolStripMenuItem->Text = L"Program Info";
			// 
			// clickHereForStudentDetailsToolStripMenuItem
			// 
			this->clickHereForStudentDetailsToolStripMenuItem->Name = L"clickHereForStudentDetailsToolStripMenuItem";
			this->clickHereForStudentDetailsToolStripMenuItem->Size = System::Drawing::Size(239, 22);
			this->clickHereForStudentDetailsToolStripMenuItem->Text = L"Click here for student details";
			this->clickHereForStudentDetailsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::clickHereForStudentDetailsToolStripMenuItem_Click);
			// 
			// c2014SoftwareEngineeringIIToolStripMenuItem
			// 
			this->c2014SoftwareEngineeringIIToolStripMenuItem->Enabled = false;
			this->c2014SoftwareEngineeringIIToolStripMenuItem->Name = L"c2014SoftwareEngineeringIIToolStripMenuItem";
			this->c2014SoftwareEngineeringIIToolStripMenuItem->Size = System::Drawing::Size(239, 22);
			this->c2014SoftwareEngineeringIIToolStripMenuItem->Text = L"(c) 2014 Software Engineering II";
			// 
			// PolicePictureBox
			// 
			this->PolicePictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PolicePictureBox.Image")));
			this->PolicePictureBox->Location = System::Drawing::Point(47, 422);
			this->PolicePictureBox->Name = L"PolicePictureBox";
			this->PolicePictureBox->Size = System::Drawing::Size(553, 307);
			this->PolicePictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PolicePictureBox->TabIndex = 26;
			this->PolicePictureBox->TabStop = false;
			this->PolicePictureBox->Visible = false;
			// 
			// FirePictureBox
			// 
			this->FirePictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FirePictureBox.Image")));
			this->FirePictureBox->Location = System::Drawing::Point(47, 422);
			this->FirePictureBox->Name = L"FirePictureBox";
			this->FirePictureBox->Size = System::Drawing::Size(553, 307);
			this->FirePictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->FirePictureBox->TabIndex = 27;
			this->FirePictureBox->TabStop = false;
			this->FirePictureBox->Visible = false;
			this->FirePictureBox->Click += gcnew System::EventHandler(this, &Form1::FirePictureBox_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(959, 733);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->FirePictureBox);
			this->Controls->Add(this->PolicePictureBox);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->check);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(975, 795);
			this->Name = L"Form1";
			this->Text = L" Alarm System Control Panel";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PolicePictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FirePictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

/******************************************************************************************************************/

private: System::Void playSound()
{
					 PlaySound(TEXT("success"), 0, SND_FILENAME|SND_LOOP|SND_ASYNC);
}

private: System::Void stopSound()
{
					 PlaySound(0,0,0);
}

private:System::Void armSystem()
		{
				if ((display_TextBox->Text == "1234"))
				{
					textBox1->Text = "System arming; please leave premises within 60s";
					win1_Button->Enabled = false;
					win2_Button->Enabled = false;
					win3_Button->Enabled = false;
					win4_Button->Enabled = false;
					win5_Button->Enabled = false;
					doorButton->Enabled = false;
					panel1->Enabled = true;
					status = true;
				}
				else
				{
				 display_TextBox->Text = "";
				 count++;
				 textBox1->Text = "Arming failed. key code incorrect, please try again.";
				 timer2->Stop();
				 second = 0;
				 status= false;
				}

		}

private: System::Void disarmState()	//The system is in the initial state - activated only when the password is correct
		 {
			 pictureBox7->Hide();
			 pictureBox2->Hide();
			 pictureBox3->Hide();
			 pictureBox4->Hide();
			 pictureBox5->Hide();
			 pictureBox6->Hide();

			 win1_Button->Enabled = false;
					win2_Button->Enabled = false;
					win3_Button->Enabled = false;
					win4_Button->Enabled = false;
					win5_Button->Enabled = false;
					doorButton->Enabled = false;
					panel1->Enabled = true;

			 second = 0;

			 time->Text = "";

			 check->Text = "";

			 display_TextBox->Text = "";
			 PolicePictureBox->Visible=false;
			 FirePictureBox->Visible=false;

			 status = false;

		 }

private: System::Void verifyWindow()	/*Used when the window sensor is broken*/
		 {	
		
		 if ((display_TextBox->Text == "1234"))
			 {
				 display_TextBox->Text = "";
				 textBox1->Text = "System Disarmed. All monitoring disabled. Enter key code to arm.";
				 stopSound();
				 count = 0;
				 timer1->Stop();
				 time->Text="";
				 second=0;
				 disarmState();
				 //panel1->Enabled = false;

				pictureBox7->Hide();
				pictureBox2->Hide();
				pictureBox3->Hide();
				pictureBox4->Hide();
				pictureBox5->Hide();
				pictureBox6->Hide();


			 }
			else
			 {
				 display_TextBox->Text = "";
				 count++;
				 textBox1->Text = "Arming failed. key code incorrect, please try again.";
				 stopSound();
		     }
		}

private: System::Void verifyDoor()
{
				if ((display_TextBox->Text == "1234"))
				 {  
					textBox1->Text = "System Disarmed. All monitoring disabled. Enter key code to arm.";
					count =0;
					timer1->Stop();
					time->Text="";
					second=0;
					disarmState();
					stopSound();

					//panel1->Enabled = false;

					pictureBox7->Hide();
					pictureBox2->Hide();
					pictureBox3->Hide();
					pictureBox4->Hide();
					pictureBox5->Hide();
					pictureBox6->Hide();

				 }   
			    else
				 {	
					display_TextBox->Text = "";
					count++;
					textBox1->Text = "Arming failed. key code incorrect, please try again.";
					stopSound();
				 }
}

/******************************************************************************************************************/

private: System::Void verify_Button_Click(System::Object^  sender, System::EventArgs^  e) {
				if (status == false)
				{
					intrusion->Text = "";				 
					if(check->Text == "window")
					{
						verifyWindow();
					}
						else if (check->Text == "door")
					{
						verifyDoor();
					}
					else
					{
						timer2->Start();
						armSystem();
					}
				}
				else if (status == true)
				{
					if ((display_TextBox->Text == "1234"))
					{  
						textBox1->Text = "System Disarmed. All monitoring disabled. Enter key code to arm.";
						stopSound();
						count =0;
						disarmState();
					}
					else
					{
							textBox1->Text = "Arming failed. key code incorrect, please try again";

							PolicePictureBox->Visible=true;
					}
				}
			 }

private: System::Void CPButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( panel2->Visible == true )
				panel2->Hide();
			else
				panel2->Show();

		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 display_TextBox->Text = display_TextBox->Text + "1";
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			  display_TextBox->Text = display_TextBox->Text + "2";
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			  display_TextBox->Text = display_TextBox->Text + "3";
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			  display_TextBox->Text = display_TextBox->Text + "4";
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			  display_TextBox->Text = display_TextBox->Text + "5";
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			  display_TextBox->Text = display_TextBox->Text + "6";
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			  display_TextBox->Text = display_TextBox->Text + "7";
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			  display_TextBox->Text = display_TextBox->Text + "8";
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			  display_TextBox->Text = display_TextBox->Text + "9";
		 }
private: System::Void button0_Click(System::Object^  sender, System::EventArgs^  e) {
			  display_TextBox->Text = display_TextBox->Text + "0";
		 }
private: System::Void clearButton_Click(System::Object^  sender, System::EventArgs^  e) {
			  display_TextBox->Text = "";
		 }
private: System::Void playButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 playSound();
		 }
private: System::Void stopButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 stopSound();
		 }
private: System::Void win5_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			 PlaySound(TEXT("success.wav"), 0, SND_FILENAME|SND_LOOP|SND_ASYNC);
			 textBox1->Text = "A window has been breached. System in Intruder state!";
			 panel2->Show();
			 check->Text = "window";
			 intrusion->Text = "Window 5";
			 panel1->Enabled = false;
		 }

private: System::Void doorButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 check->Text = "door";
			 textBox1->Text = "Door opened; please enter key code to disarm!";
			 panel2->Show();
			 intrusion->Text = "Door";
			 timer1->Start();
			 panel1->Enabled = false;
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {

					 second++;

					 if(second== 10)
					 {
						 actionLabel->Hide();
						 pictureBox7->Show();
					 }
					 else if(second == 20)
					 {
						 pictureBox2->Show();
					 }
					 else if(second == 30)
					 {
						 pictureBox3->Show();
					 }
					 else if(second == 40)
					 {
						 pictureBox4->Show();
					 }
					 else if(second == 50)
					 {
						 pictureBox5->Show();
						 actionLabel->Show();
					 }
					 else if(second == 59)
					 {
						 pictureBox6->Show();
					 }


					 if (second == 60 || count==3)
					 {
						  timer1->Stop();
						  PlaySound(TEXT("success.wav"), 0, SND_FILENAME|SND_LOOP|SND_ASYNC);
						  textBox1->Text = "System is in Intruder State";
					 }

				 sec = Convert::ToString(second);
				 time->Text = sec;

		 }
private: System::Void win1_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			 PlaySound(TEXT("success.wav"), 0, SND_FILENAME|SND_LOOP|SND_ASYNC);
			 textBox1->Text = "A window has been breached. System in Intruder state!";
			 panel2->Show();
			 check->Text = "window";
			 intrusion->Text = "Window 1";
			 panel1->Enabled = false;
		 }
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
					 second++;

					 if(second== 10)
					 {
						 pictureBox7->Show();
					 }
					 else if(second == 20)
					 {
						 pictureBox2->Show();
					 }
					 else if(second == 30)
					 {
						 pictureBox3->Show();
					 }
					 else if(second == 40)
					 {
						 pictureBox4->Show();
					 }
					 else if(second == 50)
					 {
						 pictureBox5->Show();
					 }
					 else if(second == 59)
					 {
						 pictureBox6->Show();
					 }


					 if (second == 60)
					 {
						timer2->Stop();
						second = 0;
						display_TextBox->Text = "";
						textBox1->Text = "The system is armed. All monitoring enabled.";
						stopSound();
						count =0;
						win1_Button->Enabled = true;
						win2_Button->Enabled = true;
						win3_Button->Enabled = true;
						win4_Button->Enabled = true;
						win5_Button->Enabled = true;
						doorButton->Enabled = true;
						pictureBox7->Hide();
						pictureBox2->Hide();
						pictureBox3->Hide();
						pictureBox4->Hide();
						pictureBox5->Hide();
						pictureBox6->Hide();
					 }

				 sec = Convert::ToString(second);
				 time->Text = sec;
		 }
private: System::Void win2_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			 PlaySound(TEXT("success.wav"), 0, SND_FILENAME|SND_LOOP|SND_ASYNC);
			 textBox1->Text = "A window has been breached. System in Intruder state!";
			 panel2->Show();
			 check->Text = "window";
			 intrusion->Text = "Window 2";
			 panel1->Enabled = false;
		 }
private: System::Void win3_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			 PlaySound(TEXT("success.wav"), 0, SND_FILENAME|SND_LOOP|SND_ASYNC);
			 textBox1->Text = "A window has been breached. System in Intruder state!";
			 panel2->Show();
			 check->Text = "window";
			 intrusion->Text = "Window 3";
			 panel1->Enabled = false;
		 }
private: System::Void win4_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			 PlaySound(TEXT("success.wav"), 0, SND_FILENAME|SND_LOOP|SND_ASYNC);
			 textBox1->Text = "A window has been breached. System in Intruder state!";
			 panel2->Show();
			 check->Text = "window";
			 intrusion->Text = "Window 4";
			 panel1->Enabled = false;
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panic_Click(System::Object^  sender, System::EventArgs^  e) {
			 PlaySound(TEXT("success.wav"), 0, SND_FILENAME|SND_LOOP|SND_ASYNC);
			 textBox1->Text = "Panic button pressed. System in Intruder state!";
			 panel2->Show();
			 check->Text = "window";
			 intrusion->Text = "Panic Button";
			 panel1->Enabled = false;
		 }


private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
			 PlaySound(TEXT("success.wav"), 0, SND_FILENAME|SND_LOOP|SND_ASYNC);
			 textBox1->Text = "Artwork moved! System in Intruder state!";
			 panel2->Show();
			 check->Text = "window";
			 intrusion->Text = "Artwork 2";
			 //panel1->Enabled = false;
		 }

private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 PlaySound(TEXT("success.wav"), 0, SND_FILENAME|SND_LOOP|SND_ASYNC);
			 textBox1->Text = "Artwork moved! System in Intruder state!";
			 panel2->Show();
			 check->Text = "window";
			 intrusion->Text = "Artwork 1";
			 //panel1->Enabled = false;
		 }
private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
			 PlaySound(TEXT("success.wav"), 0, SND_FILENAME|SND_LOOP|SND_ASYNC);
			 textBox1->Text = "Artwork moved! System in Intruder state!";
			 panel2->Show();
			 check->Text = "window";
			 intrusion->Text = "Artwork 3";
			 //panel1->Enabled = false;
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Welcome to the Alarm System Control Panel.\n Interact with the system or choose Help>Instructions for more.");
		 }
private: System::Void clickHereForStudentDetailsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			AboutBox^ frm = gcnew AboutBox();
			frm -> ShowDialog();
		 }
private: System::Void display_TextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) {
			 PlaySound(TEXT("success.wav"), 0, SND_FILENAME|SND_LOOP|SND_ASYNC);
			 textBox1->Text = "Fire Detected";
			 panel2->Show();
			 check->Text = "window";
			 intrusion -> Text = "";
			 FirePictureBox -> Visible=true;
			 status =true;

		 }
private: System::Void FirePictureBox_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void usageInstructionsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 UserIntruction^ Ufrm = gcnew UserIntruction();
			 Ufrm -> ShowDialog();
			
		 }
};
}

