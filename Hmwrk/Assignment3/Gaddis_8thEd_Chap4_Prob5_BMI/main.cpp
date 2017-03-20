/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Program to figure out your mass body index
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float weight, height, bm, bmi;
    float bottom, top;
    //Initialize variables
    bottom = 18.5;
    top = 25;
    //Input data
    cout << "Weight in pounds? ";
    cin >> weight;
    cout << "Height in inches? ";
    cin >> height;
    
    //Map inputs to outputs or process the data
    bm = pow(height, 2);
    bmi = weight * (703 / bm);
    cout << "Your body mass index is " << bmi << endl;
    //Output the transformed data
    if (bmi <= bottom)
        cout << "You are considered underweight.\n";
    else if (bmi > bottom && bmi < top)
            cout << "Your body mass is optimal. \n";
    else if (bmi >= top)
            cout << "You are considered overweight \n";
    
    //Exit stage right!
    return 0;
}
