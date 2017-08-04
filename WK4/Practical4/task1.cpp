# include <iostream>

using namespace std;

int main() {

  int counter = 0;

  while (counter < 100) {
       if (counter % 2 == 1) {
            cout << counter << " is odd." << endl;
       } else {
            cout << counter << " is even." << endl;
         }
    ++counter;
  }

  system("pause");
  return 0;
}
