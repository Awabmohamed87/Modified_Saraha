#pragma once
#include<iostream>
#include<fstream>


using namespace System;
using namespace System::Windows::Forms;

ref class RegisterForm
{
public:
	String^ liveUserName;
	String^ livePassword;
	String^ liveID;
	String^ livePasswordConfirm;
	

	
private: 
	int registerState = 0;
	
public:
	RegisterForm();
	~RegisterForm();
	void setLiveID(String^ ID);
	void setLiveUserName(String^ Name);
	void setLivePassword(String^ Password);
	void setLivePasswordConfirm(String^ PasswordConfirm);
	void RegisterCheck();
	void setRegisterState(int registerState);
	int getRegisterState();
	void updateFile();

};

