/* 
  File:   main.cpp
  Author: Curtis Stephens
  Created on February 21, 2017, 12:15 PM
  Purpose:  Program to find the total of a sale
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
    double itemOne = 15.95;
    double itemTwo = 24.95;
    double itemThree =  6.95;
    double itemFour = 12.95;
    double itemFive = 3.95;
    double tax = 0.07;
   
    //Input values
    double total = itemOne + itemTwo + itemThree + itemFour + itemFive;
    double taxed = total * tax;
    double grand = total + taxed;
    //Process by mapping inputs to outputs
   
    //Output values
    cout << "The price of item one is $" << itemOne << endl;
    cout << "The price of item two is $" << itemTwo << endl;
    cout << "The price of item three is $" << itemThree << endl;
    cout << "The price of item four is $" << itemFour << endl;
    cout << "The price of item five is $" << itemFive << endl;
    cout << "The total of the items before tax is $" << total << endl;
    cout << "The tax on the total is $" << taxed << endl;
    cout << "Bringing the grand total to $" << grand << endl;
    
    //Exit stage right!
    return 0;
}