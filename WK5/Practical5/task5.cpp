# include <iostream>

using namespace std;

int main () {

   int option;
   int payment;
   double balance;
   const float COKE = 1.6;
   const float SPRITE = 1.6;
   const float SEVEN_UP = 1.6;
   const float WATER = 1.6;


   printf("Hey, what would you like to drink \n\n");
   printf("1. Coke    Price: $%.2f \n", COKE);
   printf("2. Sprite  Price: $%.2f \n", SPRITE);
   printf("3. 7UP     Price: $%.2f \n", SEVEN_UP);
   printf("4. Water   Price: $%.2f \n", WATER);
   printf("Enter your option Number \n\n\n");
   cin >> option;

   if(option > 0 && option <= 5) {
     cout << "Enter your payment in $ :";
     cin >> payment;
    } else {
     printf("Wrong action, try again \n");
   }

  if(payment > 1.6) { 
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
      printf("Wrong action, try again \n\n");
   }

    system("pause");
    return 0;
}