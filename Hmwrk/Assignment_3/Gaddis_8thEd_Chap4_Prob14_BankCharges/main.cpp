/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Program to compute banks monthly service fees
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
    float checkW, accountB;  //variables
    float fee1, fee2, fee3, fee4, pay, final;
    float flat = 10;
    float under = 15;
  
    //Initialize variables
    fee1 = .1;
    fee2 = .08;
    fee3 = .06;
    fee4 = .04;
            
    //Input data
    cout << "How many checks did you write this month? ";
    cin >> checkW;
    cout << "What is the balance in your account? $";
    cin >> accountB;
    //Map inputs to outputs or process the data
    if (accountB < 0)
        cout << "Urgent Account Over Drawn!" << endl;
    else if (accountB > 0 && accountB < 400)
    {
        if (checkW > 0 && checkW < 20)
        pay = checkW * fee1 + under;
        else if (checkW >= 20 && checkW < 40)
        pay = checkW * fee2 + under;
        else if (checkW >=40 && checkW < 60)
        pay = checkW * fee3 + under;
        else if (checkW >= 60)
        pay = checkW * fee4 + under;
        else
        cout << "Invalid number of checks!" << endl;
    }
    else if (accountB >= 400)
    {
        if (checkW > 0 && checkW < 20)
        pay = checkW * fee1;
        else if (checkW >= 20 && checkW < 40)
        pay = checkW * fee2;
        else if (checkW >=40 && checkW < 60)
        pay = checkW * fee3;
        else if (checkW >= 60)
        pay = checkW * fee4;
        else
        cout << "Invalid number of checks!" << endl;
    }
    
    
    //Output the transformed data
    final = pay + flat;
    cout << "The monthly service charges incurred are $" << final << endl;
    //Exit stage right!
    return 0;
}