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
void selectionSort(int[],float[], int);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int size=12;
    int month[size]={1,2,3,4,5,6,7,8,9,10,11,12};
    float rainfall[size];
    //Initialize variables
    cout<<"This program will record the rainfall for 12 months in inches!\n";
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
    selectionSort(month, rainfall, size);
    cout<<"The rainfall in order is:\n";
    for(int start=0;start<size;start++)
    {
        cout<<"Month "<<month[start]<<" with "<<rainfall[start];
        cout<<" inches"<<endl;
    }
    cout<<"The highest rainfall is "<<highest<<" inches"<<endl;
    cout<<"The lowest rainfall is "<<lowest<<" inches"<<endl;
    //Exit stage right!
    return 0;
}


//************************************
//selection sort
void selectionSort(int month[],float rainfall[], int size)
{
    int startScan, maxIndex, tempValue;
    float maxValue;
    for(startScan=0;startScan<(size-1);startScan++)
    {
        maxIndex=startScan;
        maxValue=rainfall[startScan];
        tempValue=month[startScan];
        for(int index=startScan+1;index<size;index++)
        {
            if(rainfall[index]>maxValue)
            {
                maxValue=rainfall[index];
                maxIndex=index;
                tempValue=month[index];
            }
        }
        rainfall[maxIndex]=rainfall[startScan];
        rainfall[startScan]=maxValue;
        month[maxIndex]=month[startScan];
        month[startScan]=tempValue;
    }
}