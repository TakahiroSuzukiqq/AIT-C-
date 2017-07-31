#include <iostream>

using namespace std;

int main()
{
  int maxV;
  int numA,numB,numC;
  
  cout << "Hello, please enter a number : ";
  cin >> numA;

  cout << "Please enter a number again : ";
  cin >> numB;

  cout << "Sorry please enter a number again : ";
  cin >> numC;

  maxV = numA;
  if( maxV < numB ) {
     maxV = numB;
   }
  if( maxV < numC ) {
    maxV = numC;
  }
  
  cout << "The max value is : " << maxV << endl;
  
  return 0;
}