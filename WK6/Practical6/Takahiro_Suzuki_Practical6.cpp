//=====================================
//task1
# include <iostream>
# include <string>
# include <ctype.h>

using namespace std;

int main() {
    
    string convert;

    cout << "Hey, enter any word with uppercase and lowercase. " << endl;
    //cin >> convert;
    getline(cin, convert);

    for (int i = 0; i < convert.length(); i++) {
        if (islower(convert[i]))
          convert[i] = toupper(convert[i]);
        else
          convert[i] = tolower(convert[i]);
    }

    cout << "Your input changed as following!!" << endl;
            
    cout << convert << endl;

    system("pause");
    return 0;
}
//=====================================
//task2
# include <iostream>
# include <string>


using namespace std;

int main () {
    
    string sentence;
    char character;

    cout << "Please enter in a sentence: " << endl;
    cin >> sentence;

    cout << "Please enter a character: " << endl;
    cin >> character;
    
    cout << "I found " << character << " at position " << sentence.find(character, 0) << endl;
        


    system("pause");
    return 0;
}
//=====================================
//task3
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
//=====================================
//task4
# include <iostream>
# include <string>
# include <cmath>



using namespace std;

int main () {
    
    string sentence;
    string searchWord;
    int n;

    cout << "Please enter in a sentence: ";
    cin >> sentence;

    cout << "Please enter in search sentence: ";
    cin >> searchWord;
    
    //n = sentence.find(searchWord, 0);

    for (int i = 0; i < sentence.length(); i++) {
       n = sentence.find(searchWord, 0);
    }
    
    cout << "Found search " << searchWord << " " << n << " times in the sentence." << endl;
    
    system("pause");
    return 0;
}