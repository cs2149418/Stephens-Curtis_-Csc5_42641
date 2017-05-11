/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on April 4th, 2017, 11:32 AM
 * Purpose:  Program for rainfall statistics 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int size=12;
    int month[size];
    float rainfall[size];
    //Initialize variables
    cout<<"This program will record the rainfall for 12 months!\n";
    //Input data
    for(int start=0;start<size;start++)
    {
        cout<<"Enter rainfall for month "<<(start+1)<<": ";
        cin>>rainfall[start];
    }
    //Map inputs to outputs or process the data
    float highest=0;
    float lowest=100000;
    for(int start=0;start<size;start++)
    {
        if(rainfall[start]<lowest)
            lowest=rainfall[start];
        if(rainfall[start]>highest)
            highest=rainfall[start];
    }
    //Output the transformed data
    cout<<"The highest rainfall is "<<highest<<endl;
    cout<<"The lowest rainfall is "<<lowest<<endl;
    //Exit stage right!
    return 0;
}