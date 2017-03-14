/* 
  File:   main.cpp
  Author: Curtis Stephens
  Created on January 3, 2017, 12:15 PM
  Purpose:  Program to compute monthly tax
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
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
    string month;
    float totaltax, taxS, taxC, totalCollect;
    totaltax = .06;
    taxS = .04;   // percentage for state
    taxC = .02;  //percentage for county
    
    //Input values
    cout << "Month: ";
    cin >> month;
    cout << "Total Collected:    $";
    cin >> totalCollect;
    
    //Process by mapping inputs to outputs
    float county, state, total, sales;
    county = totalCollect * taxC;  // county tax
    state = totalCollect * taxS;   // state tax
    total = totalCollect * totaltax;
    sales = totalCollect - total;
    
    //Output values
    cout << "County Sales Tax:   $" << county << endl;
    cout << "State Sales Tax:    $" << state << endl;
    cout << "Total tax:          $" << total << endl;
    cout << "Sales:              $" << sales << endl;
    //Exit stage right!
    return 0;
}