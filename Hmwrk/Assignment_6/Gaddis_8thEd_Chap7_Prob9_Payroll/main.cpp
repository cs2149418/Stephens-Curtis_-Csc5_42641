/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created in 2017
 * Purpose:  Another Payroll Project.....
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int employed=7;
    long empId[employed]={5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 
                            7580489};
    float hours[employed];
    float payRate[employed];
    float wages;
    //Initialize variables
    cout<<"This program will figure out your paychecks.\n";
    //Input data
    for(int start=0;start<employed;start++)
    {
        cout<<"Enter hours worked for employee #"<<empId[start]<<": ";
        cin>>hours[start];
        while (hours[start]<0)
        {
            cout<<"Not a valid number of hours. Reenter above 0: ";
            cin>>hours[start];
        }
        cout<<"Enter pay rate for employee #"<<empId[start]<<": $";
        cin>>payRate[start];
        while (payRate[start]<15)
        {
            cout<<"Not a valid wage. Reenter above $15: $";
            cin>>payRate[start];
        }
        cout<<endl;
    }
    //Map inputs to outputs or process the data
    for(int start=0;start<employed;start++)
    {
        wages=(hours[start])*(payRate[start]);
        cout<<"Gross wages for employee #"<<empId[start]<<" is $"<<wages<<endl;
    }
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}