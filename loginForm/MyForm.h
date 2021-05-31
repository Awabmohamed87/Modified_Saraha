#pragma once
#include <iostream>
#include "LoginForm.h"
#include "RegisterForm.h"
#include"HomeForm.h"

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
			register_Panel->Hide();
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



	private: System::Windows::Forms::TextBox^ UserNameBox;




	private: System::Windows::Forms::TextBox^ PasswordBox;
	private: System::Windows::Forms::Button^ LoginButton;
	private: System::Windows::Forms::Button^ RegisterButton;
	private: System::Windows::Forms::Panel^ register_Panel;






	private: System::Windows::Forms::TextBox^ passwordConfirmBox;



	private: System::Windows::Forms::TextBox^ RegisterPasswordBox;



	private: System::Windows::Forms::TextBox^ ResgisterUserNameBox;



	private: System::Windows::Forms::TextBox^ IDBox;
	private: System::Windows::Forms::Button^ register_Button;




	private: System::Windows::Forms::Button^ loginPage_Button;

	private: System::Windows::Forms::Panel^ LoginPanel;





	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Button^ exit_Button_regist;




	private: System::Windows::Forms::Panel^ Home_Panel;
	private: System::Windows::Forms::Button^ exit_Button_login;
	private: System::Windows::Forms::Button^ exit_Button_home;
	private: System::Windows::Forms::TextBox^ search_TextBox;

	private: System::Windows::Forms::Button^ search_Button;
	private: System::Windows::Forms::Button^ add_Button;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ logout_Button;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ SentM_Button;

	private: System::Windows::Forms::Button^ receivedM_Button;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ favorites_Button;
	private: System::Windows::Forms::Panel^ contact_Panel;
	private: System::Windows::Forms::Panel^ homeContainer_Panel;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ IDLabel;

	private: System::Windows::Forms::Button^ button1;























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
			this->UserNameBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordBox = (gcnew System::Windows::Forms::TextBox());
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->RegisterButton = (gcnew System::Windows::Forms::Button());
			this->register_Panel = (gcnew System::Windows::Forms::Panel());
			this->exit_Button_regist = (gcnew System::Windows::Forms::Button());
			this->register_Button = (gcnew System::Windows::Forms::Button());
			this->loginPage_Button = (gcnew System::Windows::Forms::Button());
			this->passwordConfirmBox = (gcnew System::Windows::Forms::TextBox());
			this->RegisterPasswordBox = (gcnew System::Windows::Forms::TextBox());
			this->ResgisterUserNameBox = (gcnew System::Windows::Forms::TextBox());
			this->IDBox = (gcnew System::Windows::Forms::TextBox());
			this->LoginPanel = (gcnew System::Windows::Forms::Panel());
			this->exit_Button_login = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->Home_Panel = (gcnew System::Windows::Forms::Panel());
			this->contact_Panel = (gcnew System::Windows::Forms::Panel());
			this->homeContainer_Panel = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->IDLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->search_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->search_Button = (gcnew System::Windows::Forms::Button());
			this->favorites_Button = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SentM_Button = (gcnew System::Windows::Forms::Button());
			this->receivedM_Button = (gcnew System::Windows::Forms::Button());
			this->logout_Button = (gcnew System::Windows::Forms::Button());
			this->add_Button = (gcnew System::Windows::Forms::Button());
			this->exit_Button_home = (gcnew System::Windows::Forms::Button());
			this->register_Panel->SuspendLayout();
			this->LoginPanel->SuspendLayout();
			this->panel9->SuspendLayout();
			this->Home_Panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// UserNameBox
			// 
			this->UserNameBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(146)));
			this->UserNameBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UserNameBox->Font = (gcnew System::Drawing::Font(L"Asap Medium", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserNameBox->ForeColor = System::Drawing::Color::White;
			this->UserNameBox->Location = System::Drawing::Point(199, 181);
			this->UserNameBox->Name = L"UserNameBox";
			this->UserNameBox->Size = System::Drawing::Size(192, 25);
			this->UserNameBox->TabIndex = 3;
			this->UserNameBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// PasswordBox
			// 
			this->PasswordBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(146)));
			this->PasswordBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PasswordBox->Font = (gcnew System::Drawing::Font(L"Asap Medium", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordBox->ForeColor = System::Drawing::Color::White;
			this->PasswordBox->Location = System::Drawing::Point(200, 221);
			this->PasswordBox->Name = L"PasswordBox";
			this->PasswordBox->Size = System::Drawing::Size(191, 25);
			this->PasswordBox->TabIndex = 5;
			this->PasswordBox->UseSystemPasswordChar = true;
			this->PasswordBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// LoginButton
			// 
			this->LoginButton->BackColor = System::Drawing::Color::Transparent;
			this->LoginButton->FlatAppearance->BorderSize = 0;
			this->LoginButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->LoginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoginButton->Font = (gcnew System::Drawing::Font(L"Asap", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginButton->ForeColor = System::Drawing::Color::White;
			this->LoginButton->Location = System::Drawing::Point(235, 319);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(114, 28);
			this->LoginButton->TabIndex = 7;
			this->LoginButton->Text = L"Login";
			this->LoginButton->UseVisualStyleBackColor = false;
			this->LoginButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// RegisterButton
			// 
			this->RegisterButton->BackColor = System::Drawing::Color::Transparent;
			this->RegisterButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->RegisterButton->FlatAppearance->BorderSize = 0;
			this->RegisterButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->RegisterButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gainsboro;
			this->RegisterButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RegisterButton->Font = (gcnew System::Drawing::Font(L"Asap", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegisterButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(146)));
			this->RegisterButton->Location = System::Drawing::Point(295, 265);
			this->RegisterButton->Name = L"RegisterButton";
			this->RegisterButton->Size = System::Drawing::Size(81, 24);
			this->RegisterButton->TabIndex = 8;
			this->RegisterButton->Text = L"Register";
			this->RegisterButton->UseVisualStyleBackColor = false;
			this->RegisterButton->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// register_Panel
			// 
			this->register_Panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"register_Panel.BackgroundImage")));
			this->register_Panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->register_Panel->Controls->Add(this->exit_Button_regist);
			this->register_Panel->Controls->Add(this->register_Button);
			this->register_Panel->Controls->Add(this->loginPage_Button);
			this->register_Panel->Controls->Add(this->passwordConfirmBox);
			this->register_Panel->Controls->Add(this->RegisterPasswordBox);
			this->register_Panel->Controls->Add(this->ResgisterUserNameBox);
			this->register_Panel->Controls->Add(this->IDBox);
			this->register_Panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->register_Panel->Location = System::Drawing::Point(0, 0);
			this->register_Panel->Name = L"register_Panel";
			this->register_Panel->Size = System::Drawing::Size(900, 600);
			this->register_Panel->TabIndex = 9;
			this->register_Panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// exit_Button_regist
			// 
			this->exit_Button_regist->BackColor = System::Drawing::Color::Transparent;
			this->exit_Button_regist->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exit_Button_regist.BackgroundImage")));
			this->exit_Button_regist->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->exit_Button_regist->FlatAppearance->BorderSize = 0;
			this->exit_Button_regist->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit_Button_regist->Location = System::Drawing::Point(12, 12);
			this->exit_Button_regist->Name = L"exit_Button_regist";
			this->exit_Button_regist->Size = System::Drawing::Size(22, 27);
			this->exit_Button_regist->TabIndex = 0;
			this->exit_Button_regist->UseVisualStyleBackColor = false;
			this->exit_Button_regist->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// register_Button
			// 
			this->register_Button->BackColor = System::Drawing::Color::Transparent;
			this->register_Button->FlatAppearance->BorderSize = 0;
			this->register_Button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->register_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->register_Button->Font = (gcnew System::Drawing::Font(L"Asap", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->register_Button->ForeColor = System::Drawing::Color::White;
			this->register_Button->Location = System::Drawing::Point(278, 355);
			this->register_Button->Name = L"register_Button";
			this->register_Button->Size = System::Drawing::Size(116, 29);
			this->register_Button->TabIndex = 18;
			this->register_Button->Text = L"Register";
			this->register_Button->UseVisualStyleBackColor = false;
			this->register_Button->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// loginPage_Button
			// 
			this->loginPage_Button->BackColor = System::Drawing::Color::Transparent;
			this->loginPage_Button->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->loginPage_Button->FlatAppearance->BorderSize = 0;
			this->loginPage_Button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gainsboro;
			this->loginPage_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginPage_Button->Font = (gcnew System::Drawing::Font(L"Asap", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginPage_Button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(146)));
			this->loginPage_Button->Location = System::Drawing::Point(346, 319);
			this->loginPage_Button->Name = L"loginPage_Button";
			this->loginPage_Button->Size = System::Drawing::Size(69, 25);
			this->loginPage_Button->TabIndex = 17;
			this->loginPage_Button->Text = L"Login";
			this->loginPage_Button->UseVisualStyleBackColor = false;
			this->loginPage_Button->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// passwordConfirmBox
			// 
			this->passwordConfirmBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(146)));
			this->passwordConfirmBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordConfirmBox->Font = (gcnew System::Drawing::Font(L"Asap Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordConfirmBox->ForeColor = System::Drawing::Color::White;
			this->passwordConfirmBox->Location = System::Drawing::Point(244, 275);
			this->passwordConfirmBox->Name = L"passwordConfirmBox";
			this->passwordConfirmBox->Size = System::Drawing::Size(191, 22);
			this->passwordConfirmBox->TabIndex = 15;
			this->passwordConfirmBox->UseSystemPasswordChar = true;
			// 
			// RegisterPasswordBox
			// 
			this->RegisterPasswordBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(146)));
			this->RegisterPasswordBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RegisterPasswordBox->Font = (gcnew System::Drawing::Font(L"Asap Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegisterPasswordBox->ForeColor = System::Drawing::Color::White;
			this->RegisterPasswordBox->Location = System::Drawing::Point(244, 236);
			this->RegisterPasswordBox->Name = L"RegisterPasswordBox";
			this->RegisterPasswordBox->Size = System::Drawing::Size(184, 22);
			this->RegisterPasswordBox->TabIndex = 12;
			this->RegisterPasswordBox->UseSystemPasswordChar = true;
			// 
			// ResgisterUserNameBox
			// 
			this->ResgisterUserNameBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(146)));
			this->ResgisterUserNameBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ResgisterUserNameBox->Font = (gcnew System::Drawing::Font(L"Asap Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResgisterUserNameBox->ForeColor = System::Drawing::Color::White;
			this->ResgisterUserNameBox->Location = System::Drawing::Point(245, 198);
			this->ResgisterUserNameBox->Name = L"ResgisterUserNameBox";
			this->ResgisterUserNameBox->Size = System::Drawing::Size(190, 22);
			this->ResgisterUserNameBox->TabIndex = 9;
			// 
			// IDBox
			// 
			this->IDBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(146)));
			this->IDBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->IDBox->Font = (gcnew System::Drawing::Font(L"Asap Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDBox->ForeColor = System::Drawing::Color::White;
			this->IDBox->Location = System::Drawing::Point(246, 159);
			this->IDBox->Name = L"IDBox";
			this->IDBox->Size = System::Drawing::Size(182, 22);
			this->IDBox->TabIndex = 6;
			// 
			// LoginPanel
			// 
			this->LoginPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LoginPanel.BackgroundImage")));
			this->LoginPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->LoginPanel->Controls->Add(this->exit_Button_login);
			this->LoginPanel->Controls->Add(this->RegisterButton);
			this->LoginPanel->Controls->Add(this->LoginButton);
			this->LoginPanel->Controls->Add(this->PasswordBox);
			this->LoginPanel->Controls->Add(this->UserNameBox);
			this->LoginPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LoginPanel->Location = System::Drawing::Point(0, 0);
			this->LoginPanel->Name = L"LoginPanel";
			this->LoginPanel->Size = System::Drawing::Size(900, 600);
			this->LoginPanel->TabIndex = 10;
			// 
			// exit_Button_login
			// 
			this->exit_Button_login->BackColor = System::Drawing::Color::Transparent;
			this->exit_Button_login->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exit_Button_login.BackgroundImage")));
			this->exit_Button_login->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->exit_Button_login->FlatAppearance->BorderSize = 0;
			this->exit_Button_login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit_Button_login->Location = System::Drawing::Point(12, 12);
			this->exit_Button_login->Name = L"exit_Button_login";
			this->exit_Button_login->Size = System::Drawing::Size(22, 27);
			this->exit_Button_login->TabIndex = 9;
			this->exit_Button_login->UseVisualStyleBackColor = false;
			this->exit_Button_login->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->LoginPanel);
			this->panel9->Controls->Add(this->Home_Panel);
			this->panel9->Controls->Add(this->register_Panel);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel9->Location = System::Drawing::Point(0, 0);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(900, 600);
			this->panel9->TabIndex = 12;
			// 
			// Home_Panel
			// 
			this->Home_Panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Home_Panel.BackgroundImage")));
			this->Home_Panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Home_Panel->Controls->Add(this->contact_Panel);
			this->Home_Panel->Controls->Add(this->homeContainer_Panel);
			this->Home_Panel->Controls->Add(this->label4);
			this->Home_Panel->Controls->Add(this->label5);
			this->Home_Panel->Controls->Add(this->label3);
			this->Home_Panel->Controls->Add(this->IDLabel);
			this->Home_Panel->Controls->Add(this->label2);
			this->Home_Panel->Controls->Add(this->label1);
			this->Home_Panel->Controls->Add(this->search_TextBox);
			this->Home_Panel->Controls->Add(this->search_Button);
			this->Home_Panel->Controls->Add(this->favorites_Button);
			this->Home_Panel->Controls->Add(this->button1);
			this->Home_Panel->Controls->Add(this->SentM_Button);
			this->Home_Panel->Controls->Add(this->receivedM_Button);
			this->Home_Panel->Controls->Add(this->logout_Button);
			this->Home_Panel->Controls->Add(this->add_Button);
			this->Home_Panel->Controls->Add(this->exit_Button_home);
			this->Home_Panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Home_Panel->Location = System::Drawing::Point(0, 0);
			this->Home_Panel->Name = L"Home_Panel";
			this->Home_Panel->Size = System::Drawing::Size(900, 600);
			this->Home_Panel->TabIndex = 11;
			// 
			// contact_Panel
			// 
			this->contact_Panel->Location = System::Drawing::Point(33, 177);
			this->contact_Panel->Name = L"contact_Panel";
			this->contact_Panel->Size = System::Drawing::Size(201, 346);
			this->contact_Panel->TabIndex = 6;
			// 
			// homeContainer_Panel
			// 
			this->homeContainer_Panel->Location = System::Drawing::Point(241, 116);
			this->homeContainer_Panel->Name = L"homeContainer_Panel";
			this->homeContainer_Panel->Size = System::Drawing::Size(612, 436);
			this->homeContainer_Panel->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Raleway SemiBold", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(559, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Favorites";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Raleway SemiBold", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(643, 93);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Send a Message";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Raleway SemiBold", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(438, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Sent Messages";
			// 
			// IDLabel
			// 
			this->IDLabel->AutoSize = true;
			this->IDLabel->BackColor = System::Drawing::Color::Transparent;
			this->IDLabel->Font = (gcnew System::Drawing::Font(L"Asap SemiBold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->IDLabel->Location = System::Drawing::Point(74, 61);
			this->IDLabel->Name = L"IDLabel";
			this->IDLabel->Size = System::Drawing::Size(29, 35);
			this->IDLabel->TabIndex = 4;
			this->IDLabel->Text = L"2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Raleway SemiBold", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(290, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Received Messages";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Raleway SemiBold", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(763, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"LogOut";
			// 
			// search_TextBox
			// 
			this->search_TextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->search_TextBox->Font = (gcnew System::Drawing::Font(L"Asap", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_TextBox->Location = System::Drawing::Point(49, 146);
			this->search_TextBox->Multiline = true;
			this->search_TextBox->Name = L"search_TextBox";
			this->search_TextBox->Size = System::Drawing::Size(111, 19);
			this->search_TextBox->TabIndex = 3;
			this->search_TextBox->Tag = L"Search";
			// 
			// search_Button
			// 
			this->search_Button->BackColor = System::Drawing::Color::Transparent;
			this->search_Button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_Button.BackgroundImage")));
			this->search_Button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->search_Button->FlatAppearance->BorderSize = 0;
			this->search_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->search_Button->Location = System::Drawing::Point(176, 144);
			this->search_Button->Name = L"search_Button";
			this->search_Button->Size = System::Drawing::Size(22, 23);
			this->search_Button->TabIndex = 2;
			this->search_Button->UseVisualStyleBackColor = false;
			// 
			// favorites_Button
			// 
			this->favorites_Button->BackColor = System::Drawing::Color::Transparent;
			this->favorites_Button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"favorites_Button.BackgroundImage")));
			this->favorites_Button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->favorites_Button->FlatAppearance->BorderSize = 0;
			this->favorites_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->favorites_Button->Location = System::Drawing::Point(559, 50);
			this->favorites_Button->Name = L"favorites_Button";
			this->favorites_Button->Size = System::Drawing::Size(57, 38);
			this->favorites_Button->TabIndex = 2;
			this->favorites_Button->UseVisualStyleBackColor = false;
			this->favorites_Button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(653, 46);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 41);
			this->button1->TabIndex = 2;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// SentM_Button
			// 
			this->SentM_Button->BackColor = System::Drawing::Color::Transparent;
			this->SentM_Button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SentM_Button.BackgroundImage")));
			this->SentM_Button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->SentM_Button->FlatAppearance->BorderSize = 0;
			this->SentM_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SentM_Button->Location = System::Drawing::Point(446, 43);
			this->SentM_Button->Name = L"SentM_Button";
			this->SentM_Button->Size = System::Drawing::Size(77, 41);
			this->SentM_Button->TabIndex = 2;
			this->SentM_Button->UseVisualStyleBackColor = false;
			this->SentM_Button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// receivedM_Button
			// 
			this->receivedM_Button->BackColor = System::Drawing::Color::Transparent;
			this->receivedM_Button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"receivedM_Button.BackgroundImage")));
			this->receivedM_Button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->receivedM_Button->FlatAppearance->BorderSize = 0;
			this->receivedM_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->receivedM_Button->Location = System::Drawing::Point(318, 40);
			this->receivedM_Button->Name = L"receivedM_Button";
			this->receivedM_Button->Size = System::Drawing::Size(64, 56);
			this->receivedM_Button->TabIndex = 2;
			this->receivedM_Button->UseVisualStyleBackColor = false;
			this->receivedM_Button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// logout_Button
			// 
			this->logout_Button->BackColor = System::Drawing::Color::Transparent;
			this->logout_Button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logout_Button.BackgroundImage")));
			this->logout_Button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->logout_Button->FlatAppearance->BorderSize = 0;
			this->logout_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logout_Button->Location = System::Drawing::Point(765, 46);
			this->logout_Button->Name = L"logout_Button";
			this->logout_Button->Size = System::Drawing::Size(48, 45);
			this->logout_Button->TabIndex = 2;
			this->logout_Button->UseVisualStyleBackColor = false;
			// 
			// add_Button
			// 
			this->add_Button->BackColor = System::Drawing::Color::Transparent;
			this->add_Button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_Button.BackgroundImage")));
			this->add_Button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->add_Button->FlatAppearance->BorderSize = 0;
			this->add_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_Button->Location = System::Drawing::Point(208, 144);
			this->add_Button->Name = L"add_Button";
			this->add_Button->Size = System::Drawing::Size(32, 23);
			this->add_Button->TabIndex = 2;
			this->add_Button->UseVisualStyleBackColor = false;
			// 
			// exit_Button_home
			// 
			this->exit_Button_home->BackColor = System::Drawing::Color::Transparent;
			this->exit_Button_home->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exit_Button_home.BackgroundImage")));
			this->exit_Button_home->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->exit_Button_home->FlatAppearance->BorderSize = 0;
			this->exit_Button_home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit_Button_home->Location = System::Drawing::Point(7, 6);
			this->exit_Button_home->Name = L"exit_Button_home";
			this->exit_Button_home->Size = System::Drawing::Size(24, 32);
			this->exit_Button_home->TabIndex = 1;
			this->exit_Button_home->UseVisualStyleBackColor = false;
			this->exit_Button_home->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(900, 600);
			this->Controls->Add(this->panel9);
			this->Font = (gcnew System::Drawing::Font(L"Ink Free", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::DarkCyan;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->register_Panel->ResumeLayout(false);
			this->register_Panel->PerformLayout();
			this->LoginPanel->ResumeLayout(false);
			this->LoginPanel->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->Home_Panel->ResumeLayout(false);
			this->Home_Panel->PerformLayout();
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
		   HomeForm homeForm;
		   
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	loginForm.setLiveUserName(UserNameBox->Text);
	loginForm.setLivePassword(PasswordBox->Text);
	loginForm.loginCheck();

	if (loginForm.isUserMatched == 1) {
		homeForm.setLiveUser(loginForm.getLiveUser());
		IDLabel->Text = gcnew String(homeForm.getLiveUserID().c_str());
		Home_Panel->Show();
		register_Panel->Hide();
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
		else if (registerForm.getRegisterState() == 0) {
			loginForm.updateUsers(registerForm.getLatestUser());

		}
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	register_Panel->Hide();
	LoginPanel->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	LoginPanel->Hide();
	register_Panel->Show();


	

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
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Environment::Exit(0);
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Environment::Exit(0);
}
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
};
}
