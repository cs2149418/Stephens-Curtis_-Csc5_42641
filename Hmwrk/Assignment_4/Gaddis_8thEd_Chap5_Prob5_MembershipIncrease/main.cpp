/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Program to show membership free increase
 */

//System Libraries
#include <iostream>
#include <iomanip> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float year = 1;
    float rateStrt = 2500;
    float rateIncr = 1.04;
    float rateFnl;
    //Initialize variables
    
    //Input data
    cout << "Membership Fee Increase Over the Next Six Years \n";
    cout << "--------------------\n";
    cout << "Year \t Rate\n";
    cout << "--------------------\n";
    //Map inputs to outputs or process the data
    for (year > 0; year < 7; year++)
    {
     rateStrt *= rateIncr;
     cout << year << " \t $" << rateStrt << endl;
    }
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}