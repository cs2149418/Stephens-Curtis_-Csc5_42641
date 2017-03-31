/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Program to calculate payroll for employees. 
 */

//System Libraries
#include <iostream> 
#include <iomanip>//Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    unsigned short empNo;
    float grossPay, stateTax, fedTax, fica;  //entry
    float grossTot, stateTot, fedTot, ficaTot, taxTot; //totals
    
    //Initialize variables
    grossTot = 0;
    stateTot = 0;
    fedTot = 0;
    ficaTot = 0;
    //Input data
    cout << "This program will calculate your payroll!" << endl;
    cout << "Enter the employee number: ";
    cin >> empNo;
    //Map inputs to outputs or process the data
    while (empNo != 0)
    {
        cout << "Enter the gross pay for employee number " << empNo << ": $";
        cin >> grossPay;            //gross
        if (grossPay < 0)
        {
            cout << "Not a valid entry. Reenter gross pay: $";
            cin >> grossPay;
        }
        grossTot += grossPay;
        
        cout << "Enter the state tax for employee number " << empNo << ": $";
        cin >> stateTax;       //state tax
        if (stateTax < 0)
        {
            cout << "Not a valid entry. Reenter state tax: $";
            cin >> stateTax;
        }
        stateTot += stateTax;
        
        cout << "Enter the federal tax for employee number: " << empNo << ": $";
        cin >> fedTax;       //feddddd
        if (fedTax < 0)
        {
            cout << "Not a valid entry. Reenter federal tax: $";
            cin >> fedTax;
        }
        fedTot += fedTax;
        
        cout << "Enter the FICA holdings for employee number " << empNo << ": $";
        cin >> fica;       //fica
        if (fica < 0)
        {
            cout << "Not a valid entry. Reenter FICA holdings: $";
            cin >> fica;
        }
        ficaTot += fica;
        
        taxTot = stateTax + fedTax + fica;   //total verification
        if (taxTot > grossPay)
        {
            cout << "Invalid entries, taxes and holdings must not exceed ";
            cout << "gross pay. Please start over.";
        }
        cout << "Enter the employee number: ";
        cin >> empNo;
    }
    //Output the transformed data
    cout << "The total gross pay is $" << grossTot << endl;
    cout << "The total state tax is $" << stateTot << endl;
    cout << "The total federal tax is $" << fedTot << endl;
    cout << "The total FICA holding is $" << ficaTot << endl;
    //Exit stage right!
    return 0;
}


