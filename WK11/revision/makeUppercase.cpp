//include "stdafx.h"
#include<string>
#include"makeUppercase.h"

string makeUppercase(string str) {
    for(int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}