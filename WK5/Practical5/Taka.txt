//# Task1-------------------------
# include <iostream>
# include <cmath>

using namespace std;

int main () {

  float numberOne, numberTwo;
  
  printf("Please enter a number: ");
  cin >> numberOne;
  printf("Please enter another number: ");
  cin >> numberTwo;
  
  float middlePosition = std::floor(numberOne + numberTwo) / 2;
  float MiddlePosition = (numberOne + numberTwo) / 2;  
  
  printf("The middle number between ");
  cout << numberOne << " and " << numberTwo << " is " << middlePosition << endl << endl;

  printf ("The average number is %.2lf \n\n", floor(MiddlePosition));

  system("pause");
  return 0;
}

//# Task2-------------------------
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

//# task3-------------------------
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