/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  program to figure out paycheck with switch
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
    float payRate, check;
    unsigned short hrsWrkd;
    //Initialize variables
    cout << "How much do you get paid an hour? $";
    cin >> payRate;
    cout << "How many hours did you work? ";
    cin >> hrsWrkd;
    //Input data
    if (hrsWrkd < 0 && hrsWrkd > 80)
        cout << "Not a valid amount of hours" << endl;
    //Map inputs to outputs or process the data
    switch(hrsWrkd)
        {
        case 0: case 1: case 2: case 3: case 4: case 5: case 6:
        case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14:
        case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22:
        case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30:
        case 31: case 32: case 33: case 34: case 35: case 36: case 37: case 38:
        case 39: case 40: 
            (check = payRate * hrsWrkd);break;
        case 41: case 42: case 43: case 44: case 45: case 46: case 47: case 48:
        case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56:
        case 57: case 58: case 59: case 60: case 61: case 62: case 63: case 64:
        case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72:
        case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80:
        (check = (payRate * hrsWrkd) + ((hrsWrkd-40) * payRate));break;
        
    }

    //Output the transformed data
    cout << "Your paycheck should be $" << check;
    //Exit stage right!
    return 0;
}

