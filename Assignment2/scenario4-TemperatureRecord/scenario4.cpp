#include<iostream>

using namespace std; 

int main() {

    float tempH[7];
    float tempL[7];
    float tempTtl;

    cout << "Please enter this week temperature." << endl;
    
    for(int i = 0; i < 7; i++) {
      switch(i) {
          case 0:
            cout << "       " << "Monday Highset: ";
            cin >> tempH[i];
            cout << "       " << "Monday Lowest: ";
            cin >> tempL[i];
            break; 
          case 1:
            cout <<  "       " << "Tuesday Highset: ";
            cin >> tempH[i];
            cout <<  "       " << "Tuesday Lowest: ";
            cin >> tempL[i];
            break;   
          case 2:
            cout <<  "       " << "Wednesday Highset: ";
            cin >> tempH[i];
            cout <<  "       " << "Wednesday Lowest: ";
            cin >> tempL[i];
            break;
          case 3:
            cout <<  "       " << "Thursday Highset: ";
            cin >> tempH[i];
            cout <<  "       " << "Thursdat Lowest: ";
            cin >> tempL[i];
            break;
          case 4:
            cout <<  "       " << "Friday Highset: ";
            cin >> tempH[i];
            cout <<  "       " << "Friday Lowest: ";
            cin >> tempL[i];
            break;
          case 5:
            cout <<  "       " << "Saturday Highset: ";
            cin >> tempH[i];
            cout <<  "       " << "Saturday Lowest: ";
            cin >> tempL[i];
            break;
          case 6:
            cout <<  "       " << "Sunday Highset: ";
            cin >> tempH[i];
            cout <<  "       " << "Sunday Lowest: ";
            cin >> tempL[i];
            break;
          default :
            cout << "Error, try again!!";
          break;
        }
    }

    int sizeH = sizeof(tempH) / sizeof(tempH[0]);
    bool sortedH = false;
    while(sortedH == false) {
      sortedH = true;
      for(int i = 0; i < sizeH; i++) {
         if(tempH[i] > tempH[i + 1]) {
           int temp = tempH[i];
           tempH[i] = tempH[i + 1];
           tempH[i + 1] = temp;
           sortedH = false;
         }
      }
    }

    int sizeL = sizeof(tempL) / sizeof(tempL[0]);
    bool sortedL = false;
    while(sortedL == false) {
      sortedL = true;
      for(int i = 0; i < sizeL; i++) {
         if(tempL[i] > tempL[i + 1]) {
           int temp = tempL[i];
           tempL[i] = tempL[i + 1];
           tempL[i + 1] = temp;
           sortedL = false;
         }
      }
    }
  
    // for (int i = 1; i < 8; i++) {
    //   cout << tempH[i] << ", ";
    // }
    // cout << endl;
    // for (int i = 1; i < 8; i++) {
    //   cout << tempL[i] << ", ";
    // }
    // cout << endl << endl;
    
    for(int i = 0; i < 8; i++) {
       tempTtl += tempH[i] + tempL[i];
    }
    tempTtl = tempTtl / 14;

    cout << "This week," << endl;
    cout <<  "       " << "Minimum temperature is: " << tempL[1] << endl;
    cout <<  "       " << "Maximum temperature is: " << tempH[7] << endl;
    cout <<  "       " << "Average temperature is: " << tempTtl << endl << endl;
     
    system("pause");
    return 0;
}