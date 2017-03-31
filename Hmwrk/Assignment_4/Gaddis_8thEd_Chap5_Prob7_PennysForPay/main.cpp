/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Program to calculate pay in increasing pennies per day
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
    unsigned short day, dayMax;
    float payStrt, payIncrs;
    payStrt = 0;
    day = 1;
    payIncrs = .01;
    //Initialize variables
    cout << "This program calculates your pay by day." << endl;
    cout << "Everyday that you work your pay increases one penny." << endl;
    cout << "How many days did you work for? ";
    cin >> dayMax;
    if (dayMax < 1)
    {
        cout << "Not a valid amount of days. Please reenter: ";
        cin >> dayMax;
    }
    //Input data
    for (day;day <= dayMax; day++)
    {
        payStrt += payIncrs;
        payIncrs += .01;
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout << "You worked " << dayMax << " days and will get paid $" << payStrt;
    //Exit stage right!
    return 0;
}
