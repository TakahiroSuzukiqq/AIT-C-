// task1 ============================================================================================================
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
// ==================================================================================================================
// task2 ============================================================================================================
#include <iostream>

using namespace std;

int main() 
{  
    for (int row=1; row<=7; row++)
      {
        for(int col=1; col<=7-row; col++)
           cout << "*";
           cout << endl;
      }

    system("pause");
    return 0;
}
// ==================================================================================================================
// task3 ============================================================================================================
#include <iostream>

using namespace std;

int main() {
   for(int row=1; row<=7; row++)
     {
       for(int col=1; col<=row+0; col++)
          cout << col;
         {
            for(int col=1; col<=7-row; col++)
              cout << "*";
              cout << endl;
             }
        }
    system("pause");
    return 0;
 }
// ==================================================================================================================
// challenge task4 ==================================================================================================
// assuming base date of calculation is 27th of July, 2017
#include <iostream>

using namespace std;

int main()
 {
     int birthYear, birthMonth, birthDay, coutBirthYear, coutBirthMonth, coutBirthDay;
     
     cout << "Enter the year you were born then press RETURN." << endl;
     cin >> birthYear;
     
     cout << "Enter the month you were born(a number from 1 to 12)." << endl;
     cin >> birthMonth;

     cout << "Enter the day you were born (a number from 1 to 31)." << endl;
     cin >> birthDay;

     if (birthMonth==1 && 2 && 3 && 4 && 5 && 6)
       { 
        coutBirthYear=2017-birthYear; 
        }
     else if(birthMonth==7 && birthDay>=23)
       { 
        coutBirthYear=2017-birthYear; 
        } else { 
            coutBirthYear=2016-birthYear; 
         }
     

     if (birthMonth<=7)
       { 
        coutBirthMonth=12-(7-birthMonth); 
        } else { 
            coutBirthMonth=12-(birthMonth-7); 
        }


     if (birthDay<=27)
       { 
        coutBirthDay=27; 
        } else { 
            coutBirthDay=birthDay-27; 
        }

     cout << "Your age now is :" << coutBirthYear << ", " << coutBirthMonth << "months, "<< coutBirthDay << "days!!" << endl;



   system("pause");
   return 0;
  }
// ==================================================================================================================
