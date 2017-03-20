/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Geo Calc
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string choice;
    const float pie = 3.14159;
    float area, radius, length, width, base, height;
    //Initialize variables
    
    //Input data
    cout << "Geometry Calculator!" << endl;
    cout << "   1. Calculate the Area of a Circle" << endl;
    cout << "   2. Calculate the Area of a Rectangle" << endl;
    cout << "   3. Calculate the Area of a Triangle" << endl;
    cout << "   4. Quit" << endl;
    cout << " " << endl;
    cout << "   Enter your choice (1-4): ";
    cin >> choice;
    cout << " " << endl;
    //Map inputs to outputs or process the data
    if (choice == "1")
        {
        cout << "   Enter the radius of the circle: ";
        cin >> radius;
        area = pie * (pow(radius, 2));
        cout << "   The area of the circle is " << area;
        }
    else if (choice == "2")
        {
        cout << "   Enter the length of the rectangle: ";
        cin >> length;
        cout << "   Enter the width of the rectangle: ";
        cin >> width;
        area = length * width;
        cout << "   The area of the rectangle is " << area;
        }
    else if (choice == "3")
        {
        cout << "   Enter the base of the triangle: ";
        cin >> base;
        cout << "   Enter the height of the triangle: ";
        cin >> height;
        area = base * height * 0.5;
        cout << "   The area of the triangle is " << area;
        }
    else if (choice == "4")
        cout << "   Goodbye!";
    else 
        cout << "   Please make a right selection (1-4)";
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}
