// # include <iostream>

// using namespace std;

// int main (){
    
//     double power = calculaterPower(base, exponent);

//     double calculatePower (double baseNumber, int exp) {
//     double tempAnswer = 0;
//     return tempAnsert;
//     }

//     system("pause");
//     return 0;
// }
//===========================================================================================
#include<iostream>
#include<cmath>

using namespace std;

int add(int, int);//prototype of ADD function
void greet(void);

int main (){
    
    greet();

    int a = 4444;  //this a is not the same as a in function add and great
    int y = 2, z = 5;
  //int x = 2 + 5;//int x is 7
    int x = add(y, z);
    cout << "The result is: "<< endl << endl;

    // int add(2, 5);
    // cout << "The result is: "<< endl << endl;

    system("pause");
    return 0;
}

int add(int a, int b) {  //this a is called local variable, only known in this function
    a = a* 2;
    b -= 1;
    return (a + b);
}

void greet(void) {
    string a = "Hi";  //this a is also known in this function
    cout << "Welcome to my program!";
}
//===========================================================================================
int x = 10;
int x = calc(x);
printf(x)
int cals(int x) {
    x = x + 10;
    return x;
}
//===========================================================================================