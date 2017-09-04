# include <iostream>

using namespace std;

int main () {
    
    float a, b, c;
    cout << "Please enter 3 number: ";
    cin >> a;
    cin >> b;
    cin >> c;

    if(a < b && a < c) {
        cout << a << endl;
    } else if (a < b && c < a) {
        if (b < c) {
            cout << b << endl;
        } else {
            cout << c << endl;
        }
    } else if (b < a && a < c) {
        if (a < b) {
            cout << a << endl;
        } else {
            cout << b << endl;
        }
    } else if (c < a && c < b) {
        cout << c << endl;
    }
    
    cout << endl;

    system("pause");
    return 0;
}

//========================================================
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