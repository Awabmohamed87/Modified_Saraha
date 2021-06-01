#include "LoginForm.h"
#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include <utility>
#include "Users.h"
#include "RegisterForm.h"
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using System::Runtime::InteropServices::Marshal;

ifstream UsersReader("users.txt");
Users tempUser, LiveUser;

vector<Users>user;

static std::string toStandardString(System::String^ string)
{
    System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
    char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
    std::string returnString(charPointer, string->Length);
    Marshal::FreeHGlobal(pointer);

    return returnString;
}

LoginForm::LoginForm() {

    string s1, s2, s3,s4;
    while (UsersReader) {
        UsersReader >> s1;
        UsersReader >> s2;
        UsersReader >> s3;
        if (s1 == "-1")
            break;
        tempUser.Username = s1;
        tempUser.password = s2;
        tempUser.ID = s3;
        user.push_back(tempUser);
    }
    user.pop_back();
    UsersReader.close();
}
void LoginForm::loginCheck() {
    isUserMatched = 0;
    for (int i = 0; i < user.size();i++) {
        if (liveUserName == gcnew String(user[i].Username.c_str())) {
            if (livePassword == gcnew String(user[i].password.c_str())) {
                isUserMatched = 1;
                LiveUser.Username = user[i].Username;
                LiveUser.password = user[i].password;
                LiveUser.ID = user[i].ID;
                break;
            }
        }
    }
   
}

void LoginForm::setLiveUserName(String^ name) {
    liveUserName = name;
  
}

void LoginForm::setLivePassword(String^ pass) {
    livePassword = pass;
   
}

void LoginForm::updateUsers(Users User)
{
    user.push_back(User);
}

Users LoginForm::getLiveUser()
{
    return LiveUser;
}
