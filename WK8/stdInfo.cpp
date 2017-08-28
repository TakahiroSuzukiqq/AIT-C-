# include <iostream>
# include <string>
# define SIZE 3   //ラベル化することで下で楽できる

using namespace std;

int main() {
    
    //const int SIZE = 5; という風にも書ける
    string stdName[SIZE];
    int stdId[SIZE];
    double stdGPA[SIZE];
    double classTotal = 0;
    double classAverage;
    char plusMinus;
  
    //Getting Information of the Class
    for(int i=0; i < SIZE; i++) {
    cout << "Enter the student's name " << i + 1 << " : ";
    //cin >> stdName[i];
    getline(cin, stdName[i]);
    cout << "Enter the student's ID "  << i + 1 << " : ";
    cin >> stdId[i];
    cout << "Enter the student's GPA " << i + 1 << " : ";
    cin >> stdGPA[i];
    classTotal += stdGPA[i];//classTotal = classTotal + stdGPA[i];

    cin.ignore(); //ここにおくことで、ループの繰り返しの際にできる下の\nによる空白スペースを格納することを無視してgetlineが2つめの名前を正しく記録できる
    cout << endl;
    }
    

    classAverage = classTotal / SIZE;
    //Calculate the Aerage  GPA of the Class
    //cout << " The Average GPA of the Class is :" <<  classAverage << endl;
    printf("\n\n The Average GPA of the Class is : %.2f \n\n", classAverage);
     
    //Displaying the Class List
    printf(" ID     NAME   GPA        +/-   \n");   //if the student have the GPA which is higher than the average GPA or eqal to the average show +, otherwise-. 
    printf("-------------------------------------\n");
   
    //================
    // if(stdGPA >= classAverage) {
    //   for (int i = 0; i < SIZE; i++) {
    //     printf("  %d     %s     %.2f    %s     \n", stdId[i], stdName[i].c_str(), stdGPA[i], "+");
    //   cout << endl << endl;
    //   }
    // } else {
    //    for (int i = 0; i < SIZE; i++) {
    //      printf("  %d     %s     %.2f    %s     \n", stdId[i], stdName[i].c_str(), stdGPA[i], "-");
    //    cout << endl << endl;
    // }
    // }
    //================
    //================
      for (int i = 0; i < SIZE; i++) {
        if(stdGPA[i] >= classAverage) {
          plusMinus = '+';
          printf("  %d     %s     %.2f    %c     \n", stdId[i], stdName[i].c_str(), stdGPA[i], plusMinus);  // s for string, c for character
        } else {
          plusMinus = '-';
          printf("  %d     %s     %.2f    %c     \n", stdId[i], stdName[i].c_str(), stdGPA[i], plusMinus);
        }
         cout << endl << endl;
     } 
    //================


    system("pause");
    return 0;
}