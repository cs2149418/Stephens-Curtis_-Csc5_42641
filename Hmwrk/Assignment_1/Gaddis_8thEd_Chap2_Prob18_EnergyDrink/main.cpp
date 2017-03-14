/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on Feb 21, 2017, 12:15 PM
  Purpose:  Calculate Energy Drink Consumption
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int consumers = 16500;
    double weekly = 0.15;
    double citrus = 0.58;
    //Input values
    int UW = consumers * weekly;
    int Cit = consumers * citrus;
    //Process by mapping inputs to outputs
    
    //Output values
    cout << "Of the " << consumers << " people surveyed," << endl;
    cout <<"approximately " <<
            UW << " consumers purchase one or more drinks a week." << endl;
    cout << Cit << " of these consumers also said they prefer the Citrus flavor" << endl;
    
    //Exit stage right!
    return 0;
}