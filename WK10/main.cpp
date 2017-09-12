#include<iostream>
#include<string>

using namespace std;

int main() {
    // enum carbrand_t {
    //     Audi,
    //     BMW,
    //     Ford,
    //     Jaguar,
    //     Lexus,
    //     RollsRoyce
    // };  //or below 
     enum carbrand {
        Audi,
        BMW,
        Ford,
        Jaguar,
        Lexus,
        RollsRoyce
    };
    
    //carbrand_t my_car_brand; //or below
    carbrand my_car_brand;
    my_car_brand = Audi;
    cout << my_car_brand << endl;
    
    if(my_car_brand == Ford)
       cout << "Hello, Ford-car owner!!" << endl;

    system("pause");
    return 0;
}