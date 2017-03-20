/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Program to figure out magic dates!
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
    int month, day, year;   // for date
    //Initialize variables
    
    //Input data
    cout << "What date are you trying to check? " << endl;
    cout << "Number associated with month: ";
    cin >> month;
    cout << "Day of the month: ";
    cin >> day;
    cout << "Last two digits of the year: ";
    cin >> year;
    
    //Map inputs to outputs or process the data
    if (month * day == year)
        cout << "The date is magic!";
    else 
        cout << "The date is not magic.";
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}
