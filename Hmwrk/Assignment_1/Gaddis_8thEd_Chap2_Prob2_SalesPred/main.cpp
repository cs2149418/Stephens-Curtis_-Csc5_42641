/* 
  File:   main.cpp
  Author: Curtis Stephens
  Created on February 21, 2017, 12:15 PM
  Purpose:  Program to predict sales
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
    double orig = 8600000, discnt;
    //Input values
    
    //Process by mapping inputs to outputs
    discnt = orig * 0.58;
    //Output values
    cout << "The East coast sales next year will be " 
            << discnt << endl;
    
    //Exit stage right!
    return 0;
}