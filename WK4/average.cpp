// # include <iostream>

// using namespace std;

// int main() {
//    int result = 0;
//    int n;
//    cout << "Please enter a number" << endl;
//    cin >> n;
   
//    while (n != 0) { 
//      result = result + n;
//      cout << result << endl;

//      cout << "Please enter another number" << endl;
//      cin >> n;
//     }

//     cout << "The total number is : " << result << endl;

//     system("pause");
//     return 0;
// }

//====================================================
// add average notification to above code 
# include <iostream>

using namespace std;

int main() {

   int n;             //number
   float result = 0;  //sum 
   int counter = 0;   //counter to calculate the average value

   cout << "Please enter a number between 0 to finish" << endl;
   cin >> n;
   
   while (n != 0) { 
     result = result + n;
     counter++;

     cout << "Please enter another number" << endl;
     cin >> n;

    }

    cout << "The average value is :" << result/counter << endl << endl;
    
    system("pause");
    return 0;
}