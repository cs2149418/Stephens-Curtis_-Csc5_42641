/* 
  File:   main.cpp
  Author: Curtis Stephens
  Created on January 3, 2017, 12:15 PM
  Purpose:  Program  to figure out how much insurance coverage you should get on
 * a property
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
    float building, coveragecost, coverage ;
    coveragecost = .8;
    
    //Input values
    cout << "How much would it cost to replace the building?  $";
    cin >> building;
    coverage = coveragecost * building;
    //Process by mapping inputs to outputs
    cout << "You should cover the building for:               $" << coverage;
    cout << " worth of insurance.";
    //Output values

    //Exit stage right!
    return 0;
}