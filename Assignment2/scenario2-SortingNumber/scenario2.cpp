# include<iostream>
# include <string>

using namespace std;


int main() {
    int arrInt[10] = {23, 2, 34, 23, 43, 22, 32, 32, 43, 34};
    int sizeInt = sizeof(arrInt) / sizeof(arrInt[0]);
    bool sortedInt = false;
    while(sortedInt == false) {
        sortedInt = true;
        for(int i = 0; i < sizeInt - 1; i++) {
            if(arrInt[i] > arrInt[i + 1]) {

                int tmpInt = arrInt[i];
                arrInt[i] = arrInt[i + 1];
                arrInt[i + 1] = tmpInt;

                sortedInt = false;
            }
        }
    }

    long arrLong[10] = {7000, 15, 34, 2373645, 43, 22, 9392929294, 46, 32, 111143};
    int sizeLong = sizeof(arrLong) / sizeof(arrLong[0]);

    bool sortedLong = false;
    while(sortedLong == false) {
        sortedLong = true;
        for(int i = 0; i < sizeLong - 1; i++) {
            if(arrLong[i] > arrLong[i + 1]) {

                int tmpTwo = arrLong[i];
                arrLong[i] = arrLong[i + 1];
                arrLong[i + 1] = tmpTwo;

                sortedLong = false;
            }
        }
    }

    double arrDouble[10] = {23.3847239, 2.3974, 34.183734, 23.0, 43.36381, 22.3, 32.0, 32.1919, 43.938363, 34.38364};
    int sizeDouble = sizeof(arrDouble) / sizeof(arrDouble[0]);

    bool sortedDouble = false;
    while(sortedDouble == false) {
        sortedDouble = true;
        for(int i = 0; i < sizeDouble - 1; i++) {
            if(arrDouble[i] > arrDouble[i + 1]) {

                double tmpDouble = arrDouble[i];
                arrDouble[i] = arrDouble[i + 1];
                arrDouble[i + 1] = tmpDouble;

                sortedDouble = false;
            }
        }
    }
    cout << endl;

    for(int i = 0; i < 10; i++) {
      if (i == 0) {
          cout << "valListInt = ";
      } else if  (i == 9) {
          cout <<  arrInt[i]; 
      } else {
          cout << arrInt[i] << ", ";
      }
    }
    cout << endl;

    for(int i = 0; i < 10; i++) {
      if (i == 0) {
          cout << "valListLong = ";
      } else if (i == 9) {
          cout << arrLong[i];
      } else {
          cout << arrLong[i] << ", ";
      }
    }
    cout << endl;

    for(int i = 0; i < 10; i++) {
      if (i == 0) {
          cout << "valListDbl = ";
      } else if (i == 9) {
          cout << arrDouble[i];
      } else {
          cout << arrDouble[i] << ", ";
      }
    }
    cout << endl << endl;


    system("pause");
}