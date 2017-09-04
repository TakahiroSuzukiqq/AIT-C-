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