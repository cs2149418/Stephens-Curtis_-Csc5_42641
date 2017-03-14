/* 
  File:   main.cpp
  Author: Curtis Stephens
  Created on January 3, 2017, 12:15 PM
  Purpose:  Program to compute property tax
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
    float AV, PTbreak, PT, value; //variables
    float asses, dollar, cents;  //constants
    asses = .6;
    dollar = 100;
    cents = .75;
    //Input values
    cout << "What is the properties value? $";
    cin >> value;
    //Process by mapping inputs to outputs
    AV = value * asses;
    PTbreak = AV / dollar;
    PT = PTbreak * cents;
  
    
    //Output values
    cout << "The assessment value is $" << AV << endl;
    cout << "The property tax is $" << PT;
    //Exit stage right!
    return 0;
}