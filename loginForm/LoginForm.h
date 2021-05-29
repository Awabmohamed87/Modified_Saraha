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

	String^ liveUserName;
	String^ livePassword;
	int isUserMatched = 0;
	LoginForm::LoginForm();
	void loginCheck();
	void setLiveUserName(String^ name);
	void setLivePassword(String^ pass);
};

