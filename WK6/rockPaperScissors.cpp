// # include "stdafx.h"
# include <iostream>

# define ROUND 3      // to define labels
# define ROCK 1
# define PAPER 2
# define SCISSORS 2

using namespace std;
int main() {

    int playerOne, playerTwo;
    int tie=0, winner1=0, winner2=0;
    char replay;

    do {

      //system("cls");
      cout << "\n\n      UPDATED SCOREBOARD    \n\n : ";
      cout << "PLAYER ONE      TIES     PLAYER TWO \n";
      cout << "----------------------------------- \n";
      cout << "      " << winner1 << "          " << tie << "       " << winner2 << "\n\n\n";

      printf("PLAYER ONE \n");
      printf("1 - ROCK \n");
      printf("2 - PAPER \n");
      printf("1 - SCISSORS \n\n");

      printf("Select Your Option : ");
      cin >> playerOne;

      printf("PLAYER TWO \n");
      printf("1 - ROCK \n");
      printf("2 - PAPER \n");
      printf("1 - SCISSORS \n\n");

      printf("Select Your Option : ");
      cin >> playerTwo;

      switch(playerOne) {
          //case 1:
          case ROCK:
            //if(playerTwo == 1) {
            if(playerTwo == ROCK) {
              cout << "\n\n TIE! Rock meet a Rock! \n\n";
              tie++;
            //} else if(playerTwo == 2) {
            } else if(playerTwo == PAPER) {
              cout << "\n\n PLAYER TWO WINS! Rock is covered by Paper! \n\n";
              winner2++;
            //} else if(playerTwo == 3) {
            } else if(playerTwo == SCISSORS) {
              cout << "\n\n PLAYER ONE WINS! Rock crushes Scissors! \n\n";
              winner1++;
            }
          break;
          
          //case 2:
          case PAPER:
            if(playerTwo == PAPER) {
              cout << "\n\n TIE! Paper meet a Paper! \n\n";
              tie++;
            } else if(playerTwo == SCISSORS) {
              cout << "\n\n PLAYER TWO WINS! Paper is cut by Scissors! \n\n";
              winner2++;
            } else if(playerTwo == ROCK) {
              cout << "\n\n PLAYER ONE WINS! Paper covered Rock! \n\n";
              winner1++;
            }
          break;

           //case 3:
           case SCISSORS:
            if(playerTwo == SCISSORS) {
              cout << "\n\n TIE! Scissors meet Scissors! \n\n";
              tie++;
            } else if(playerTwo == ROCK) {
              cout << "\n\n PLAYER TWO WINS! Scissors are crushed by Rock! \n\n";
              winner2++;
            } else if(playerTwo == PAPER) {
              cout << "\n\n PLAYER ONE WINS! Scissors cut Paper! \n\n";
              winner1++;
            }
          break;

          default:
            cout << "WRONG INPUT! \n TRY AGAIN \n\n";
            break;
      }
      
         cout << "\n\n      UPDATED SCOREBOARD    \n\n : ";
      cout << "PLAYER ONE      TIES     PLAYER TWO \n";
      cout << "-------------------------- \n";
      cout << "    "; << winner1; << "           "; << tie << "       " << winner2; << "\n\n\n";

      // cout << "Would you like to play again? (y/n) : ";
      // cin >> replay;

       system("cls");
       system("pause");

  // } while(replay == 'y'|| replay == 'Y');
    } while(winner1 < 5 && winner2 < 5);

      if (winner1 == 5) {
        cout << "\n\n PLAYER ONE is the WINNER! \n\n" << "\n";
      } else {
        cout << "\n\n PLAYER TWO is the WINNER! \n\n" << "\n";
      }

    //system("pause");
    cin.get();  // to avoid warning about system duplication
    return 0;
}
==================================================================================================================