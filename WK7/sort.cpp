// # include<iostream>
// # include <string>

// using namespace std;

// void bubbleSort(int arr[]) {
//     //arrays are pass by reference, no need to return it. They update in and out o this function automatically
//     bool sorted = false;
//     while(sorted == false) {   //!sorted, sorted != true
//         //assume sorted unless we do a swap
//         sorted = true;
        
//         //inside loop checks  all of the indexes against the next index
//         for(int i = 0; i < 5-1; i++) {//5-1, size of array, -1 so we don't do the check out of bounds
//             if(arr[i] > arr[i+1]) { //if current slot greater than next slot - 

//                 //need to swap
//                 int tmp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = tmp;

//                 sorted = false;
//             }
//         }
//     }
// }

// int main() {
//     int myArray[5] = {34, 54, 12, 75, 2};
//     bubbleSort(myArray);

//     for(int i = 0; i < 5; i++)
//         cout << "slot "<< i << ": " << myArray[i] << endl;

//     system("pause");
// }

//=====================================================================
# include<iostream>
# include <string>

using namespace std;

void bubbleSort(int arr[], int size) {   //size
    
    bool sorted = false;
    while(sorted == false) {  
        
        sorted = true; 
       
        for(int i = 0; i < size - 1; i++) {   //size
            if(arr[i] > arr[i+1]) { 

                int tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;

                sorted = false;
            }
        }
    }
}

int main() {
    int myArray[5] = {34, 54, 12, 75, 2};
    int size = sizeof(myArray) / sizeof(myArray[0]); //total size the Array occupies / size each element of the array occupies
    bubbleSort(myArray, size);

    for(int i = 0; i < 5; i++)
        cout << "slot "<< i << ": " << myArray[i] << endl;

    system("pause");
}
