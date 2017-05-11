/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created in 2017
 * Purpose:  Number Analysis Program
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <fstream>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int size=20;
    int numbers[size];
    //Initialize variables
    int count=0;
    int total=0;
    //Input data
    ifstream inputFile;
    inputFile.open("numbers.txt");
    while (count<size&&inputFile>>numbers[count])
        count++;
    //Map inputs to outputs or process the data
    int highest=0;
    int lowest=1000;
    for(int start=0;start<count;start++)
        if(numbers[start]>highest)
        highest=numbers[start];
    for(int start=0;start<count;start++)
        if(numbers[start]<lowest)
        lowest=numbers[start];
    for(int start=0;start<count;start++)
        total+=numbers[start];
    float average = total/count;
    //Output the transformed data
    cout<<"The lowest number is "<<lowest<<endl;
    cout<<"The highest number is "<<highest<<endl;
    cout<<"The total of the numbers is "<<total<<endl;
    cout<<"The average of the numbers is "<<average<<endl;
    //Exit stage right!
    return 0;
}