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
Users tempUser;

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
        cout << user[i].Username << " " << user[i].password << endl;
        if (toStandardString(liveUserName) == user[i].Username) {
            if (toStandardString(livePassword) == user[i].password) {
                isUserMatched = 1;
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