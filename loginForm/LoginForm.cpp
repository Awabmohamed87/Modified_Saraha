#include "LoginForm.h"
#include<iostream>
#include<fstream>
#include<vector>
#include <utility>

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using System::Runtime::InteropServices::Marshal;

ifstream UsersReader("users.txt");

struct User {
    string username, password, ID;
}tempUser;

vector<User>Users;

static std::string toStandardString(System::String^ string)
{
    System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
    char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
    std::string returnString(charPointer, string->Length);
    Marshal::FreeHGlobal(pointer);

    return returnString;
}

LoginForm::LoginForm() {

    string s1, s2, s3;

    while (UsersReader) {
        UsersReader >> s1;
        UsersReader >> s2;
        UsersReader >> s3;
        if (s1 == "-1")
            break;
        tempUser.username = s1;
        tempUser.password = s2;
        tempUser.ID = s3;
        Users.push_back(tempUser);
    }
    Users.pop_back();
    UsersReader.close();
}
void LoginForm::loginCheck() {
    isUserMatched = 0;
    for (int i = 0; i < Users.size();i++) {
        cout << Users[i].username << " " << Users[i].password << endl;
        if (toStandardString(liveUserName) == Users[i].username) {
            if (toStandardString(livePassword) == Users[i].password) {
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