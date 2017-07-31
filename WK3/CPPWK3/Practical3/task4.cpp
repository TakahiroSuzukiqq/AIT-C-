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