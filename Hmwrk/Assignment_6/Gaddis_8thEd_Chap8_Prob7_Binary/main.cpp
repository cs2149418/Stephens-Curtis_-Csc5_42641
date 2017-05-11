/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created in 2017
 * Purpose:  search
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void selectionSort(string [], int);
long binarySearch(string[], int, string);
//Execution begins here
int main(int argc, char** argv) 
{
    //Declare variables
    const int number=20;
    string search;
    int results;
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
    cout<<"What name are you looking for? ";
    cin>>search;
    results=binarySearch(names, number, search);
    if (results==-1)
    {    
        cout<<"The name was not found\n";
    }
    else
        cout<<"The name was found.\n";
    //Map inputs to outputs or process the data
    
    //Output the transformed data

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


//*****************
//search
long binarySearch(string names[], int number, string search)
{
    long first=0;
    long last=number-1;
    long middle;
    int position=-1;
    bool found=false;
    while(!found&&first<=last)
    {
        middle=(first+last)/2;
        if(names[middle]==search)
        {
            found=true;
            position=middle;
        }
        else if (names[middle]>search)
            last=middle-1;
        else
            first=middle+1;
    }
    return position;
}