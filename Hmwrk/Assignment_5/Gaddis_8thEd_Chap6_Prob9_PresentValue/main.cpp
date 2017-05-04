/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on April 4th, 2017, 11:32 AM
 * Purpose: Program for Present Value
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int decimal=100;
//Function Prototypes
float presentValue(float, float, float);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float future, interest, interested, years, present;
    //Initialize variables
    
    //Input data
    cout<<"This program will tell you how much you need ";
    cout<<"to put in a savings account right now to hit ";
    cout<<"your projected goal!"<<endl;
    cout<<"What is the goal amount you are trying to hit? $";
    cin>>future;
    cout<<"What is the annual interest rate(%)? ";
    cin>>interest;
    interested=interest/100;
    cout<<"In how many years would you like to hit this goal? ";
    cin>>years;
    //Map inputs to outputs or process the data
    present=presentValue(future, interested, years);
    //Output the transformed data
    cout<<"The amount you need to place in the account now is $";
    cout<<present;
    //Exit stage right!
    return 0;
}


float presentValue(float future, float interested, float years)
{
    float bottom=1+interested;
    float bottomed=pow(bottom, years);
    float present=future/bottomed;
    
    return present;
}

