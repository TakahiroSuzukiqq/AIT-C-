/*
-- CONDITIONS --
BATMAN
1000 < hP < 2000
1 < Random Strong < 10
1 < Random Defence < 5
Random ATTACK 1: Punch      dmg = str * 2
              2: Batarang             * 5
              3: Car                  * 10
DOOMSDAY
1000 < hP < 2000
1 < Random Strong < 10
1 < Random Defence < 5
Random ATTACK 1: HeavyPunch          * 10
              2: Kick                * 5
              3: Slap                * 2

dmg = dmg - def
hp = hp - dmg
*/


#include<iostream>
#include<string>
#include<time.h>
//#include<windows.h>

using namespace std;

int bat_Atk(int);
int doom_Atk(int);

int main() {
    
    srand(time(NULL)); //to randomise the Seeds dor the random function
    //int bat_HP, bat_Str, bat_Def, doom_HP, doom_Str, doom_Def, damage;
    int bat_HP = (rand() %1000) + 1000, bat_Str = (rand() %10) + 1, bat_Def = (rand() %5) + 1, bat_Counter = 0,
        doom_HP = (rand() %1000) + 1000, doom_Str = (rand() %10) + 1, doom_Def = (rand( )%5) + 1, doom_Counter = 0,
        damage;

    printf("\n\n\n\t\t\t\t\t BATMAN    vs    DOOMSDAY \n\n\n");
    printf("\t\t\t\t\t ---------------------------\n\n");
    printf("\t\t\t Health Point :  %d \t\t %d \n", bat_HP, doom_HP);
    printf("\t\t\t       Strong :  %d \t\t %d \n", bat_Str, doom_Str);
    printf("\t\t\t      Defence :  %d \t\t %d \n", bat_Def, doom_Def);
    printf("\t\t\t\t\t ---------------------------\n\n\n\n");

    system("pause");

    while(bat_HP > 0 && doom_HP > 0) { //while they are alive, continue the battle
        
        int whoseTurn = rand()%2;
 
        if(whoseTurn == 0) {
          //batman attacks
          damage = bat_Atk(bat_Str); //batmanattacks and generates a damage
          damage -= doom_Def; // involve defence in the damage calculation
          
          if(damage < 1) {  //to have at least 1 damage
              damage = 1;
          }
          doom_HP = doom_HP - damage;
          cout << "\t\t\t\t\t DOOMSDAY's Health Point : " << doom_HP << endl << endl;
          bat_Counter++;
       
        } else {  //whoseTurn is 1          
          //doomsday attacks (if doomsday is alive, after batman's attack)
         
          if(doom_HP > 0) {
              damage = doom_Atk(doom_Str);
              damage -= bat_Def; //involve defence in the damage calculation
          
              if(damage < 1) { //to have at least 1 damage
                 damage = 1;
              }
              bat_HP -= damage;
              cout << "\t\t\t\t\t BATMAN's Health Point : " << bat_HP << endl << endl;
              doom_Counter++;
          }
          //Sleep(500);
        }
    }
    //showing the result
    if(bat_HP > 0) {  // means battle is finished because doomsday is dead
            cout << "\n\n\n\n\n\t\t\t\t BATMAN IS THE WINNER!! After attacking " <<  bat_Counter << " Times!! \n\n\n" << endl; 
        } else {
            cout << "\n\n\n\n\n\t\t\t\t DOOMSDAY IS THE WINNER!! After attacking " <<  doom_Counter << " Times!! \n\n\n" << endl; 
    }
    system("pause");
    return 0;
}





int bat_Atk(int str) {
  int option = rand()%100; //generate possibilities for the option between 0 - 99
  int dmg;
  
   if(option < 50) {
       dmg = str * 2; 
       cout << "BATMAN Attacks by Punch!! \n";
   } else if(option < 80) {
        dmg = str * 5; 
        cout << "BATMAN Attacks by Throwing Batarang!! \n";
   } else {
        dmg = str * 10; 
        cout << "BATMAN Attacks by Car!! \n";
   }
  return dmg;
}




int doom_Atk(int str) {
  int option = rand()%3; 
  int dmg;
  
  switch(option) {
      case 0: 
          dmg = str * 10; 
          cout << "\t\t\t\t\t\t\t\t\t  DOOMSDAY Attacks by Punching!! \n";
          break; 

      case 1: 
          dmg = str * 5; 
          cout << "\t\t\t\t\t\t\t\t\t  DOOMSDAY Attacks by Kicking!! \n";
          break; 

      case 2: 
          dmg = str * 2; 
          cout << "\t\t\t\t\t\t\t\t\t  DOOMSDAY Attacks by Slapping!! \n";
          break; 
  }
  return dmg;
}