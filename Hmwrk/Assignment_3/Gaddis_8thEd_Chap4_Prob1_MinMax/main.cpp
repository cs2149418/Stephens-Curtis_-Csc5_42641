/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Program to figure out which number is greater
 *
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float num1, num2;
    //Initialize variables
    
    //Input data
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;   
    //Map inputs to outputs or process the data
    if (num1 > num2)
        cout << num1 << " is the greater number" << endl;
    else if (num2 > num1)
        cout << num2 << " is the greater number" << endl;
    else if (num1 == num2)
        cout << "The numbers are equal" << endl;
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}