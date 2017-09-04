#include <iostream>
#include <string>

using namespace std;

int main() {

    string num[13] = {"1 ", "2 ", "3 ", "4 ", "5 ", "6 ", "7 ", "8 ", "9 ", "10", "11", "12", "13"};
    string heart[13] = {"Heart 1 ", "Heart 2 ","Heart 3 ", "heart 4 ", "Heart 5 ", "Heart 6 ", "Heart 7 ", "Heart 8 ", "Heart 9 ", "Heart 10","Heart 11", "Heart 12", "Heart 13"};
    string club[13] = {"Club 1 ", "Club 2 ","Club 3 ", "Club 4 ", "Club 5 ", "Club 6 ", "Club 7 ", "Club 8 ", "Club 9 ", "Club 10","Club 11", "Club 12", "Club 13"};
    string diamond[13] = {"Diamond 1 ", "Diamond 2 ","Diamond 3 ", "Diamond 4 ", "Diamond 5 ", "Diamond 6 ", "Diamond 7 ", "Diamond 8 ", "Diamond 9 ", "Diamond 10","Diamond 11", "Diamond 12", "Diamond 13"};
    string spade[13] = {" Spade 1", " Spade 2"," Spade 3", " Spade 4", " Spade 5", " Spade 6", " Spade 7", " Spade 8", " Spade 9", "Spade 10","Spade 11", "Spade 12", "Spade 13"};
    

    
    cout << "====================== Card Deck ======================" << endl << endl;
   
    for(int i = 0; i < 13; i++) {
         cout << "|-----------|" << "|-----------|" << "|-----------|" << "|-----------|" << endl;
         cout << "|" << num[i] <<"         ||"<< num[i] <<"         ||"<< num[i] << "         ||"<< num[i] << "         |" << endl;
         cout << "|           |" << "|           |" << "|           |" << "|           |" << endl;
         cout << "|           |" << "|           |" << "|           |" << "|           |" << endl;
         cout << "|     ♥     |" << "|     ♣     |" << "|     ♦     |" << "|     ♠     |" << endl;
         cout << "|           |" << "|           |" << "|           |" << "|           |" << endl;
         cout << "|           |" << "|           |" << "|           |" << "|           |" << endl;
         cout << "|           |" << "|           |" << "|           |" << "|           |" << endl;
         cout << "|  " << heart[i] <<" ||   " << club[i] << " || " << diamond[i] << "||  " << spade[i] << " |" << endl;
         cout << "|-----------|" << "|-----------|" << "|-----------|" << "|-----------|" << endl;
         cout << endl;
    }
    
    cout << endl;
    cout << "=======================================================" << endl;
   
    system("pause");
    return 0;
}
//=====================================================================================
#include <iostream>
#include <string>

using namespace std;

int main() {

    string row[3] = {"John ", "Peter","Sally"};
    float col[3] = {2450.00, 2750.50, 1500.75};
    
    
    cout << "Name"	<< "            " << "Monthly Salary" << endl;
   
    for(int i = 0; i < 3; i++) {
         cout << row[i] <<"             " << col[i];
         cout << endl;
    }

   
   
    system("pause");
    return 0;
}
//=====================================================================================
#include <iostream>
#include <string>

using namespace std;

int main() {

    string row[3] = {"John ", "Peter","Sally"};
    float col[3] = {2450.00, 2750.50, 1500.75};
    string space[3] = {"   ", " ", ""};
    
    
    cout << "Name"	<< "            " << "Monthly Salary" << "            " << "Yearly Income" << "            " << "Tax" << endl;
   
    for(int i = 0; i < 3; i++) {
         float yearlyIncome = col[i] * 12;
         float tax = (yearlyIncome - 18200) * 19 / 100;
         if (18200 < yearlyIncome) {
           cout << row[i] <<"             " << col[i] << space[i] << "                    " << yearlyIncome <<  "                " << tax << "c" << endl; 
         } else {
           cout << row[i] <<"             " << col[i] << space[i] << "                    " << yearlyIncome <<  "                " << "0" << "c" << endl; 
         }
    }
     cout << endl;
   
    system("pause");
    return 0;
}