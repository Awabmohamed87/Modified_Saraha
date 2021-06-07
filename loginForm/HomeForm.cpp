#include "HomeForm.h"
#include"Users.h"

using namespace std;

Users liveuser;

void HomeForm::setLiveUser(Users user)
{
	liveuser = user;
}

void HomeForm::uploadUserMessages()
{
	liveuser.uploadMessages(liveuser);
}

string HomeForm::getLiveUserID()
{
	return liveuser.ID;
}

Users HomeForm::getLiveUser()
{
	return liveuser;
}

string HomeForm::getMessage(Users sUser, int i)
{
	return sUser.Messages[i].content;
}
