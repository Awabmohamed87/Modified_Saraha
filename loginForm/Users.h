#pragma once
#include <string>
#include<vector>
#include"Message.h"
using namespace std;
class Users
{
public:
	string Username;
	string password;
	string ID;
	string ListOfContacts;
	vector<Message>Messages;
	void Checkmessages();
	void uploadMessages(Users currentUser);
};

