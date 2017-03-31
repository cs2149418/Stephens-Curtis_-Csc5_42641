/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Program to create a chart for rising ocean
 * levels
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float year, final;
    float start = 1;
    float end = 25;
    float rise = 1.5;
    //Initialize variables
    
    //Input data
    cout << "Year\tRise of Ocean (mm)\n";
    cout << "----------------\n";
    
    //Map inputs to outputs or process the data
    for (year >= start; year <= end; year++)
    {
        final = year * rise;
        cout << year << "\t" << final << endl;
    }
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}