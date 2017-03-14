/* 
  File:   main.cpp
  Author: Curtis Stephens
  Created on January 3, 2017, 12:15 PM
  Purpose:  Calculate the average of five test scores
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    cout << setprecision(1) << fixed;
    float test1, test2, test3, test4, test5, number;
    number = 5;
    //Input values
    cout << "Score of test 1: ";
    cin >> test1;
    cout << "Score of test 2: ";
    cin >> test2;
    cout << "Score of test 3: ";
    cin >> test3;
    cout << "Score of test 4: ";
    cin >> test4;
    cout << "Score of test 5: ";
    cin >> test5;
    //Process by mapping inputs to outputs
    float aver = test1 + test2 + test3 + test4 + test5;
    float average = aver / number;
    //Output values
    cout << "The average of the five test scores is " << average;
    //Exit stage right!
    return 0;
}