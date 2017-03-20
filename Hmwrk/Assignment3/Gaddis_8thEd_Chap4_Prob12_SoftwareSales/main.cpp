/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Figuring out discounts on software bulk rates
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
    float price, disc1, disc2, disc3, disc4, sold; 
    //Initialize variables
    price = 99;
    disc1 = 0.2;
    disc2 = 0.3;
    disc3 = 0.4;
    disc4 = 0.5;
    float tot1, tot2, tot3, tot4, tot5;
    float fin2, fin3, fin4, fin5;
    //Input data
    cout << "How many units are you buying? ";
    cin >> sold;
    tot1 = price * sold;
    //Map inputs to outputs or process the data
    tot2 = tot1 * disc1;
    fin2 = tot1 - tot2;
    tot3 = tot1 * disc2;
    fin3 = tot1 - tot3;
    tot4 = tot1 * disc3;
    fin4 = tot1 - tot4;
    tot5 = tot1 * disc4;
    fin5 = tot1 - tot5;
    //Output the transformed data
    if (sold <= 9 && sold > 0)
        cout << "The cost is $" << tot1 << endl;
    else if (sold >= 10 && sold <= 19)
        cout << "The cost is $" << fin2 << endl;
    else if (sold >= 20 && sold <= 49)
        cout << "The cost is $" << fin3 << endl;
    else if (sold >= 50 && sold <= 99)
        cout << "The cost is $" << fin4 << endl;
    else if (sold >= 100)
        cout << "The cost is $" << fin5 << endl;
    else
        cout << "Not a valid number of units.";
    //Exit stage right!
    return 0;
}

