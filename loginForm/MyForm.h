#pragma once
#include <iostream>
#include "LoginForm.h"
#include "RegisterForm.h"

using namespace std;

namespace loginForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			panelReg->Hide();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ UserNameBox;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ PasswordBox;
	private: System::Windows::Forms::Button^ LoginButton;
	private: System::Windows::Forms::Button^ RegisterButton;



	private: System::Windows::Forms::Panel^ panelReg;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ passwordConfirmBox;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ RegisterPasswordBox;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ ResgisterUserNameBox;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ IDBox;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ LoginPanel;

	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ button7;


	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;












	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::ComponentModel::IContainer^ components;















	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->UserNameBox = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->PasswordBox = (gcnew System::Windows::Forms::TextBox());
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->RegisterButton = (gcnew System::Windows::Forms::Button());
			this->panelReg = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->passwordConfirmBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->RegisterPasswordBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->ResgisterUserNameBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->IDBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->LoginPanel = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panelReg->SuspendLayout();
			this->LoginPanel->SuspendLayout();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel9->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 30.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DimGray;
			this->label1->Location = System::Drawing::Point(34, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->UseMnemonic = false;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->label2->Location = System::Drawing::Point(39, 218);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 30);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username";
			this->label2->UseMnemonic = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->label3->Location = System::Drawing::Point(39, 310);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 30);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Passward";
			this->label3->UseMnemonic = false;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// UserNameBox
			// 
			this->UserNameBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UserNameBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserNameBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->UserNameBox->Location = System::Drawing::Point(44, 251);
			this->UserNameBox->Name = L"UserNameBox";
			this->UserNameBox->Size = System::Drawing::Size(288, 30);
			this->UserNameBox->TabIndex = 3;
			this->UserNameBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DimGray;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->panel1->Location = System::Drawing::Point(40, 283);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(292, 3);
			this->panel1->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DimGray;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->panel2->Location = System::Drawing::Point(36, 375);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(292, 3);
			this->panel2->TabIndex = 6;
			// 
			// PasswordBox
			// 
			this->PasswordBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PasswordBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->PasswordBox->Location = System::Drawing::Point(40, 343);
			this->PasswordBox->Name = L"PasswordBox";
			this->PasswordBox->Size = System::Drawing::Size(288, 30);
			this->PasswordBox->TabIndex = 5;
			this->PasswordBox->UseSystemPasswordChar = true;
			this->PasswordBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// LoginButton
			// 
			this->LoginButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->LoginButton->FlatAppearance->BorderSize = 0;
			this->LoginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoginButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold));
			this->LoginButton->ForeColor = System::Drawing::Color::White;
			this->LoginButton->Location = System::Drawing::Point(36, 442);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(134, 61);
			this->LoginButton->TabIndex = 7;
			this->LoginButton->Text = L"Login";
			this->LoginButton->UseVisualStyleBackColor = false;
			this->LoginButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// RegisterButton
			// 
			this->RegisterButton->BackColor = System::Drawing::Color::White;
			this->RegisterButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->RegisterButton->FlatAppearance->BorderSize = 2;
			this->RegisterButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->RegisterButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->RegisterButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RegisterButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold));
			this->RegisterButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->RegisterButton->Location = System::Drawing::Point(190, 442);
			this->RegisterButton->Name = L"RegisterButton";
			this->RegisterButton->Size = System::Drawing::Size(142, 61);
			this->RegisterButton->TabIndex = 8;
			this->RegisterButton->Text = L"Register";
			this->RegisterButton->UseVisualStyleBackColor = false;
			this->RegisterButton->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panelReg
			// 
			this->panelReg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelReg.BackgroundImage")));
			this->panelReg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelReg->Controls->Add(this->button3);
			this->panelReg->Controls->Add(this->button4);
			this->panelReg->Controls->Add(this->panel7);
			this->panelReg->Controls->Add(this->passwordConfirmBox);
			this->panelReg->Controls->Add(this->label8);
			this->panelReg->Controls->Add(this->panel6);
			this->panelReg->Controls->Add(this->RegisterPasswordBox);
			this->panelReg->Controls->Add(this->label7);
			this->panelReg->Controls->Add(this->panel5);
			this->panelReg->Controls->Add(this->ResgisterUserNameBox);
			this->panelReg->Controls->Add(this->label6);
			this->panelReg->Controls->Add(this->panel4);
			this->panelReg->Controls->Add(this->IDBox);
			this->panelReg->Controls->Add(this->label5);
			this->panelReg->Controls->Add(this->label4);
			this->panelReg->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelReg->Location = System::Drawing::Point(0, 0);
			this->panelReg->Name = L"panelReg";
			this->panelReg->Size = System::Drawing::Size(835, 561);
			this->panelReg->TabIndex = 9;
			this->panelReg->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(194, 449);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 54);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Register";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->button4->Location = System::Drawing::Point(40, 449);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(134, 54);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Login";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->panel7->Location = System::Drawing::Point(40, 424);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(292, 3);
			this->panel7->TabIndex = 16;
			// 
			// passwordConfirmBox
			// 
			this->passwordConfirmBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordConfirmBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordConfirmBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->passwordConfirmBox->Location = System::Drawing::Point(44, 392);
			this->passwordConfirmBox->Name = L"passwordConfirmBox";
			this->passwordConfirmBox->Size = System::Drawing::Size(288, 30);
			this->passwordConfirmBox->TabIndex = 15;
			this->passwordConfirmBox->UseSystemPasswordChar = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->label8->Location = System::Drawing::Point(39, 359);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(240, 30);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Passowrd Confirmation";
			this->label8->UseMnemonic = false;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->panel6->Location = System::Drawing::Point(40, 353);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(292, 3);
			this->panel6->TabIndex = 13;
			// 
			// RegisterPasswordBox
			// 
			this->RegisterPasswordBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RegisterPasswordBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegisterPasswordBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->RegisterPasswordBox->Location = System::Drawing::Point(44, 321);
			this->RegisterPasswordBox->Name = L"RegisterPasswordBox";
			this->RegisterPasswordBox->Size = System::Drawing::Size(288, 30);
			this->RegisterPasswordBox->TabIndex = 12;
			this->RegisterPasswordBox->UseSystemPasswordChar = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->label7->Location = System::Drawing::Point(39, 288);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 30);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Password";
			this->label7->UseMnemonic = false;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->panel5->Location = System::Drawing::Point(40, 279);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(292, 3);
			this->panel5->TabIndex = 10;
			// 
			// ResgisterUserNameBox
			// 
			this->ResgisterUserNameBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ResgisterUserNameBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResgisterUserNameBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->ResgisterUserNameBox->Location = System::Drawing::Point(44, 247);
			this->ResgisterUserNameBox->Name = L"ResgisterUserNameBox";
			this->ResgisterUserNameBox->Size = System::Drawing::Size(288, 30);
			this->ResgisterUserNameBox->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->label6->Location = System::Drawing::Point(39, 214);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 30);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Username";
			this->label6->UseMnemonic = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->panel4->Location = System::Drawing::Point(36, 205);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(292, 3);
			this->panel4->TabIndex = 7;
			// 
			// IDBox
			// 
			this->IDBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->IDBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->IDBox->Location = System::Drawing::Point(40, 173);
			this->IDBox->Name = L"IDBox";
			this->IDBox->Size = System::Drawing::Size(288, 30);
			this->IDBox->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->label5->Location = System::Drawing::Point(39, 140);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 30);
			this->label5->TabIndex = 5;
			this->label5->Text = L"ID";
			this->label5->UseMnemonic = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 30.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DimGray;
			this->label4->Location = System::Drawing::Point(34, 69);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(189, 58);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Register";
			this->label4->UseMnemonic = false;
			// 
			// LoginPanel
			// 
			this->LoginPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LoginPanel.BackgroundImage")));
			this->LoginPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->LoginPanel->Controls->Add(this->RegisterButton);
			this->LoginPanel->Controls->Add(this->LoginButton);
			this->LoginPanel->Controls->Add(this->panel2);
			this->LoginPanel->Controls->Add(this->panel1);
			this->LoginPanel->Controls->Add(this->PasswordBox);
			this->LoginPanel->Controls->Add(this->UserNameBox);
			this->LoginPanel->Controls->Add(this->label3);
			this->LoginPanel->Controls->Add(this->label2);
			this->LoginPanel->Controls->Add(this->label1);
			this->LoginPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LoginPanel->Location = System::Drawing::Point(0, 0);
			this->LoginPanel->Name = L"LoginPanel";
			this->LoginPanel->Size = System::Drawing::Size(835, 561);
			this->LoginPanel->TabIndex = 10;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Gray;
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel8->Controls->Add(this->pictureBox2);
			this->panel8->Controls->Add(this->pictureBox1);
			this->panel8->Controls->Add(this->button7);
			this->panel8->Controls->Add(this->button6);
			this->panel8->Controls->Add(this->button5);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel8->Location = System::Drawing::Point(0, 0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(835, 39);
			this->panel8->TabIndex = 11;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(746, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(77, 33);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(384, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(67, 33);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::Color::Transparent;
			this->button7->Location = System::Drawing::Point(110, -7);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(33, 46);
			this->button7->TabIndex = 0;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(72, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(19, 27);
			this->button6->TabIndex = 0;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(25, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(22, 27);
			this->button5->TabIndex = 0;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->LoginPanel);
			this->panel9->Controls->Add(this->panelReg);
			this->panel9->Controls->Add(this->panel3);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel9->Location = System::Drawing::Point(0, 39);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(835, 561);
			this->panel9->TabIndex = 12;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->panel11);
			this->panel3->Controls->Add(this->panel10);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(835, 561);
			this->panel3->TabIndex = 11;
			// 
			// panel11
			// 
			this->panel11->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel11->Location = System::Drawing::Point(200, 0);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(635, 100);
			this->panel11->TabIndex = 1;
			// 
			// panel10
			// 
			this->panel10->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel10->Location = System::Drawing::Point(0, 0);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(200, 561);
			this->panel10->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(835, 600);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel8);
			this->Font = (gcnew System::Drawing::Font(L"Ink Free", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::DarkCyan;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panelReg->ResumeLayout(false);
			this->panelReg->PerformLayout();
			this->LoginPanel->ResumeLayout(false);
			this->LoginPanel->PerformLayout();
			this->panel8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   LoginForm loginForm;
		   RegisterForm registerForm;
		   
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	loginForm.setLiveUserName(UserNameBox->Text);
	loginForm.setLivePassword(PasswordBox->Text);
	loginForm.loginCheck();

	if (loginForm.isUserMatched == 1) {
		panel3->Show();
		panelReg->Hide();
		LoginPanel->Hide();
	}
	else {
		MessageBox::Show("user name or password is incorrect", "Done", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}

}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		registerForm.setRegisterState(0);
		registerForm.setLiveID(IDBox->Text);
		registerForm.setLiveUserName(ResgisterUserNameBox->Text);
		registerForm.setLivePassword(RegisterPasswordBox->Text);
		registerForm.setLivePasswordConfirm(passwordConfirmBox->Text);
		registerForm.RegisterCheck();
		if (registerForm.getRegisterState() == 1)
			MessageBox::Show(" user name already exists", "Done", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else if (registerForm.getRegisterState() == 2)
			MessageBox::Show(" passwords doesn't match", "Done", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	panelReg->Hide();
	LoginPanel->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	LoginPanel->Hide();
	panelReg->Show();
	

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Environment::Exit(0);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (WindowState == FormWindowState::Maximized) {
		WindowState = FormWindowState::Normal;
	}
	else {
		WindowState = FormWindowState::Maximized;
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	WindowState = FormWindowState::Minimized;
}
	   
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void FavouriteButton_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void FavouriteButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void HomePanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
