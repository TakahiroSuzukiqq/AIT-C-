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