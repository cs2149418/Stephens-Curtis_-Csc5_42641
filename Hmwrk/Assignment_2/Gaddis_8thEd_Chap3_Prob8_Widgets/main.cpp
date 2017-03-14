/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 3, 2017, 12:15 PM
  Purpose:  Template to be used in all programming
            projects!
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
    float widgWeight, totWeight, pallWeight, diffWeight, Widg;
    //Input values
    widgWeight = 12.5;
    //Process by mapping inputs to outputs
    cout << "How much does the full pallet weigh? ";
    cin >> totWeight;
    cout << "How much does the empty pallet weigh? ";
    cin >> pallWeight;
    diffWeight = totWeight - pallWeight; 
    Widg = (diffWeight / widgWeight);
    //Output values
    cout << "The number of widgets on the pallet is: " << Widg << endl;
    return 0;
}