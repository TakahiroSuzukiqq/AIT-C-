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