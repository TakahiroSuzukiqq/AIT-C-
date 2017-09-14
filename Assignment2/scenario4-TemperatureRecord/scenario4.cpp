#include<iostream>

using namespace std; 

int main() {

    float tempH[7];
    float tempL[7];
    
    cout << "Please enter this week temperature," << endl;
    
    for(int i = 1; i < 8; i++) {
      switch(i) {
          case 1:
            cout << "Monday Highset: ";
            cin >> tempH[i];
            cout << "Monday Lowest: ";
            cin >> tempL[i];
            break; 
          case 2:
            cout << "Tuesday Highset: ";
            cin >> tempH[i];
            cout << "Tuesday Lowest: ";
            cin >> tempL[i];
            break;   
          case 3:
            cout << "Wednesday Highset: ";
            cin >> tempH[i];
            cout << "Wednesday Lowest: ";
            cin >> tempL[i];
            break;
          case 4:
            cout << "Thursday Highset: ";
            cin >> tempH[i];
            cout << "Thursdat Lowest: ";
            cin >> tempL[i];
            break;
          case 5:
            cout << "Friday Highset: ";
            cin >> tempH[i];
            cout << "Friday Lowest: ";
            cin >> tempL[i];
            break;
          case 6:
            cout << "Saturday Highset: ";
            cin >> tempH[i];
            cout << "Saturday Lowest: ";
            cin >> tempL[i];
            break;
          case 7:
            cout << "Sunday Highset: ";
            cin >> tempH[i];
            cout << "Sunday Lowest: ";
            cin >> tempL[i];
            break;
          default :
            cout << "Error, try again!!";
          break;
        }
    }

    cout << tempH[3] << endl << endl;
    system("pause");
    return 0;
}

float bubbleSort () {
     float tempH[7];
}


//  float tempL[7];