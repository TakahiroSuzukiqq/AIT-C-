# include <iostream>
# include <string>

using namespace std;

void printMenu();
string AskInput();
string ConvertCase(string);
string ChangeChar(string, char, char);

int main() {
    
    string line;
    char c1, c2, doYouWantToContinue = 'y';
    int option;

    cout << "Enter One String (End it by '.'): " << endl; 
    line = AskInput();

    while(doYouWantToContinue == 'y' || doYouWantToContinue == 'Y' ) {
      
        printMenu();

        cout << "Select your Option: ";
        cin >> option;

        switch(option) {
            case 1 :
               cout << "Enter One String End it by '.'): ";
               line = AskInput();
               break;
            
            case 2 :
               //convert it and update it
               line = ConvertCase(line);
               //display the converted string
               cout << "The Converted String is: " << line << endl << endl;
               break;
            
            case 3 :
               //ask for the character to change it to '$'
               cout << "Enter a Character You're Looking For: ";
               cin >> c1;
               //ask for the character to change
               cout << "Enter a Character You want to Replace with: ";
               cin >> c2;
               
               //look for character c and change it to '$'
               line = ChangeChar(line, c1, c2);
               cout << "The Changed String is: " << line << endl << endl;
               break;
            
            case 4 :
               //Exit
               doYouWantToContinue = 'n';
              break;
            
            default :
               cout << "Wrong INPUT!! \n\n TRY AGAIN!! \n\n";
               break;
        }
    }

    system("pause");
    return 0;
}


string AskInput() {
    string line;
    getline(cin, line, '.');  //default delimiter is \n
    return line;
}


void printMenu(void) { 
    cout << "1. Get a Line from User \n"
         << "2. Convert LowerCase and UpperCase \n"
         << "3. Change One Character to Another Character \n"
         << "4. Exit \n \n";
}

string ConvertCase(string str) {
    for (int i = 0; i < str.length(); i++) {    //convert the characters one by one
      if (islower(str[i])) {
         str[i] = toupper(str[i]);
      } else {
         str[i] = tolower(str[i]);
      }
    }
    return str;
}

string ChangeChar(string str, char c1, char c2) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i]== tolower(c1) || str[i] == toupper(c1))
            //str[i] = 'c2';
            str[i] = c2;
    }
    return str;
}