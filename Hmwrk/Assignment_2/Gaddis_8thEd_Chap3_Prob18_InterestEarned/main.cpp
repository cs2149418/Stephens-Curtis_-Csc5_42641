/* 
  File:   main.cpp
  Author: Curtis Stephens
  Created on January 3, 2017, 12:15 PM
  Purpose:  Write a program to find the interest earned in a savings account
 */

//System Libraries
#include <iostream>
#include <iomanip>  // for set precision
#include <cmath>    // for math functions
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
    
    float principal, rate, rated, percent, timesC, interest, total;
    float ratetime, oneup, power;
    percent = 100;
   
    //Input values
    cout << "Amount in account:       $";
    cin >> principal;
    cout << "Interest rate percentage: ";
    cin >> rate;
    
    cout << "Times Compounded:         ";
    cin >> timesC;
   
    //Process by mapping inputs to outputs
    rated = rate / percent;
    ratetime = rated / timesC;
    
    oneup = 1 + ratetime;
    power = pow(oneup, timesC);
    total = principal * power;
    interest = total - principal;
    
    //Output values

    cout << "Interest:                 $" << interest << endl;
    cout << "Amount in savings:        $" << total << endl;
    //Exit stage right!
    return 0;
}