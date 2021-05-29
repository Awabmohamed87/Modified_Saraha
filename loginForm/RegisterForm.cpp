#include "RegisterForm.h"
#include<iostream>
#include<fstream>
#include<vector>

using namespace std;
using System::Runtime::InteropServices::Marshal;

static std::string toStandardString(System::String^ string)
{
    System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
    char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
    std::string returnString(charPointer, string->Length);
    Marshal::FreeHGlobal(pointer);

    return returnString;
}

ofstream usersFileUpdate("users.txt", ios::app);
ifstream usersFile("users.txt");


struct User {
    string username, password, ID;
}liveUser;

vector<User>Userss;

RegisterForm::RegisterForm() {
    User tempUser;

    string s1, s2, s3;
    while (usersFile) {
        usersFile >> s1;
        usersFile >> s2;
        usersFile >> s3;
        if (s1 == "-1")
            break;

        tempUser.username = s1;
        tempUser.password = s2;
        tempUser.ID = s3;
        Userss.push_back(tempUser);
        cout << s1 << " " << s2 << " " << s3 << endl;

    }
    Userss.pop_back();
    usersFile.close();

}


void RegisterForm::setLiveID(String^ ID)
{
    liveID = ID;
}

void RegisterForm::setLiveUserName(String^ Name)
{
    liveUserName = Name;
}

void RegisterForm::setLivePassword(String^ Password)
{
    livePassword = Password;
}

void RegisterForm::setLivePasswordConfirm(String^ PasswordConfirm)
{
    livePasswordConfirm = PasswordConfirm;
}

void RegisterForm::RegisterCheck()
{
    vector<User>::iterator it;
    it = Userss.begin();
    while (it != Userss.end()) {
        string str1, str2, str3;
        str1 = it->username;
        str2 = it->password;
        str3 = it->ID;
        if (liveUserName == gcnew String(str1.c_str())) {
            cout << "user name exists" << endl;
            registerState = 1;
            break;
        }
        it++;
    }

    if (livePassword != livePasswordConfirm) {
        registerState = 2;
        cout << "passwords doesn't match" << endl;
    }
    if (registerState == 0) {
        liveUser.ID = toStandardString(liveID);
        liveUser.username = toStandardString(liveUserName);
        liveUser.password = toStandardString(livePassword);
        Userss.push_back(liveUser);
        updateFile();
    }
}

void RegisterForm::setRegisterState(int registerState)
{
    this->registerState = registerState;
}

int RegisterForm::getRegisterState()
{
    return registerState;
}

void RegisterForm::updateFile() {
    usersFileUpdate << Userss[Userss.size() - 1].username;
    usersFileUpdate << " ";
    usersFileUpdate << Userss[Userss.size() - 1].password;
    usersFileUpdate << " ";
    usersFileUpdate << Userss[Userss.size() - 1].ID;
    usersFileUpdate << "\n";
}

RegisterForm::~RegisterForm()
{
    usersFile.close();
}
