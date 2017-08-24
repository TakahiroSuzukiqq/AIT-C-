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