# include <iostream>

using namespace std;

int main () {

  printf("Hello, what would you like to buy ?\n\n");

  int choice;
  int payment;
  float change;
  const float COCACOLA = 1.6;
  const float SPRITE   = 1.6;
  const float FANTA    = 1.6;
  const float LEMONADE = 2.5;
  const float WATER    = 2.0;


  printf("1. Coca Cola $%.2f \n", COCACOLA);
  printf("2. Sprite    $%.2f \n", SPRITE);
  printf("3. Fanta     $%.2f \n", FANTA);
  printf("4. Lemonade  $%.2f \n", LEMONADE);
  printf("5. Water     $%.2f \n", WATER);  
  printf("Choose your drink number: ");
  cin >> choice;


  if (1 <= choice && choice <= 5) {
    printf("Please enter the payment: $");
    cin >> payment;
  } else {
    printf("Wrong action, try again \n");
  }

  if(payment > 1.6) {
    if (choice == 1) {
      change = payment - COCACOLA;
      printf("Take your drink!! \n");
      printf("Change: $%.2f \n", change);
    } else if (choice == 2) {
      change = payment - SPRITE;
      printf("Take your drink!! \n");
      printf("Change: $%.2f \n", change);
    } else if (choice == 3) {
      change = payment - FANTA;
      printf("Take your drink!! \n");
      printf("Change: $%.2f \n", change);
    } else if (choice == 4) {
      change = payment - LEMONADE;
      printf("Take your drink!! \n");
      printf("Change: $%.2f \n", change);
    } else if (choice == 5) {
      change = payment - WATER;
      printf("Take your drink!! \n");
      printf("Change: $%.2f \n", change);
    } else {
    }
  } else {
      printf("Wrong action, try again \n\n");
   }


  system("pause");
  return 0;
}