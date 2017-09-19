#include<iostream>
#include<string>

using namespace std; 

int main() {
    
    string anyString;
    int vCounter = 0;
    int position = 0;
    int lCounter = 0, uCounter = 0, nCounter = 0;

    cout << "Enter Any String that you like to enter : ";
    getline (cin, anyString);
    cout << endl;
    
    for(int i = 0; i < anyString.length(); i++) {
        if((anyString[i]) == 'a') {
            position = position + anyString.length();
            vCounter++;
        } else if((anyString[i]) == 'e')  {
            position = position + anyString.length();
            vCounter++;
        } else if((anyString[i]) == 'i')  {
            position = position + anyString.length();
            vCounter++;
        } else if((anyString[i]) == 'o')  {
            position = position + anyString.length();
            vCounter++;
        } else if((anyString[i]) == 'u')  {
            position = position + anyString.length();
            vCounter++;
        }
    }

    for (int i = 0; i < anyString.length(); i++) {
        if (islower(anyString[i])) {
          uCounter++;
        } else if (isupper(anyString[i])) {
          lCounter++;
        } else if (isdigit(anyString[i])) {
            nCounter++;
        }
    }
   
    cout << "• Length: " << anyString.length() <<endl;
    cout << "• Number of vowels: " << vCounter << endl;
    cout << "• Number of lower case characters: " << lCounter << endl;
    cout << "• Number of upper case characters: " << uCounter << endl;
    cout << "• Number of numerals: " << nCounter << endl << endl;

    system("pause");
    return 0;
}
