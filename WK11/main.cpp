#include<iostream>
#include<string>
//#include RANGE 27;

using namespace std;

int main() {
    
    char arrOriginal[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};
    char arrCodeBook[27] = {'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a', '#'};
    //char arrOriginal[RANGE] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};
    //char arrCodeBook[RANGE] = {'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a', '#'};
    char character;
    char ch,codedCh;
    string origLine, codedLine = "";
    
    cout << "Enter a character" << endl;
    cin >> ch;
    
    cout << "Enter One Line for Encoding : ";
    getline(cin, origLine);

    cout << "\n";
    
    for(int i = 0; i < 27; i++) {
        if ( ch == arrOriginal[i]) {
            codedCh = arrCodeBook[i];
        }
    }

    //Encoding
    for(int n = 0; n < origLine.length(); n++) {                                             //searching for each character of the line one by one
       //rigLine[n] == tolower(arrOriginal[index]);
       for(int index = 0; index < 27; index++) {
           if(origLine[n] == arrOriginal[index] || origLine[n] == toupper(arrOriginal[index]) {
               codedLine = codedLine + arrCodeBook[index];
           }
       }
    }

    //Decoding
    origLine = " ";
    for(int n = 0; n < origLine.length(); n++) {
       for(int index = 0; index < 27; index++) {
           if(codedLine[n] == arrCodeBook[index] || codedLine[n] == toupper(arrCodeBook[index]) {
               origLine = origLine + arrOriginal[index];
           }
       }
    }

    cout << "The Encoded Character is : " << codedCh << endl;
    cout << "And The Encoded Line is : " << codedLine << endl;
    cout << "And The Decoded Line is : " << origLine << endl << endl;

    system("pause");
    return 0;
}