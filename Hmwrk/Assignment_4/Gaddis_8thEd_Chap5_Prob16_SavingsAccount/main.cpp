/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Program for working with savings accounts
 */

//System Libraries
#include <iostream> 
#include <iomanip> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    unsigned short month, months;
    float interest, start, balance, annual, dep, with, final;
    float depTot, withTot, interestT, interestTot;
    //Initialize variables
    cout << "This program will calculate your savings ";
    cout << "account balance!" << endl;
    cout << "Enter the annual interest rate? ";  //enter rate
    cin >> annual;
    interest = annual / 100 / 12;
    
    cout << "What is your starting balance? $";  //enter balance
    cin >> start;
    balance = 0;
    
    cout << "How many months have you had this account? ";  //enter months
    cin >> months;
    
    month = 1;    //for counters
    withTot = 0;
    depTot = 0;
    interestTot = 0;
    //Input data
    for (month;month <= months;month++)
    {
        cout << "How much was deposited for month " << month << "? $";
        cin >> dep;
        if (dep <= 0)
        {
            cout << "Not a valid entry. Please reenter: $";
            cin >> dep;
        }
        depTot += dep;
        
        cout << "How much was withdrawn for month " << month << "? $";
        cin >> with;
        if (with <= 0)
        {
            cout << "Not a valid entry. Please reenter: $";
            cin >> with;
        }
        withTot += with;
        
        balance = start + depTot - withTot;
        interestT = balance * interest;
        interestTot += interestT;
    }
    //Map inputs to outputs or process the data
    final = start + depTot - withTot + interestTot;
    cout << "Your ending balance is $" << final << endl;
    cout << "Your deposit total is $" << depTot << endl;
    cout << "Your withdrawal total is $" << withTot << endl;
    cout << "Your interest earned is $" << interestTot << endl;
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}