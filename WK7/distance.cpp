# include <iostream>
# include <math.h>

using namespace std;

double distance(int, int, int, int);
int greet(void);

int main() {
    
    greet();
    int x1, y1, x2, y2;
    cout << "Enter the numbers for P1: ";
    cin >> x1 >> y1;
    cout << "Enter the numbers for P2: ";
    cin >> x2 >> y2;

    cout << "The distance between P1 and P2 is: " << distance(x1, y1, x2, y2) << endl << endl;

    system("pause");
    return 0;
}

double distance(int x1, int y1, int x2, int y2) {   //ここのint と上のintは違うもの
    //return sqrt(pow(x1 - x2) + pow(y2 - y1)));
    //return sqrt((x1 - x2)*(x1 - x2) + (y2 - y1)*(y2 - y1));
    double angular = (x1 - x2)*(x1 - x2) + (y2 - y1)*(y2 - y1);
    return sqrt(angular);
}

int greet(void) {
cout << "Welcome to my program" << endl;
return 0;
}

