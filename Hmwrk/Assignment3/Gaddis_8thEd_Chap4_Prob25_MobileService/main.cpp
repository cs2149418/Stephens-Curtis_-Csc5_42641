/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream> 
#include <iomanip> 
#include <string> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string pack;
    float minutes;
    float packA, packB, packC, Afinal, Bfinal, Aover, Bover;
    float Amod, Bmod;
    //Initialize variables
    packA = 39.99;
    packB = 59.99;
    packC = 69.99;
    Aover = 0.45;
    Bover = 0.4;
    //Input data
    cout << "Which package do you have? (A, B, or C): ";
    cin >> pack;
    cout << "How many minutes did you use?: ";
    cin >> minutes;

    //Map inputs to outputs or process the data
    if (pack == "A")
    {
      if (minutes <= 450)
          cout << "Your bill is $" << packA << endl;
      else if (minutes > 450)
        {
          Amod = (minutes - 450) * Aover;
          Afinal = packA + Amod;
          cout << "Your bill is $" << Afinal << endl;
        }
    }
    else if (pack == "B")
    {
       if (minutes <= 900)
           cout << "Your bill is $" << packB << endl;
       else if (minutes > 900)
       {
           Bmod = (minutes - 900) * Bover;
           Bfinal = packB + Bmod;
           cout << "Your bill is $" << Bfinal << endl;
       }
    }
    else if (pack == "C")
        cout << "Your bill is $" << packC << endl;
    else
        cout << "Not a valid plan." << endl;
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}