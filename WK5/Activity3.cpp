# include <iostream>
# include <cmath>
# include <ctype.h>

using namespace std;

int main () { 
    
    char c;

    cout << "Please enter a character \n";
    cin >> c;

    if (isdigit(c)) {
     cout << "a Number!: " << c << endl;
    
    } else if (islower(c)) {

     //cout << "a lower case CHARACTER!: " << c << toupper(c) << endl;
     cout << "a lower case CHARACTER!: " << c << endl;
     char convertedU = toupper(c);
     cout << "and its upper case character is: " << convertedU << endl;

    } else if (isupper(c)) {

     cout << "an upper case CHARACTER!: " << c << endl;
     char convertedL = tolower(c);
     cout << "and its lower case character is: " << convertedL << endl;
     //printf("%c", tolower(c));

    } else if (!ispunct(c)) {

     cout << "not a number or a lower/upper case character => other" << endl;

    } else {

     cout << "a punctuation character!" << endl;
    
    }

    system("pause");
    // return 0;
}