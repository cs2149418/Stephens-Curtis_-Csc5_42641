/* 
  File:   main.cpp
  Author: Curtis Stephens
  Created on Feb 21, 2017, 12:15 PM
  Purpose:  Program to compute the tax and tip on a restaurant bill
 */

//System Libraries
#include <iostream>
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
    double meal = 88.67;
    double tax = .0675;
    double tip = 0.2;
    //Input values
    double taxed = meal * tax;
    double tipped = meal * tip;
    //Process by mapping inputs to outputs
    double total = meal + taxed + tipped;
    //Output values
    cout << "The meal cost $" << meal << endl;
    cout << "The Tax was $" << taxed << endl;
    cout << "The tip was $" << tipped << endl;
    cout << "The total cost was $" << total << endl;
    //Exit stage right!
    return 0;
}