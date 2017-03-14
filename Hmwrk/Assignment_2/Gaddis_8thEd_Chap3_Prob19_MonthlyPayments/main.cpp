/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  program to calculate a monthly payment
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float monthly, prince, payments; //variables
    float decimal, decimalTwo;
    float oneup, squared, top, bottom, finalpay; //figuring out prob
    //Initialize variables
    
    //Input data
    cout << "Loan Amount:                     $";
    cin >> prince;
    cout << "Monthly Interest Rate Percentage: ";
    cin >> monthly;
    cout << "Number of Payments:               ";
    cin >> payments;
    decimal = monthly / 100;
    //Map inputs to outputs or process the data
    oneup = 1 + decimal;
    squared = pow(oneup, payments);
    top = decimal * squared;
    bottom = squared - 1;
    finalpay = top / bottom * prince;
    //Output the transformed data
   
    cout << setprecision(2) << fixed;
    cout <<  "Monthly payment:                 $" << finalpay << endl;
    
    float totalpay = finalpay * payments;
    float interested = totalpay - prince;
    
    cout << "Amount Paid Back:                $" << totalpay << endl;
    cout << "Interest Paid:                   $" << interested;
    //Exit stage right!
    return 0;
}