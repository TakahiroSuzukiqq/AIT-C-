//5 arrays
//rNumber = (rand()%3)+1; 
#include<iostream>
#include<string>

using namespace std;

int main() {
   
    string arrName[10] = {"John","Tom","Alex","Billy","Jamie","Filip","Taka","Jessica","Kirsten","Kevin"};
    int arrId[10] = {1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010};
    float arrCurrentSalary[10] = {2450.00, 2750.50, 1500.75, 1000.00, 3000.00, 3500.00, 2680.25, 1900.50, 2500.00, 2800.25};
    float arrPromotedSalary[10] = {2450.00, 2750.50, 1500.75, 1000.00, 3000.00, 3500.00, 2680.25, 1900.50, 2500.00, 2800.25};
    float arrIncrease[10];


    for(int i = 0; i <= 12; i++) {
        int n = (rand() % 10) + 1;

        arrPromotedSalary[n] += arrPromotedSalary[n] * 0.05;
        cout << arrName[n] << " promoted the salary by " << arrPromotedSalary[n] << "." << endl;
        //cout << "Increase " << arrCurrentSalary[n] << "=> "<< arrPromotedSalary[n] << endl << endl;
    }
    
    cout << endl;

    for(int i = 0; i < 10; i++) {
        arrIncrease[i] = arrPromotedSalary[i] - arrCurrentSalary[i];
        cout << arrIncrease[i] << endl;
    }

    int size = sizeof(arrIncrease) / sizeof(arrIncrease[0]);

    bool sort = false;

    while(sort == false) {
        sort = true;
        for(int x = 0; x < size - 1; x++) {
            if(arrIncrease[x]> arrIncrease[x] + 1) {
                int tmp = arrIncrease[x];
                arrIncrease[x] = arrIncrease[x + 1];
                arrIncrease[x + 1] = tmp;
                sort = false;
            }
        }
    }
    
    
    



    // cout << "name: " << arrName[0] << endl;
    // cout << "id: " << arrId[1] << endl;
    // cout << "current salary: " << arrCurrentSalary[2] << endl;
    // cout << "promoted salary: " << arrPromotedSalary[3] << endl;
    // cout << "increase:" << arrIncrease[4] << endl;
    

    system("pause");
    return 0;
}