
// // ================nの階乗==================
// // #include <stdafx.h>
// #include <iostream>

// using namespace std;
// int main()
// {
//     int n; 
//     long result=1;

//     cout << "Please enter a number : ";
//     cin >> n;

//     //Calculating Factorial

//     cout << n << "! = ";

//     for(int i=1; i<=n; i++)
//     {
//         if(i == n)
//            cout << i;
//         else
//            cout << i << " x ";

//            result = result * i;
//     }
//     // int i=1;
//     // while(i<=n)
//     // {
//     //     if(i == n)
//     //        cout << i;
//     //     else
//     //        cout << i << " x ";

//     //        result = result * i;
//     // }
//       system("pause");
//         return 0;
// }
// =======================aのb乗=========================

// // #include <stdafx.h>
// #include <iostream>

// using namespace std;

// int main()
// {
//     int a,b; 
//     long result=1;

//     cout << "Please enter a number : ";
//     cin >> a;

//     cout << "Please enter a number : ";
//     cin >> b;

//     //Calculating Factorial

//     cout << a << " to the power of " << b << " = ";
//     for(int i=1; i<=b; i++) //b回
//     {
//         if(i == b)
//            cout << a;
//         else
//            cout << a << " x ";

//            result = result * a;
//     }
//     system("pause");
//       return 0;
// }
// ＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝
//asking a user 
//int a : raw
//int b : col
//char c : charactor such as "x"  
// #include <stdafx.h>
#include <iostream>

using namespace std;

int main()
{
    int numRows, numCols;
    char  myChar;

    long result=1;

    cout << "Please enter the Number of Rows : ";
    cin >> numRows;

    cout << "Please enter the number Columns: ";
    cin >> numCols;

    cout << "Please Enter a Character : ";
    cin >> myChar;

    for(int row=1; row <= numRows; row++)
     {
         //
         for(int col=1; col <= numCols; col++)
           cout << myChar;
         //Going to Next line representing NEXT ROW
         cout << endl;
     }

     system("pause");
     return 0;
}
