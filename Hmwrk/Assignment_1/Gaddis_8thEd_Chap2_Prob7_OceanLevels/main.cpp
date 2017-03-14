/* 
  File:   main.cpp
  Author: Curtis Stephens
  Created on February 21, 2017, 12:15 PM
  Purpose:  Program to predict rise of the ocean over different lengths of time
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
    double rise = 1.5;
    double five = 5;
    double seven = 7;
    double ten = 10;
    //Input values
    double fives = rise * five;
    double sevens = rise * seven;
    double tens = rise * ten;
    //Process by mapping inputs to outputs
   
    //Output values
    cout << "The rise of the ocean over five years is " << fives <<
            " millimeters" << endl;
    cout << "The rise of the ocean over seven years is " << sevens <<
            " millimeters" << endl;
    cout << "The rise of the ocean over ten years is " << tens <<
            " millimeters" << endl;
    //Exit stage right!
    return 0;
}