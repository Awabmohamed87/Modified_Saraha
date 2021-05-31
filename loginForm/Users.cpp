#include "Users.h"
#include<fstream>

using namespace std;

ofstream messageWriter("users.txt", ios::app);
ifstream messageReader;

	void Users::Checkmessages()
	{

	}

	void Users::uploadMessages(Users currentUser)
	{

		messageReader.open("Data/Messages/"+currentUser.Username+".txt");
		if (!messageReader) {
			ofstream createTheFile("Data/Messages/" + currentUser.Username+".txt",ios::app);
		}
		else {

			bool isContentRead = false;
			string s;

			Message tempMessage;
			while (messageReader) {
				if (!isContentRead) {
					messageReader >> s;
					if (s == "***") { isContentRead = true; }
					else if (s == "-1")
						break;
					else
					tempMessage.content += s;
					tempMessage.content += " ";
				}
				else {
					messageReader >> tempMessage.receiver;
					messageReader >> tempMessage.sender;
					

					Messages.push_back(tempMessage);
					isContentRead = false;
					tempMessage.content.clear();
				}
			}
			for (int i = 0; i < Messages.size();i++) {
				cout << Messages[i].content << endl<<Messages[i].sender<<" "<<Messages[i].receiver<<endl;
			}
		}
	}


