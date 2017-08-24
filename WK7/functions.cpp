# include <iostream>
# include <math.h>

using namespace std;

double convertTemp(double); // prototype of CONVERTTEMP Function
double distance(int, int, int, int);
int greetAndChoose(void);

int main() {

    switch(greetAndChoose()){ // Converting Temperatures
    
    //========Convert fahrenheit to celsius========
    case 1: 
    double fahrTemp, celsTemp;
    cout << "Enter today's temperature in Fahrenheit: ";
    cin >> fahrTemp;

    //printf(" The converted Temperature in Celsius is : %.2f \n\n",celsTemp);
    celsTemp = convertTemp(fahrTemp);

    //cout << "The converted Temperature in Celsius is: " << celsTemp << endl;
    printf("The converted Temperature in Celsius is: %.2f \n\n", celsTemp);
    
    break;
    //=============================================

    //====Find the distance between two points====
    case 2:    
    int x1, y1, x2, y2;
    cout << "Enter the numbers for Point1(P1): ";
    cin >> x1 >> y1;
    cout << "Enter the numbers for Point2(P2): ";
    cin >> x2 >> y2;
    
    cout << endl;

    cout << "The distance between P1 and P2 is: " << distance(x1, y1, x2, y2) << endl << endl;
    
    break;
    //=============================================

    }

    system("pause");
    return 0;
}


double distance(int x1, int y1, int x2, int y2) {  
    double temp = (x1 - x2)*(x1 - x2) + (y2 - y1)*(y2 - y1);
    return sqrt(temp);
}


double convertTemp(double fahr) {
    return ((fahr - 32.0) / 1.8);
}


int greetAndChoose(void) {
cout << "Welcome to my program" << endl;
cout << "Choose from the menu" << endl;
cout << "1- Convert fahrenheit to celsius" << endl;
cout << "2- Find the distance between two points" << endl;
int option;
cin >> option;
while(option != 1 && option != 2)
cin >> option;

return option;

}

