/* 
  File:   main.cpp
  Author: Curtis Stephens
  Created on Feb 21, 2017, 12:15 PM
  Purpose:  Program to figure out how far you can go on a tank of gas.
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
    int tank = 20;
    double city = 23.5;
    double highway = 28.9;
    //Input values
    double citym = tank * city;
    double highm = tank * highway;
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout << "The distance a car can go when driving in the city on one tank of gas is "
            << citym << " miles." << endl;
    cout << "The distance a car can go when driving in the highway on one tank of gas is "
            << highm << " miles." << endl;
    //Exit stage right!
    return 0;
}