#include <iostream>
#include <time.h>
#include <string>
#define ROUNDS 3
#define ROCK 1 
#define PAPER 2
#define SCISSORS 3
using namespace std;
int main()
{
int player, computer , tie=0 , winner1=0 , winner2=0;
string playerName;
cout << " ENTER YOUR NAME : ";
cin >> playerName;
srand(time(NULL)); // randomise the seeds to make rand() function generate random number everytime running the code
do
{
cout << "\n\n             SCOREBOARD      \n\n";
cout << playerName << "       TIES     COMPUTER \n ";
cout << "-------------------------------------\n";
cout << "     " << winner1 << "          " << tie << "           " << winner2 << "\n\n\n";
// Displaying the Menu
printf(" %s  \n",playerName.c_str());
printf(" 1 - ROCK \n");
printf(" 2 - PAPER \n");
printf(" 3 - SCISSORS \n\n");
printf(" Select Your Option : ");
cin >> player;
// data validation
while(player != 1 && player != 2 && player!= 3){  //while(player < 1 || player > 3){ 
printf(" Select Your Option : ");
cin >> player;
}
cout << playerName << " Selected : ";
switch(player)
{
case ROCK:
cout << "ROCK \n";
break;
case PAPER:
cout << " PAPER \n";
break;
case SCISSORS:
cout << " SCISSORS \n";
break;
}
printf(" Computer Selected : ");
computer = (rand()%3)+1; // generating a random number between 1 or 2 or 3
switch(computer)
{
case ROCK:
cout << "ROCK \n";
break;
case PAPER:
cout << " PAPER \n";
break;
case SCISSORS:
cout << " SCISSORS \n";
break;
}
// GAME RULES
switch(player)
{
case ROCK:
if(computer == ROCK){
cout << "\n\nTIE! Rock meets a Rock! \n\n";
tie++;
}else if(computer == PAPER){
cout << "\n\nCOMPUTER WINS! Rock is covered by Paper! \n\n";
winner2++;
}else if(computer == SCISSORS){
cout << "\n\n" << playerName <<" WINS! Rock crushes Scissors! \n\n";
winner1++;
}
break;
case PAPER:
if(computer == PAPER){
cout << "\n\nTIE! Paper meets a Paper! \n\n";
tie++;
}else if(computer == SCISSORS){
cout << "\n\nCOMPUTER WINS! Paper is cut by Scissors! \n\n";
winner2++;
}else if(computer == ROCK){
cout << "\n\n" << playerName <<" WINS! Paper covered Rock! \n\n";
winner1++;
}
break;
case SCISSORS:
if(computer == SCISSORS){
cout << "\n\nTIE! Scissors meet Scissors! \n\n";
tie++;
} else if(computer == ROCK){
cout << "\n\nCOMPUTER WINS! Scissors are crushed by Rock! \n\n";
winner2++;
} else if(computer == PAPER){
cout << "\n\n" << playerName <<" WINS! Scissors cut the Paper! \n\n";
winner1++;
}
break;
default :
cout << "WRONG INPUT! \n  TRY AGAIN!  \n\n";
break;
}
cout << "           UPDATED SCOREBOARD      \n\n";
cout << " PLAYER       TIES      COMPUTER \n ";
cout << "-------------------------------------\n";
cout << "     " << winner1 << "            " << tie << "           " << winner2 << "\n\n\n";
system("pause"); // pauses the screen to see the scoreboard
system("cls"); // clears the screen
}while(winner1 < ROUNDS && winner2 < ROUNDS);    //while(replay == 'y' || replay == 'Y');
if(winner1 == ROUNDS)
cout << "\n\n\n\n " << playerName << " IS THE WINNER OF THE GAME! \n\n\n\n";
else 
cout << "\n\n\n\n COMPUTER IS THE WINNER OF THE GAME! \n\n\n\n";
/*
if(playerOne == 1)
{
if(playerTwo == 1)
cout << "TIE! \n\n";
else if(playerTwo == 2)
cout << "PLAYER TWO WINS! \n\n";
else if(playerTwo == 3)
cout << "PLAYER ONE WINS! \n\n";
} else if(playerOne == 2)
{
if(playerTwo == 2)
cout << "TIE! \n\n";
else if(playerTwo == 3)
cout << "PLAYER TWO WINS! \n\n";
else if(playerTwo == 1)
cout << "PLAYER ONE WINS! \n\n";
} else if(playerOne == 3)
{
if(playerTwo == 3)
cout << "TIE! \n\n";
else if(playerTwo == 1)
cout << "PLAYER TWO WINS! \n\n";
else if(playerTwo == 2)
cout << "PLAYER ONE WINS! \n\n";
}
*/
system("pause");
return 0;
}