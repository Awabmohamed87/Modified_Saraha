#pragma once
#include"Users.h"
ref class HomeForm
{
public:
	void setLiveUser(Users user);
	void uploadUserMessages();
	void uploadUserSentMessages();
	void uploadContanctsList();
	void addContact(string s);
	void sendMessage(Messages message);
	string getContact(int i);
	Users getLiveUser();
	Messages getMessage(int i);
	Messages getSentMessage(int i);
};

