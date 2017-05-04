/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on April 4th, 2017, 11:32 AM
 * Purpose: Program to find kinetic energy
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float half=0.5;
//Function Prototypes
float kineticEnergy(float, float);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float mass, velocity, KE;
    //Initialize variables
    cout<<"Program for calculating Kinetic Energy!!\n";
    //Input data
    cout<<"Input the mass in kilograms: ";
    cin>>mass;
    cout<<"Input the velocity in meters per second: ";
    cin>>velocity;
    //Map inputs to outputs or process the data
    KE=kineticEnergy(mass, velocity);
    //Output the transformed data
    cout<<"The kinetic energy is "<<KE<<" joules."<<endl;
    //Exit stage right!
    return 0;
}

//******************************
//kinetic energy
float kineticEnergy(float mass, float velocity)
{
    float kinetic=half*mass;
    float energy=pow(velocity,2);
    float KE=kinetic*energy;
    
    return KE;
}