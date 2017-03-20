/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Program to choose an element and see
 *            how fast sound travels given a distance
 */

//System Libraries
#include <iostream> 
#include <iomanip>
#include <string>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string medium;
    float distance;
    float airS, waterS, steelS;   //speed
    float airD, waterD, steelD;   //time
    //Initialize variables
    airS = 1100;   
    waterS = 4900;
    steelS = 16400;
    //Input data
    cout << "Choose a medium:" << endl;   // menu
    cout << "A) Air" << endl;
    cout << "B) Water" << endl;
    cout << "C) Steel" << endl;
    cin >> medium;
    cout << "Enter the distance (in feet) traveled: ";
    cin >> distance;
    //Map inputs to outputs or process the data

    //Output the transformed data
    if (distance < 0)
        cout << "Not a valid distance." << endl;
    else if (distance >= 0)
    {
        if (medium == "A")
         {
            airD = distance / airS;
            cout << "It would take sound " << airD << " seconds to travel that ";
            cout << "distance through air";
        }
        else if (medium == "B")
        { 
            waterD = distance / waterS;
            cout << "It would take sound " << waterD << " seconds to travel ";
            cout << "that distance through water"; 
        }
        else if (medium == "C")
        {
            steelD = distance / steelS;
            cout << "It would take sound " << steelD << " seconds to travel ";
            cout << "that distance when traveling through steel." << endl;
        }
        else
            cout << "That is not a valid medium.";
    }
    //Exit stage right!
    return 0;
}