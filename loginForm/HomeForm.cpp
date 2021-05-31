#include "HomeForm.h"
#include"Users.h"

using namespace std;

Users liveuser;

void HomeForm::setLiveUser(Users user)
{
	liveuser = user;
}

void HomeForm::uploadUserMesages()
{
	liveuser.uploadMessages(liveuser);
}

string HomeForm::getLiveUserID()
{
	return liveuser.ID;
}
