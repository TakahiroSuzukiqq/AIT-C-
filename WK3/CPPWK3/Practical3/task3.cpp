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