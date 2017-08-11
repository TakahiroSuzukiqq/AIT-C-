# include <iostream>
# include <cmath>

using namespace std;

int main () {
  
  float a, b, c, s, area, x;

  cout << "Please enter a number: ";
  cin >> a;

  cout << "Please also enter another number: ";
  cin >> b;

  c = sqrt(pow(a,2) + pow(b,2));
  s = (a + b + c) / 2; //where s is half of triangles perimeter
  area = sqrt(s * (s - a) * (s - b) * (s - c));
  x = a * b / 2;

  cout << endl;

  cout << "When the value of a right triangle are ";
  cout << "Base: " << a;
  cout << " Height: " << b << endl;
  cout << "its Hypotenuse is " << c << endl;
  cout << "And its area the value of its value is " << area << endl;
  cout << "A. " << x << endl; 
  cout << "------"<< endl << endl; 

  system("pause");
  return 0;
}