/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  program to figure out paycheck with dependent if
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
    float payRate, hrsWrkd, check;
    //Initialize variables
    cout << "How much do you get paid an hour? $";
    cin >> payRate;
    cout << "How many hours did you work? ";
    cin >> hrsWrkd;
    //Input data
    
    //Map inputs to outputs or process the data
    if (hrsWrkd <= 40 && hrsWrkd >= 0)
        check = payRate * hrsWrkd;
    else if (hrsWrkd > 40)
        check = (payRate * hrsWrkd) + ((hrsWrkd-40) * payRate);
    else
        cout << "Not a valid amount of hours." << endl;
    //Output the transformed data
    cout << "Your paycheck should be $" << check;
    //Exit stage right!
    return 0;
}
