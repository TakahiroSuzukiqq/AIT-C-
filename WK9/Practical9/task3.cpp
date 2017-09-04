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