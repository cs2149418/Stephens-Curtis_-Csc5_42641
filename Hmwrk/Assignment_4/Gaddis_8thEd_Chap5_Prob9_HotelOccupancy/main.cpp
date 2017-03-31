/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Programs to calculate room occupancy for a hotel 
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
    float floor, floorMax; // for floor limits
    float room, occupy, rate, unOcc; //for room and occupy calc
    float floorMin = 1;
    float roomTot, occTot;
    //Initialize variables
    roomTot = 0;
    occTot = 0;
    //Input data
    cout << "How many floors does the hotel have? ";
    cin >> floorMax;
    if (floorMax <= 0)
    {
        cout << "Not a valid number of floors. Please Reenter: ";
        cin >> floorMax;
    }
    //Map inputs to outputs or process the data
    for (floor = floorMin; floor <= floorMax; floor++)
    {
        
        if (floor == 13)
            continue;
        cout << "How many rooms are on floor " << floor << "? ";
        cin >> room;
        if (room < 10)
        {
            cout << "That is not a valid number of rooms. Reenter number of rooms: ";
            cin >> room;
        }
        roomTot += room;
        cout << "How many of these rooms are occupied? ";
        cin >> occupy;
        occTot += occupy;
    }
    //Output the transformed data
    rate = (occTot / roomTot) * 100;
    unOcc = roomTot - occTot;
    cout << "The hotel has " << roomTot << " rooms." << endl;
    cout << "Of these rooms " << occTot << " are occupied." << endl;
    cout << "That leaves " << unOcc << " rooms unoccupied." << endl;
    cout << "The percentage of rooms filled is " << rate << "%" << endl;
    //Exit stage right!
    return 0;
}
