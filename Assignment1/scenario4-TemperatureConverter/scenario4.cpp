# include <iostream>
//# include <iomanip>

using namespace std;

int main () {

float lowerLimit, higherLimit, stepSize, temperature;

cout << "Please give in a lower limit, limit >= 0: ";
cin >> lowerLimit;

cout << "Please give in a higher limit, 10 > limit <= 50000: ";
cin >> higherLimit;

cout << "Please give in a step, 0 < step <= 10: ";
cin >> stepSize;

cout << endl;

cout << "Celsius" << "      " <<  "Fahrenheit" << endl;
cout << "-------" << "      " <<  "----------" <<endl;

// cout << fixed << setprecision(6) << lowerLimit << endl; 
// printf("%.6lf\n", lowerLimit);
printf("%.6lf    ", lowerLimit);

float fahrenheit = lowerLimit * 9 / 5 + 32;
printf("%.6lf\n", fahrenheit);

while((lowerLimit + stepSize) < higherLimit) {  
  lowerLimit = lowerLimit + stepSize;
  fahrenheit = lowerLimit * 9 / 5 + 32;
//cout << fixed << setprecision(6) << lowerLimit << endl; 
//    printf("%.6lf\n", lowerLimit);
   printf("%.6lf    ", lowerLimit);
   printf("%.6lf\n", fahrenheit);
 }

cout << endl;


  system("pause");
  return 0;
}