# include <iostream>
# include<cmath>

using namespace std;

int main() {

    int valListInt[] = {23, 2, 34, 23, 43, 22, 32, 32, 43, 34};
    long valListLon[] = {7000, 15, 34, 2373645, 43, 22, 9392929294, 46, 32, 111143};
    double valListDbl[] = {23.3847239, 2.3974, 34.183734, 23.0, 43.36381, 22.3, 32.0, 32.1919, 43.938363, 34.38364};
    void bubbleSort(); 
   
    int size = sizeof(valListInt) / sizeof(valListInt[0]); 
    bubbleSort(valListInt, size);

    for(int i = 0; i < 10; i++)
        cout << "slot "<< i << ": " << valListInt[i] << endl;
    
    system("pause");
    return 0;
}

void bubbleSort(int arr[], int n) { 
    bool sorted = false
    while (sorted = false) {
        sorted = true;
        for (int i = 0; 0 < n - 1; i++) {
            if arr[i] < arr[i + 1] {
                int tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
            }
        }
    }
}