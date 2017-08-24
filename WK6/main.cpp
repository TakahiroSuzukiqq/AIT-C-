# include <iostream>
# include <string>

using namespace std;

int main () {
    
    string fNameA, lNameA;
    string fNameB, lNameB;
    
    cout << "Enter your first name : ";
    cin >> fNameA;
    cout << "Enter your last name : ";
    cin >> lNameA;
    
    int fNameALength = fNameA.length();
    int lNameALength = lNameA.length();

    int sumA = fNameALength + lNameALength;
    cout << endl;


    cout << "Enter your first name : ";
    cin >> fNameB;
    cout << "Enter your last name : ";
    cin >> lNameB;

  
    int fNameBLength = fNameB.length();
    int lNameBLength = lNameB.length();

    int sumB = fNameBLength + lNameBLength;
    //int sumB = fNameB.length() + lNameB.length();
    cout << endl << endl;

    if (sumA > sumB) {
       cout << "Character of " << fNameA << " "<< lNameA << "is longer by " << sumA - sumB;
    } else {
       cout << "Character of " << fNameB << " "<< lNameB << "is longer by " << sumB - sumA;
    }



    system("pause");
    return 0;
}