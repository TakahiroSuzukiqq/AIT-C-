# include<iostream>
# include <cmath>

using namespace std;

int main() {

    int choice;
    float n1, n2;
    char continueApp = 'y';
    void menu();
    
    while(continueApp == 'y' || continueApp == 'Y') {
      
      menu();

      cout << "Enter your choice(1 - 5): ";
      cin >> choice;
      cout << "Enter your two numbers: ";
      cin >> n1 >> n2;
      cout << endl;

　　   switch(choice) {
        case 1 : 
          cout << "Result: " << n1 + n2 << endl;
        break;
        case 2 : 
          cout << "Result: " << n1 - n2 << endl;
        break;
        case 3 : 
          cout << "Result: " << n1 * n2 << endl;
        break;
        case 4 : 
          cout << "Result: " << n1 / n2 << endl;
        break;
        case 5 : 
          cout << "Result: " << n1 / n2 * 100 << endl;
        break;
        default:
          cout << "Invalid choice, try again" << endl << endl; 
       }
      cout << "Do you want to continue ? (y or n)" << endl;
      cin >> continueApp;
    }

    system("pause");
    return 0;
}

void menu(void) {
  cout << "MENU \n"
   << "1. Add \n"
   << "2. Subtract \n"
   << "3. Multiply \n"
   << "4. Divide \n"
   << "5. Modulus \n";
}