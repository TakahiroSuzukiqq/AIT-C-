#include<iostream>

using namespace std;

int multiples();
double multiples();
float multiples();

int main() {
    
    double x;
     n;

    cout << "Enter a number" << endl;
    cin >> x;
     cout << "Enter another number" << endl;
    cin >> n;
    multiples();
    
    cout << multiples() << endl;

    system("pause");
    return 0;
}

//==================function========================
int multiples(int i, int d) {
   int sum = 0;
    for (int r = 1; r <= i; r++) {
        sum += r * d;
    }
    return sum;
}

double multiples(int i, double d) {
   double sum = 0;
    for (int r = 1; r <= i; r++) {
        sum += r * d;
    }
    return sum;
}
float multiples(int i, float d) {
   float sum = 0;
    for (int r = 1; r <= i; r++) {
        sum += r * d;
    }
    return sum;
}