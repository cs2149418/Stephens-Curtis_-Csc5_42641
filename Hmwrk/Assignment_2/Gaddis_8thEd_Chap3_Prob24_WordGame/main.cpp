/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Create a word game
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string name;
    string city;
    string age;
    string college;
    string profession;
    string animal;
    string petname;
    //Initialize variables
    
    //Input data
    cout << "Name: ";
    getline(cin, name);
    cout << "Age:  ";
    getline(cin, age);
    cout << "Name of a city:";
    getline(cin, city);
    cout << "Name of a college:";
    getline(cin, college);
    cout << "A profession:";
    getline(cin, profession);
    cout << "A type of animal:";
    getline(cin, animal);
    cout << "A pet's name:";
    getline(cin, petname);
            
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout << "There once was a person named " << name;
    cout << " who lived in " << city << ". At the age of " ;
    cout << age << ", " << name << " went to college at " << college;
    cout << ". " << name << " graduated and went to work " ;
    cout << "as a " << profession << ". Then, " << name << " adopted a (n) " ;
    cout << animal << " named " << petname << ". They" ;
    cout << " both lived happily ever after!";
    //Exit stage right!
    return 0;
}
