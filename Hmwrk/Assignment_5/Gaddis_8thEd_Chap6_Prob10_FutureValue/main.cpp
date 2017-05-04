/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created in 2017
 * Purpose:  program for future value
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float futureValue(float, float, float);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float future, present, interest, interested, months;
    //Initialize variables
    
    //Input data
    cout<<"This program will calculate your future balance of ";
    cout<<"a savings account!"<<endl;
    cout<<"What is the present value? $";
    cin>>present;
    cout<<"What is the monthly interest rate (%)? ";
    cin>>interest;
    interested=interest/100;
    cout<<"For how many months would you like to calculate? ";
    cin>>months;
    //Map inputs to outputs or process the data
    future=futureValue(present, interested, months);
    //Output the transformed data
    cout<<"The amount you will have in "<<months<<" months is $"<<future;
    //Exit stage right!
    return 0;
}

//future value!!!
float futureValue(float present, float interested, float months)
{
    float inside=(1+interested);
    float exp=pow(inside,months);
    float future=present*exp;
    
    return future;
}