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
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void selectionSort(string [], int);
//Execution begins here
int main(int argc, char** argv) 
{
    //Declare variables
    const int number=20;
    string names[number]={"Collins, Bill", "Smith, Bart", "Allen, Jim",
                    "Griffin, Jim","Stamey, Marty","Rose, Geri","Taylor, Terri", 
                    "Johnson, Jill","Allison, Jeff","Looney, Joe","Wolfe, Bill",
                    "James,Jim","Weaver, Jim", "Pore, Bob", 
                    "Rutherford, Greg", "Javens, Renee", "Harrison, Rose",                
                    "Setzer, Cathy","Pike, Gordon", "Holland, Beth"};                               
    //Initialize variables
    cout<<"Here is the names...\n";
    for(int start=0;start<number;start++)
    {
        cout<<names[start]<<endl;
    }
    cout<<endl<<endl;
    //Input data
    selectionSort(names,number);
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"...now they are sorted\n";
    for(int start=0;start<number;start++)
    {
        cout<<names[start]<<endl;
    }
    //Exit stage right!
    return 0;
}

//***************************************************************
//sort
void selectionSort(string names[], int number)
{
int startScan, minIndex;
string minValue;

for(startScan = 0; startScan < (number-1); startScan++)
{
    minIndex = startScan;
    minValue = names[startScan];
    for(int index = startScan +1; index <number; index++)
    {
        if (names[index] < minValue)
        {
            minValue = names[index];
            minIndex = index;
        }
    }
    names[minIndex] = names[startScan];
    names[startScan] = minValue;
}
}
