//include"stdafx.h"
#include<iostream>
#include<string>
#include<cctype>  //good for checking chars and changing them

#include"countOccurances.h"
#include"replaceOccurances.h"
#include"updateString.h"
#include"makeUppercase.h"

using namespace std;

//void main() {
int main() {    
    
    bool keepLooping = true;
    string mainString, searchString;
    int option, counter;
    
    cout << "Input sentance : " << endl;
    getline(cin, mainString);
    cout << "Input search : " << endl;
    getline(cin, searchString);
    
    while(keepLooping) {
        cout << "\n\n\t\t\t Menu \n"
            "1. Count how many occurances the search string shows up in the sentance \n"
            "2. Replace any occurances of the search string in the sentance with x's(same length of search) \n"
            "   e.g  exx wef sxx asxxsxxsxx \n"
            "3. Get a new sentance and search string \n"
            "4. Make everything upper case in both sentance and search string \n"
            "5. Exit \n" 
            " Choose your option : ";
        
        cin >> option; 
        switch(option) {
            case 1:
            counter = countOccurances(mainString, searchString);
            cout << counter;
            break;
            case 2:
            mainString = replaceOccurances(mainString, searchString, 'x');
            cout << mainString;
            break;
            case 3:
            cout << "Enter a New Main Sentence :";
            mainString = updateString();
            cout << "Enter a New Search String : "; 
            searchString = updateString();
            break;
            case 4:
            mainString = makeUppercase(mainString);
            cout << "The Updated Main Sentence is : " << mainString << endl;
            searchString = makeUppercase(searchString);
            cout << "The Updated Search String is : " << searchString << endl;
            break;
            case 5:
            keepLooping = false;
            break;  
            default:
            cout << "Error, Not a Valid option. Try again" << endl;
        }
    }


    system("pause");
    //return 0;
}