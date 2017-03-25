/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Program to figure out book club points
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
    float purch, points;
   
    //Initialize variables
     
    //Input data
    cout << "How many books did you purchase this month? ";
    cin >> purch;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    if (purch == 0)
        cout << "You have earned 0 points. " << endl;
    else if (purch == 1)
        cout << "You have earned 5 points!" << endl;
    else if (purch == 2)
        cout << "You have earned 15 points!" << endl;
    else if (purch == 3)
        cout << "You have earned 30 points!" << endl;
    else if (purch >= 4)
        cout << "You have earned 60 points!" << endl;
    //Exit stage right!
    return 0;
}
