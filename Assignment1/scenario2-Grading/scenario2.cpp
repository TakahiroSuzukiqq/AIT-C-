# include<iostream>

using namespace std;

int main () {

    int score;
    
    cout << "Please enter your score(0 - 100): ";
    cin >> score;

    cout << endl;

    if (score  >= 0 && score <= 59) {
      cout << "You've got F, means you're fail. Study hard !!!!" << endl;
    } else if (score  >= 60 && score <= 69) {
        cout << "Oh, you've got D, you need to study more !" << endl;
    } else if (score  >= 70 && score <= 79) {
        cout << "You've got C, not bad, keep studying" << endl;
    } else if (score  >= 80 && score <= 89) {
        cout << "Good, you've got B, keep studying" << endl;
    } else if (score  >= 90 && score <= 99) {
        cout << "Well done, you've got A !!" << endl;
    } else if (score == 100) {
        cout << "A !! Congrats!! You've got perfect score !!!!!" << endl; 
    } else {
        cout << "Error, try again." << endl;
     }

    cout << endl;


    system("pause");
    return 0;
}