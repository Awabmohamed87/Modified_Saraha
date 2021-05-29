#pragma once
#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using namespace System;
using namespace System::Windows::Forms;


ref class LoginForm
{

public:
	int x = 10;
	String^ liveUserName;
	String^ livePassword;
	String^ isUserMatched = "false";
	LoginForm::LoginForm();
	void loginCheck();
	void setLiveUserName(String^ name);
	void setLivePassword(String^ pass);
};

