//include"stdafx.h"
#include"updateString.h"

string updateString() {
   string str;
   cin.ignore();//clear the keyboard buffer
   getline(cin, str);
   
   return str;
}