//include"stdafx.h"
#include"replaceOccurances.h"

string replaceOccurances(string mainStr, string search, char ch) {
    //int counter = 0, 
    int pos = 0;
    while (pos != -1) {
        pos = mainStr.find(search, pos);
        if(pos != -1) { //found a match, if not much, then -1 will be showed
            for (int i = pos; i < pos + search.length(); i++) {//replace characters
            mainStr[i] = ch;
            //pos = pos + search.length();
            pos += search.length();
            //pos = mainStr.find(search, pos);
            }
        }
    }
    //return counter;
    return mainStr;
}