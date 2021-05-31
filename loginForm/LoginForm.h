#pragma once
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include"Users.h"

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
	void updateUsers(Users User);
	Users getLiveUser();
};

