#include<iostream>
#include<string>

using namespace std;

enum department_t {cleaning, marketing, management, service, sales};  //labels

int main() {

    string nameArr[10] = {"Taka", "Tom", "Hannah", "Alex", "Fred", "Nick", "Ethan", "Mario", "Shelly", "Paul"};
    double salaryArr[10] = {52000, 53000, 100000, 200000, 60000, 65000, 80000, 92000, 75000, 70000};
    department_t departments[10] = {sales, service, management, marketing, cleaning, sales, sales, marketing, cleaning, marketing};
     
    //List of employees
    cout << " NAME \t DEPARTMENT \t SALARY \n";
    cout << "----------------------------------\n";
    for(int i = 0; i < 10; i++) {
        cout << nameArr[i] << " \t ";
        switch (departments[i]) {
            // case 0: cout << "cleaning"; break;
            // case 1: cout << "marketing"; break;
            // case 2: cout << "management"; break;
            // case 3: cout << "service"; break;
            // case 4: cout << "sales"; break;
            // default: break;                            //or using labels as following
            case cleaning: cout << "Cleaning"; break;
            case marketing: cout << "Marketing"; break;
            case management: cout << "Management"; break;
            case service: cout << "Service"; break;
            case sales: cout << "Sales "; break;
            default: break;
        }
        cout<< " \t $" << salaryArr[i] << endl;
    }
    cout << "\n \n \n";
    
    //List of departments
    cout << " No. \t DEPARTMENT \t EMPLOYEES \t PAYMENT \n";
    cout << "------------------------------------------------\n";
    for (int dep = 0; dep < 5; dep++) {   //each department individually
            cout << dep + 1 << " \t "; 
            
            switch(dep) {   //set the department label
                case 0: cout << "Cleaning"; break;
                case 1: cout << "Marketing"; break;
                case 2: cout << "Management"; break;
                case 3: cout << "Service"; break;
                case 4: cout << "Sales  "; break;
                default: break;
            }
            //every single employee
            int counter = 0;  //should reset dor each department
            double payment = 0;
            for(int emp = 0; emp < 10; emp++) {  //check all tem employees
                if(departments[emp] == dep) {    //if the department of current employee is same as the current department we are going through
                    counter++;                  //number of employees being in current department
                    payment += salaryArr[emp];   //accumulator to calculate the total salaries of the employees being in current department 
                }
            }
            cout << "\t \t " << counter << "\t $" << payment << "\n";
    }
    cout << "\n \n";

    system("pause");
    return 0;
}