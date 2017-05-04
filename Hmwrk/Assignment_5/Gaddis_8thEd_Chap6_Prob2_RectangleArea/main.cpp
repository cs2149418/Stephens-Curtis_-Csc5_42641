/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created in 2017
 * Purpose:  Function control program to find area of a rectangle
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries
float getLength();
float getWidth();
float getArea(float, float);
void displayData(float, float, float);
//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float length, width, area;
    //Initialize variables
    cout<<"Program for figuring out the area of a rectangle!\n";
    length=getLength();
    width=getWidth();
    area=getArea(length, width);
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    displayData(length,width,area);
    //Exit stage right!
    return 0;
}

//function for getting length
float getLength(){
    float entry;
    cout<<"Enter Length: ";
    cin>>entry;
    return entry;
}
//function for getting width
float getWidth(){
    float entry;
    cout<<"Enter Width: ";
    cin>>entry;
    return entry;
}

//Area function
float getArea(float length, float width)
{
    float area=length*width;
    return area;
}

//display message
void displayData(float length, float width, float area)
{
    cout<<"The length of the rectangle is "<<length<<endl;
    cout<<"The width of the rectangle is "<<width<<endl;
    cout<<"The area of the rectangle is "<<area<<endl;
}