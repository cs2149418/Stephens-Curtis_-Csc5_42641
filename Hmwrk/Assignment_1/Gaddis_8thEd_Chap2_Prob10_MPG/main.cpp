/* 
  File:   main.cpp
  Author: Curtis Stephens
  Created on Feb 21, 2017, 12:15 PM
  Purpose:  Program to calculate miles per gallon.
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
    int miles = 375;
    int gallon = 15;
    //Input values
    int mpg = miles / gallon;
    //Process by mapping inputs to outputs
    
    //Output values
    cout << "A car holding " << gallon << " gallons of gas," << endl;
            
    cout << "that goes " << miles << " miles, will get you " << mpg << " miles per gallon." << endl;
            
    //Exit stage right!
    return 0;
}
