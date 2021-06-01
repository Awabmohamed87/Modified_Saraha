#pragma once
#include"Users.h"
ref class HomeForm
{
public:
	void setLiveUser(Users user);
	void uploadUserMesages();
	string getLiveUserID();
	Users getLiveUser();
	string getMessage(Users sUser,int i);
};

