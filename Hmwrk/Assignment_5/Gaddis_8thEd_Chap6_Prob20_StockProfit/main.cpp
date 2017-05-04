/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created in 2017
 * Purpose:  Program for stock profit
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
double profited(int, float, float, float, float);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int NS;
    float SP, SC, PP, PC, profit, negate;
    int neg=-1;
    //Initialize variables

    //Input data
    cout<<"What is the number of shares? ";
    cin>>NS;
    cout<<"What is the sales price per share? ";
    cin>>SP;
    cout<<"What is the sales commission paid? ";
    cin>>SC;
    cout<<"What is the purchase price per share? ";
    cin>>PP;
    cout<<"What is the purchase commission paid? ";
    cin>>PC;
    //Map inputs to outputs or process the data
    profit=profited(NS,SP,SC,PP,PC);
    if (profit>=0)
    {
        cout<<"You Profited!\n";
        cout<<"Your profit is $"<<profit<<endl;
    }
    else if (profit<0)
    {
        negate=profit*neg;
        cout<<"You lost $"<<negate;
    }
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

double profited(int NS, float SP, float SC, float PP, float PC)
{
    return ((NS*SP)-SC)-((NS*PP)+PC);
    
}