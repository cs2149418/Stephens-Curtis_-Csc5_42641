/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Program to calculate average rainfall
 */

//System Libraries
#include <iostream> 
#include <iomanip>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float year, years, month, months;
    float total, rainF, final, totals;
    //Initialize variables
   
    //Input data
    cout << "This program calculates average rainfall in INCHES! \n";
    cout << "How many years would you like to calculate for? ";
    cin >> years;
    if (years <= 0)
    {
        cout << "Not a valid number of years please reenter years: ";
        cin >> years;
    }
    months =  years * 12;
    //Map inputs to outputs or process the data
    for (year = 1; year <= years; year++)
    {
        total = 0;
        for (month = 1; month <= 12; month++)
        {
            cout << "Enter the rainfall for year " << year; 
            cout<< " month " << month << ": ";
            cin >> rainF;
            if (rainF <= 0)
            {
             cout << "Not a valid measurement. Try again: ";
             cin >> rainF;
            }
            total += rainF;
        }
        totals += total;
        final = totals / months;
        
    }
    //Output the transformed data
    cout << "The number of months examined is " << months << endl;
    cout << "The total rainfall is " << totals << " inches" << endl;;
    cout << "Your Average Rainfall is " << final << " inches per year.";
    //Exit stage right!
    return 0;
}