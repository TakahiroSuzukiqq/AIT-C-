# include <iostream>
# include <string>

using namespace std;

void payRollSystem();

int main() {
    
    cout << "This program compute The Payroll Interactively." << endl;
    
    payRollSystem();

    system("pause");
    return 0;
}

void payRollSystem(void) {
    int n;
    cout << "To begin, Enter The Number of Employees:  ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string name;
        float hour, rate;
        double payRoll;
        cout << "Enter The Name, Hours and Rate for Employee" << i + 1 <<  ": ";
        cin >> name;
        cin >> hour;
        cin >> rate;
        
        payRoll = hour * rate;
        cout << name << " " << payRoll << endl; 
    }
}