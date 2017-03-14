/* 
  File:   main.cpp
  Author: Curtis Stephens
  Created on Feb 21, 2017, 12:15 PM
  Purpose:  Program to figure out sales tax.
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
    int price = 95;
    double state = price * 0.04 + price;
    double county = price * 0.02;
    //Input values
    
    //Process by mapping inputs to outputs
    double total = state + county;
    //Output values
    cout << "After county and state tax, "
            << "your total on $95 is $" << total;
    //Exit stage right!
    return 0;
}