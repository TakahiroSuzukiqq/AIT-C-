# include <iostream>
# include <string>

using namespace std;

int main () {

   string name;
    
    cout << "Enter your first name : ";
    cout << "Enter your last name : ";
    getline(cin, name);

    for (int i = 0; i < name.length(); i++) {
        if ( islower(name[i]))
          name[i] = toupper(name[i]);
        else 
          name[i] = tolower(name[i]);
    }


    cout << "Updated name is : " << name << endl << endl; 

    system("pause");
    return 0;
}