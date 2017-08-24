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