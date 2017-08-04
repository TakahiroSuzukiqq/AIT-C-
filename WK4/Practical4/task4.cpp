# include<iostream>

using namespace std;

int main() {
  
  int n;

  cout << "Please enter multiplication size(1-15): " << endl; 
  cin >> n;
   
   cout << endl;

   for (int row = 1; row <= n; row++) {
       cout << " " << row;
   }
   cout << endl;
      
   for (int row = 1; row <= n; row++) {
       cout << row << " ";
      for (int col = 1; col <= n; col++) {
       cout << col * n <<  " ";
      }
     cout << endl;

    }
     cout << endl; 
    
    system("pause");
    return 0;
}