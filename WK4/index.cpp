# include <iostream>

namespace std;

int main() {

//================================
for (int n=10; n>0; n--)
  {
      cout << n << ", ";
      if (n==5)
        {
            cout << "aborted!";
            break;
        }
  }
//================================
  for (int n=5; n>0; n--) {
    if (n==3)
       continue;           //Only when the number is 3, stip working but loop will not be broken
       cout << n << ", ";
  }
//================================

system("pause")
return 0;

}