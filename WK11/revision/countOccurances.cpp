//#include"stdafx.h"
#include"countOccurances.h"

int countOccurances(string mainStr, string search) {
    int counter = 0, pos = 0;
    while (pos != -1) {
        pos = mainStr.find(search, pos);
        if(pos != -1) {
            counter++;
            pos = pos + search.length();
            //pos = mainStr.find(search, pos);
        }
    }
    return counter;
}