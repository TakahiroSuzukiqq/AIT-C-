# include <iostream>
# include <cmath>

using namespace std;

int main () {
  
  float a, b, c;

  cout << "Please enter a number: ";
  cin >> a;

  cout << "Please also enter another number: ";
  cin >> b;

  c = sqrt(pow(a,2) + pow(b,2));

  cout << endl;

  cout << "When the value of a right triangle are ";
  cout << "Base: " << a;
  cout << " Height: " << b << endl;
  cout << "its Hypotenuse is " << c << endl << endl;

  system("pause");
  return 0;
}