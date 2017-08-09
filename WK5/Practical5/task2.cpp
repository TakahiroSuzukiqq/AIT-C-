// # include<iostream>

// using namespace std;

// int main (){
  
//   sqrt( double a, b, c );
  
//    cout <<  "Please enter a number" << endl;
//    cin >> a;

//    cout << "Please enter another number" << endl;
//    cin >> b;

//    cout << c = a + b << endl;

//   system("pause");
//   return 0;
// }

# include<iostream>
# include<cmath>

using namespace std;

int main (){
  
  double a, b, c;

  cout <<  "Please enter a number" << endl;
  cin >> a;

  cout << "Please enter another number" << endl;
  cin >> b;

// sqrt: 平方根, powpow(x, y): xのy乗 
  c = sqrt(pow(a,2) + pow(b,2));

  printf("c is : %.2f\n ", c);
  
  system("pause");
  return 0;
}