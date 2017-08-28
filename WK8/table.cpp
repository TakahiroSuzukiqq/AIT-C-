# include <iostream>
# include <string>

using namespace std;

int main() {

    int arr[3][4];
    int row, col;
    
    for(row = 0; row < 3; row++) {
        for(col = 0; col < 4; col++) {
          arr[row][col] = (row + col + 1); 
          cout << arr[row][col] << " ";
        }
         cout << endl;
    }

   
   
    system("pause");
    return 0;
}