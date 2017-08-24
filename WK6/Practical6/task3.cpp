# include <iostream>
# include <string>


using namespace std;

int main () {
    
    string str;
    int i;

    cout << "Please enter in a word: ";
    cin >> str;
    cout << endl;
    
    string orderStr = str;
    string reverseStr;
    
    for (i = str.length() - 1; i >= 0; i--) {
        //cout << str[i] << endl;
        reverseStr = str[i];
    
    }
    if ( orderStr == reverseStr) {
            cout << "This is a palindrome!!";
        } else {
            cout << orderStr << " is a good word!!";
        }

    cout << endl << endl;

    system("pause");
    return 0;
}