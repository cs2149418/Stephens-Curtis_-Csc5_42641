/* 
  File:   main.cpp
  Author: Curtis Stephens
  Created on January 3, 2017, 12:15 PM
  Purpose:  Program to figure out ticket profit at a stadium
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
    cout << setprecision(2) << fixed;
    float classA = 15;
    float classB = 12;
    float classC = 9;
    float Asold, Bsold, Csold;
    //Input values
    cout << setprecision(2) << fixed << showpoint;
    cout << "How many tickets were sold for class A? ";
    cin >> Asold;
    cout << "How many tickets were sold for class B? ";
    cin >> Bsold;
    cout << "How many tickets were sold for class C? ";
    cin >> Csold;
    //Process by mapping inputs to outputs
    float Arev, Brev, Crev, total;
    Arev = classA * Asold;
    Brev = classB * Bsold;
    Crev = classC * Csold;
    total = Arev + Brev + Crev;
    
    //Output values
   
    cout << "Class A generated $" << Arev << endl;
    cout << "Class B generated $" << Brev << endl;
    cout << "Class C generated $" << Crev << endl;
    cout << "The total revenue generated is $" << total;
    //Exit stage right!
    return 0;
}