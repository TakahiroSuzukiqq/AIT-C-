// Scenario 1: Miles per Gallon.
/*
Premide. One litre of fuel is 0.264179 gallons. 
1. Write a program that will read in the "number of litres" of petrol consumed by the users car.
2. Writeb a program that will read in the "number of miles" traveled by the car. 
3. The program should then output the number of "miles per gallon" the car delivered.
4. You must show the outputs as given in the example.
5. You must show the numbers in "fixed point left justified" and in three decimal places as in the example
*/
// Example  
/*
This program read the number of liters of gasoline consumed (gasoline
In Liters) and the number of miles traveled by the car (miles)
Please enter the number of liters of gasoline consumed: 15.5
Please enter the number of miles traveled by the car: 75
Gasoline consumed (in liters) Miles travelled Miles per Gallon
15.000 75.000 18.316
Note: user entered values are shown in bold blue
*/





# include <iostream>
# include<stdio.h>
// # define BOLDBLUE    "\033[1m\033[34m" 

using namespace std;

int main () {
    
    const float galonPerLitre = 0.264179; 
    float litres, miles;

    cout << "This program read the number of liters of gasoline consumed (gasoline In Liters)," << endl;
    cout << "and the number of miles traveled by the car (miles)" << endl << endl;
    
    cout << "Please enter the number of liters of gasoline consumed: ";
    cin >> litres; 

    cout << "Please enter the number of miles traveled by the car: ";
    cin >> miles; 

    cout << endl << endl; 

    float galon = galonPerLitre * litres;
    float milesPergalon = galon / miles;


    cout << "Gasoline consumed (in liters)      "; 
    cout << "Miles travelled      "; 
    cout << "Miles per Gallon" << endl;
    
    //cout << galon << "                            ";
    printf("%.3lf                              ", galon);
   
    // std::cout.width(27); std::cout << miles;
    //cout << miles << "                   ";
    printf("%.3lf               ", miles);

    // std::cout.width(22); std::cout << milesPergalon << endl;
    //cout << milesPergalon << endl;
    printf("%.3lf\n", milesPergalon);

    cout << endl;

    system("pause");
    return 0;
}
