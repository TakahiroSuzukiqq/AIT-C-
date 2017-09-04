#include<iostream>
#include"breakDown.h"

using namespace std;

void myFunction1(int num, char c) {
    for(int i = 0; i < num; i++) {
        cout << c;
    }
    cout << endl;
}

void breakDown(string st, int num) {
    for(int i = 0; i < st.length(); i++) {
        if(i%num == 0) {
            cout << endl;

            cout << st[i];
        }
    }
}

// void showWords(string, st) {
//     for(int i = 0; i < st.length(); i++) {
//         if(st[i] == ' ') {
//             cout << endl;
//         } else {
//             cout << st[i];
//         }
//     }
// }