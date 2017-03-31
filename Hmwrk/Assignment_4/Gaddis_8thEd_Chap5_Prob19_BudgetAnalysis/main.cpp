/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Program for budget analysis
 */

//System Libraries
#include <iostream>
#include <iomanip>//Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float total, expense, start, minus;
    //Initialize variables
    
    //Input data
    cout << "This program will calculate your budget for the month!" << endl;
    cout << "How much are you trying to budget for the month? $";
    cin >> start;
    cout << "Enter the first expense (enter 0 when you are done entering): $";
    cin >> expense;
    
    //Map inputs to outputs or process the data
    while (expense != 0)
    {
    total += expense;
    minus = start - total;
    cout << "What is the next expense? $";
    cin >> expense;
    }
    //Output the transformed data
    cout << "The remaining balance for your budget is $"  << minus;
    //Exit stage right!
    return 0;
}
