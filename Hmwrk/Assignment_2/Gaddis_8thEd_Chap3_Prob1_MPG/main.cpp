/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Program to figure out miles per gallon
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float gallons;
    float milesdriven;
    
    //Initialize variables
    
    //Input data
     cout << "How many miles can the car drive on a full tank of gas? ";
    cin >> milesdriven;
    cout << "How many gallons can the car hold? ";
    cin >> gallons;
   
    float mpg = milesdriven / gallons;
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout << "The miles per gallon is " << mpg << endl;
    //Exit stage right!
    return 0;
}

