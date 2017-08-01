# include<iostream>

using namespace std;

int main() {
  
  int n;
  char char1;
  char char2;

  cout << "Plesae enter a number : " << endl;
  cin >> n;

  cout << "Please enter a character :" << endl;
  cin >> char1;

  cout << "Please enter a character :" << endl;
  cin >> char2;
   
   cout << endl;

   for (int row = 1; row <= n; row++) {
     
      for (int col = 1; col <= n - row; col++) {
        cout << char1;
      }          
      for (int col = 1; col <= row + 0; col++) {
        cout << char2;
      }

     cout << endl;

    }
    
     cout << endl; 
    
    system("pause");
    return 0;
}
// OR below 
//===============================
// #include <iostream>

// using namespace std;

// int main() {
//   int n;
//   char char1, char2;

//   cout << "Plesae enter a number : ";
//   cin >> n;

//   cout << "Please enter a character :";
//   cin >> char1;

//   cout << "Please enter a character :";
//   cin >> char2;

//    for(int row = 1; row <= n; row++) {
//        for(int col = 1; col <= (n+1 - row) ; col++) {
//           cout << char1;
//          for(int col = 1; col <= row - 1; col++) {
//            cout << char2;
//            cout << endl;
//          }
//        }
//     cout << endl;
//    }

//     system("pause");
//     return 0;
//  }


