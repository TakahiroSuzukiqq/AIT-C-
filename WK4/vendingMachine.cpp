// # include <iostream>

// using namespace std;

// int main () {

//    int option;
//    int payment;

//    cout << "Hey, what would you like to drink" << endl << endl;
//    cout << "1. Coke    Price: $1.5" << endl;
//    cout << "2. Sprite  Price: $1.0" << endl;
//    cout << "3. 7UP     Price: $0.5 \n";
//    cout << "4. Water   Price: $2.0" << endl;
//    cout << "5. No need, bye" << endl << endl;
//    cout << "Enter your option Number \n\n\n";
//    cin >> option;

//    if(option > 0 && option < 5) {
//      cout << "Enter your payment in $ :";
//      cin >> payment;
//     }

//    switch (option) {
//        case 1: 
//          cout << "Enjoy the Coke" << endl;
//          cout << "Your balance is : $" << payment - 1.5 << endl;
//         break;
//        case 2:
//          cout << "Enjoy the Sprite \n\n ";
//          printf( "Your balance is : $%.2f \n\n", (payment - 1.0) );
//        break;
//        case 3: 
//          cout << "Enjoy the 7UP" << endl;
//          cout << "Your balance is : $" << payment - 0.5 << endl;
//         break;
//        case 4:
//         printf( "Enjoy the Water \n\n " );
//         printf( "Your balance is : $%.2f \n\n", (payment - 2.0) );
//        case 5:
//          cout << "Thanks!!" << endl;
//        break;
//        default:
//         cout << "Invalid option << balance" << endl;
//    }

//     system("pause");
//     return 0;
// }

//=========================================
//using const
# include <iostream>

using namespace std;

int main () {

   int option;
   int payment;
   double balance;
   const float COKE = 1.5;
   const float SPRITE = 1.0;
   const float SEVEN_UP = 0.5;
   const float WATER = 2.0;


   printf("Hey, what would you like to drink \n\n");
   printf("1. Coke    Price: $%.2f \n", COKE);
   printf("2. Sprite  Price: $%.2f \n", SPRITE);
   printf("3. 7UP     Price: $%.2f \n", SEVEN_UP);
   printf("4. Water   Price: $%.2f \n", WATER);
   printf("5. No need, bye \n\n");
   printf("Enter your option Number \n\n\n");
   cin >> option;

   if(option > 0 && option <= 5) {
     cout << "Enter your payment in $ :";
     cin >> payment;
    }

  if(payment > 0.5) {  
     switch (option) {
         case 1: 
           balance = payment - COKE;
           printf("Enjoy the Coke \n\n");
           printf("Your balance is : $%.2f \n\n", balance);
         break;
         case 2:
           balance = payment - SPRITE;
           printf("Enjoy the Sprite \n\n");
           printf( "Your balance is : $%.2f \n\n", (payment - SPRITE));
         break;
         case 3: 
           balance = payment - SEVEN_UP;
           printf("Enjoy the 7UP \n\n");
           printf("Your balance is : $%.2f \n\n", (payment - SEVEN_UP));
         break;
         case 4:
           balance = payment - WATER;
           printf( "Enjoy the Water \n\n " );
           printf( "Your balance is : $%.2f \n\n", (payment - WATER));
         case 5:
           printf("Thanks!! \n\n");
         break;
         default:
           printf("Invalid option << balance \n\n");
     }
   } else {
      printf("Too poor !!!!\n\n");
   }

    system("pause");
    return 0;
}
//=========================================