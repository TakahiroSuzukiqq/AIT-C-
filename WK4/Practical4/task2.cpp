# include <iostream>

using namespace std;

int main () {
   
  int K = 5;
  int I = -2;
  
  while (I <= K) {
    I = I + 2;
    --K; 
    cout << (I + K) << endl;
  } 

  system("pause");
  return 0;
}