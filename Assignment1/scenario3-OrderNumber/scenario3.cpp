# include <iostream>

using namespace std;

int main () {
  
  float a, b, c;

  cout << "Please enter 3 number: " << endl;
  cout << "First number: ";
  cin >> a;
  cout << "Second number: ";
  cin >> b;
  cout << "Third number: ";
  cin >> c;

//   if (a && b && c <= 8 bytes ) {

  cout << "Your numbers forward:" << endl;
  
  if (a > b && a > c) {
      if (b > c) {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
      } else {    
        cout << a << endl;
        cout << c << endl;
        cout << b << endl;
      }
  } else if (b > a && b > c) {
      if (a > c) { 
        cout << b << endl;
        cout << a << endl;
        cout << c << endl;
      } else {
        cout << b << endl;
        cout << c << endl;
        cout << a << endl;
      }
  } else if (c > a && c > b) {
      if (a > b) {
        cout << c << endl;
        cout << a << endl;
        cout << b << endl;
      } else {
        cout << c << endl;
        cout << b << endl;
        cout << a << endl;
      }
  } else {
      cout << "Try again, don't enter a same number." << endl;
  }
  
  cout << endl << endl;

  cout << "Your numbers reversed: " << endl;
  
  if (a < b && a < c) {
      if (b < c) { 
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
      } else {  
        cout << a << endl;
        cout << c << endl;
        cout << b << endl;
      }
  } else if (b < a && b < c) {
      if (a < c) {  
        cout << b << endl;
        cout << a << endl;
        cout << c << endl;
      } else {
        cout << b << endl;
        cout << c << endl;
        cout << a << endl;
      }
  } else if (c < a && c < b) {
      if (a < b) {
        cout << c << endl;
        cout << a << endl;
        cout << b << endl;
      } else {
        cout << c << endl;
        cout << b << endl;
        cout << a << endl;
      }
  } else {
      cout << "Try again, don't enter a same number." << endl;
  }
//   } else {
//       cout << "Error try again.";
//   } 


  cout << endl;

  system("pause");
  return 0;
}