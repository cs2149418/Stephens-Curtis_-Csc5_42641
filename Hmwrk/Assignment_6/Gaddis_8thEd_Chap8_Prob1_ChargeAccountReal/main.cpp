/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created in 2017
 * Purpose: Charge Account Validation Program
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int size=18;
//Function Prototypes
long searchList(long[],int,long);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    long validAcct[size]={1005231, 1250255, 1302850, 3852085, 4520125, 4562555,
                        4581002, 5050552, 5552012, 5658845, 6545231, 7576651, 
                        7825877, 7881200, 7895122, 8080152, 8451277, 8777541};
    long results, acctNum;
    //Initialize variables
    
    //Input data
    cout<<"This program will validate your account.\n";
    cout<<"Enter your account number: ";
    cin>>acctNum;
    //Map inputs to outputs or process the data
    results=searchList(validAcct, size, acctNum);
    if (results==-1)
    {    
        cout<<"The account is not valid.\n";
    }
    else
        cout<<"The account number was found.\n";
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}


//*****************
//search
long searchList(long validAcct[], int size, long acctNum)
{
    int index=0;
    int position=-1;
    bool found=false;
    while(index<size&&!found)
    {
        if(validAcct[index]==acctNum)
        {
            found=true;
            position=index;
        }
        index++;
    }
    return position;
}