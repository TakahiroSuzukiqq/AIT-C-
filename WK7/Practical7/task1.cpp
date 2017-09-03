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