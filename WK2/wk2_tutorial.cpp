// rememb-o-matic
#include <iostream>
using namespace std;
void main ()
{
 int i,n;
 int * p;
 cout << "How many numbers would you like to type? ";
 cin >> i;
 p= new (nothrow) int[i];
 if (p == 0)
 cout << "Error: memory could not be allocated";
 else
 {
 for (n=0; n<i; n++)
 {
 cout << "Enter number: ";
 cin >> p[n];
 }
 cout << "You have entered: ";
 for (n=0; n<i; n++)
 cout << p[n] << ", ";
 delete[] p;
 }
 system(“pause”);
 return 0;
}