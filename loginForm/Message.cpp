#include "Message.h"
#include<fstream>

using namespace std;

ofstream messageWriter("users.txt", ios::app);
ifstream messageReader("users.txt");

