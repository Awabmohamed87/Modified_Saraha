#include "LoginForm.h"
#include<iostream>
#include<fstream>
#include<vector>
#include <utility>

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

ifstream UsersReader("users.txt");



struct User {
    string username, password, ID;
};

vector<User>Users;

LoginForm::LoginForm() {
    User tempUser;

    string s1, s2, s3;
    tempUser.username = s1;
    tempUser.password = s2;
    tempUser.ID = s3;
    while (UsersReader) {
        UsersReader >> s1;
        UsersReader >> s2;
        UsersReader >> s3;
        if (s1 == "-1")
            break;
        Users.push_back(tempUser);
    }
    Users.pop_back();
    UsersReader.close();
}
void LoginForm::loginCheck() {

    vector<User>::iterator it;
    it = Users.begin();
    while (it != Users.end()) {
        string str1, str2, str3;
        str1 = it->username;
        str2 = it->password;
        str3 = it->ID;
        if (liveUserName == gcnew String(str1.c_str())) {
            if (livePassword == gcnew String(str2.c_str())) {
                isUserMatched = "true";
                MessageBox::Show("Message");
                break;
            }
        }
        it++;
    }
}

void LoginForm::setLiveUserName(String^ name) {
    liveUserName = name;

}

void LoginForm::setLivePassword(String^ pass) {
    livePassword = pass;

}