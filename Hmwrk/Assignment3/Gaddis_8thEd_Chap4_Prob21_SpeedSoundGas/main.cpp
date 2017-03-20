/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Program for working with speed of sound in a gas
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
    string gas;
    float time;
    float cdS, airS, helS, hydS;  //speeds
    float cdD, airD, helD, hydD;  //distance
    //Initialize variables
    cdS = 258;
    airS = 331.5;
    helS = 972;
    hydS = 1270;
    //Input data
    cout << "How long is the sound traveling for? (in seconds): ";
    cin >> time;
    cout << "A) Carbon Dioxide" << endl;
    cout << "B) Air" << endl;
    cout << "C) Helium" << endl;
    cout << "D) Hydrogen" << endl;
    cout << "Choose a gas: ";
    cin >> gas;

    //Map inputs to outputs or process the data
    if (time < 0 && time > 30)
        cout << "Please choose a time between 0 and 30 seconds." << endl;
    else if (time >= 0 && time <= 30)
        {
        if (gas == "A")
            {
            cdD = cdS * time;
            cout << "Sound will travel " << cdD;
            cout << " meters in that amount of time through ";
            cout << "carbon dioxide." << endl;
            }
        else if (gas == "B")
            {
            airD = airS * time;
            cout << "Sound will travel " << airD;
            cout << " meters in that amount of time through ";
            cout << "air." << endl;
            }
        else if (gas == "C")
            {
            helD = helS * time;
            cout << "Sound will travel " << helD;
            cout << " meters in that amount of time through ";
            cout << "helium." << endl;
            }
        else if (gas == "D")
            {
            hydD = hydS * time;
            cout << "Sound will travel " << hydD;
            cout << " meters in that amount of time through ";
            cout << "hydrogen." << endl;
            }
        else
            cout << "Please make the correct selection (A-D). ";
        }
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}