/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created in 2017
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
int decimal=100;
//Function Prototypes
double newPopulation(float, float, float);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int years; 
    double startPop, newPop, birth, BR, death, DR;
    //Initialize variables
    
    //Input data
    cout<<"This program will calculate population growth and decay!\n";

    cout<<"How many years would you like to do this for?: ";
    cin>>years;
    //Map inputs to outputs or process the data
    for(int start=1;start<=years;start++)
    {
        cout<<"What is the starting size of the population for year "<<start;
        cout<<"?: ";
        cin>>startPop;
        cout<<"What is the annual birth rate (%): ";
        cin>>birth;
        BR=birth/decimal;
        cout<<"What is the death rate (%)?: ";
        cin>>death;
        DR=death/decimal;
        newPop=newPopulation(startPop,BR,DR);
        cout<<"The new population for year "<<start<<" is "<<newPop<<endl;
    }
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

//******************************
//Population growth/decay
double newPopulation(float startPop, float BR, float DR)
{
    return startPop+(BR*startPop)-(DR*startPop);
}