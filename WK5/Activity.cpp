// # include <iostream>

// using namespace std;

// int main () {
    
//     string name, surname;
//     double hour, net_payment, gross_payment;
//     const double payment = 6.75;
//     const double tax = 0.1;

//     cout << "Hi, please enter your name: " << endl;
//     cin >> name;

//     cout << "Also, please enter your surname: " << endl;
//     cin >> surname;

//     cout << "Hello" << " " << name << " " << surname << endl;
//     cout << "Please enter your working hour: " << endl;
//     cin >> hour; 
    
//     net_payment = payment * hour;
//     gross_payment = net_payment - (net_payment * tax);
//     cout << "Your Gross payment should be $" << gross_payment << endl;

    
//     cout << "Detailed information :" << "working hour: " << hour << ", " << "Net payment: " << net_payment << ", " << "Gross payment: " << gross_payment << endl; 

//     system("pause");
//     return 0;
// }

//=======================================================================
// # include "stdfna.h"
# include <iostream>
# include <string>
# include <cmath>

using namespace std;

int main () {

//   string stdFirstName, stdSurname;
//   float stdHours, stdGrossPay, stdTax, stdNetPay;
  string FirstName, LastName;
  const float payPerHour = 6.75;
  int hoursWorked;
	
  cout<<"Enter in students first name:"<<endl;
  cin>>FirstName;
	
  cout<<"Enter in students last name: "<<endl;
  cin>>LastName;
  
  cout<<"How many hours did they work? "<<endl;
  cin>>hoursWorked;

  float grossPay = payPerHour * hoursWorked;
  float tax = grossPay / 10; //get 10% of grossPay
  float netPay = grossPay - tax;
//   char userAnswer != 'y';

    // while (userAnswer != 'n' && userAnswer != 'N') { 
    //    cout << "Enter the student's First Name :";
    //    cin >> fName;

    //    cout << "Enter the student's Last Name :";
    //    cin >> lName;
      
    //   while(userAnswer != 'n' && userAnswer != 'N' || userAnswer = 'y' && userAnswer = 'Y') {
         
         cout << "Student Paysheet: " << FirstName << " " << LastName << endl;
         cout << "GrossPay: $" << grossPay << " Tax: $" <<tax<< endl;
         cout << "NetPay: $" << netPay << endl;
    //   }

    //   cout << "Do You Want to Continue(Y/N)" << endl;
    // }

  system("pause");
  return 0;
}