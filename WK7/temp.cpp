# include <iostream>

using namespace std;

double convertTemp(double);
void greet(void);

int main() {
    
    //greet();
    double fahrTemp, celsTemp;
    cout << "Enter today's temperature in Fahrenheit: ";
    cin >> fahrTemp;

    celsTemp = convertTemp(fahrTemp);
    
    //cout << "The converted Temperature in Celsius is: " << celsTemp << endl;
    printf("The converted Temperature in Celsius is: %.2f \n\n", celsTemp);
    
    
    system("pause");
    return 0; 
}

double convertTemp(double fahr) {
    //double f = (1.8 * c) + 32;
    //double c = (F - 32) / 1.8;
    return ((fahr - 32.0) / 1.8 );
}