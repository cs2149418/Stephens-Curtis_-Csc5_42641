/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Program to figure out distance using time and mph
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
    float mph, timeEnd, time, distance;
    float timeStrt = 1;
    //Initialize variables
    
    //Input data
    cout << "This program will generate a table for distance traveled ";
    cout << "given a time and a speed." << endl;
    cout << "What is the speed of the vehicle in mph? ";
    cin >> mph;
    cout << "How many hours has it traveled? ";
    cin >> timeEnd;
    cout << "Hours \t Distance Traveled (miles) " << endl;
    cout << "--------------------" << endl;
    //Map inputs to outputs or process the data
    for (time = timeStrt; time <= timeEnd; time++)
    {
        distance = time * mph;
        cout << time << " \t " << distance << endl;
    }
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}
