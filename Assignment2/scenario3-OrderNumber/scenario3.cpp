#include<iostream>

using namespace std;

//======================== function =========================
int multiples(int n, int x) {
   int sum = 1;
    for (int i = 1; i <= n; i++) {
        sum += i * x;
    }
    return sum;
}

float multiples(int n, float x) {
   float sum = 1;
    for (int i = 1; i <= n; i++) {
        sum += i * x;
    }
    return sum;
}

double multiples(int n, double x) {
   double sum = 1;
    for (int i = 1; i <= n; i++) {
        sum += i * x;
    }
    return sum;
}

//===========================================================
int main() {

    int n;
    int x;
    float y;
    double z;

    cout << "Welcome to the overloaded function app." << endl;
    cout << "How many times do you want to iterate the function ?" << endl;
    cin >> n;
    cout << "Enter an integer for x: " << endl;
    cin >> x;
    cout << "Enter a float for y:" << endl;
    cin >> y;
    cout << "Enter an long float for z:" << endl;
    cin >> z;
    cout << endl;

    //============================ x ============================
    if (x != NULL) {
        cout << "Function multiples for int... " << endl;
        cout << "sum = 1";
        for (int i = 1; i < n + 1; i++) {
            if (i != n) {
                cout << " + " << i << "x";
            } else {
                cout << " + " << n << "x";
            }
        }
        cout << endl;
        cout << "    = 1";
        for (int i = 1; i < n + 1; i++) {
            if (i != n + 1) {
                cout << " + " << i << " x " << x;
            } else {
                cout << " + " << n << "x" << endl;
            }
        }
        cout << endl; 
        cout << "    = " << multiples(n, x) << endl << endl;
      } else {
        cout << "Error, try again!!" << endl;
    }

    //============================ y ============================
    if (y != NULL) {
        cout << "Function multiples for float... " << endl;
        cout << "sum = 1";
        for (int i = 1; i < n + 1; i++) {
            if (i != n) {
                cout << " + " << i << "y";
            } else {
                cout << " + " << n << "y";
            }
        }
        cout << endl;
        cout << "    = 1";
        for (int i = 1; i < n + 1; i++) {
            if (i != n + 1) {
                cout << " + " << i << " x " << y;
            } else {
                cout << " + " << n << "y" << endl;
            }
        }
        cout << endl; 
        cout << "    = " << multiples(n, y) << endl << endl;
    } else {
        cout << "Error, try again!!" << endl;
    }

    //============================ z ============================
    if (z != NULL) { 
        cout << "Function multiples for double... " << endl;
        cout << "sum = 1";
        for (int i = 1; i < n + 1; i++) {
            if (i != n) {
                cout << " + " << i << "z";
            } else {
                cout << " + " << n << "z";
            }
        }
        cout << endl;
        cout << "    = 1";
        for (int i = 1; i < n + 1; i++) {
            if (i != n + 1) {
                cout << " + " << i << " x " << z;
            } else {
                cout << " + " << n << "z" << endl;
            }
        }
        cout << endl; 
        cout << "    = " << multiples(n, z) << endl << endl;
      } else {
        cout << "Error, try again!!" << endl;
    }

    //===========================================================
    
    system("pause");
    return 0;
}