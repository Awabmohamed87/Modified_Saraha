#include "HomeForm.h"
#include"Users.h"

using namespace std;

Users liveuser;

void HomeForm::setLiveUser(Users user)
{
	liveuser = user;
}

string HomeForm::getLiveUserID()
{
	return liveuser.ID;
}
