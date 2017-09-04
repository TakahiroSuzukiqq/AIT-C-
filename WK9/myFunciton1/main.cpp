#include <iostream>
#include "myfile.h"

using namespace std;

//void myFunction1(int, char)              //this function header is transferred to the myfile.h

int main() {
    int num;
    char ch;
    cout << "Enter a Number: ";
    cin >> num;

    cout << "Enter a Character:";
    cin >> ch;

    myFunction1(num, ch);
    
    system("pause");
    return 0;
}

// void myFunction1(int num, char c) {     //this function body is transferred to the myfile.cpp
//    for (int i = 0; i < num; i++) {
//        cout << c;
//    }
//    cout << endl;
// }
            