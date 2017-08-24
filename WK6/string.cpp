# include <iostream>
# include <string>

using namespace std;

int main () {
    
    // string firstName, lastName, myFullName, friendsFullName;
    string myFullName, friendsFullName;

    cout << "Enter your first name  " << endl;
    // cin >> firstName;
    cout << "Enter your last name  " << endl;
    // cin >> lastName;
   getline(cin, myFullName);

    //myFullName = firstName + " " + lastName;

    cout << endl;


    cout << "Enter your friend's first name  " << endl;
    //cin >> firstName;
    cout << "Enter your friend's last name  " << endl;
    //cin >> lastName;
    getline(cin, friendsFullName);

    //friendsFullName = firstName + " " + lastName;
    cout << endl;

    int myLength = myFullName.length();
    int friendsLength = friendsFullName.length();
    
    if (myLength > friendsLength) {
       cout << myFullName << " is longer than " << friendsFullName << " with " << myLength - friendsLength << "characters" << endl; 
    } else if (myLength < friendsLength) {
       cout << friendsFullName << " is longer than " << myFullName << " with " << friendsLength - myLength << "characters" << endl; 
    } else {
       cout << friendsFullName << " and " << myFullName << " have same sizes!" << endl; 
    }
    cout << endl;

    // if (myFullName.length() > friendsFullName.length()) {
    //    cout << myFullName << " is longer than " << friendsFullName << " with " << myFullName.length() - friendsFullName.length() << "characters"; 
    // } else if (myFullName.length() < friendsFullName.length()) {
    //    cout << friendsFullName << " is longer than " << myFullName << " with " << friendsFullName.length() - myFullName.length() << "characters"; 
    // } else {
    //    cout << friendsFullName << " and " << myFullName << "have same sizes!" << endl; 
    // }

    system("pause");
    return 0;
}