/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created in 2017
 * Purpose:  Simulate a roulette game
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>     //Time for rand
#include <cstdlib>   //Srand to set the seed
#include <string>    ///string function
#include <cmath>     // math functions
#include <iomanip>  
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    unsigned seed = time(0);
    srand(seed);
    
    //Declare & Initialize variables
    int guess = 1;
    const int guessMin = 1;
    int guessMax, guessed;
    int winner;
    const int min = 0;
    const int max = 36;
   
    //generate winning number
    winner = (rand() % (min - max + 1)) + min;   
    
    //Intro
    cout << "Roulette Game!" << endl;
    cout << "______________" << endl;
    cout << "Each Play Will Cost $1" << endl;
    cout << "You start with $40" << endl;
    
    //play the game
    cout << "How many plays do you want for this spin (up to 5)? ";
    cin >> guessMax;
    if (guessMax > 5)  
        {
        cout << "Not a valid entry. Please reenter the number of plays: ";
        cin >> guessMax;
        }
    for (guessMin; guess <= guessMax; guess++)
        {
        cout << "What number would you like (0-36)? "; 
        cin >> guessed;
        if (guessed == winner)
            cout << "This number hit!" << endl;
        else
            cout << "This number missed." << endl;
         }
    
    //Output the transformed data
    cout << "The Winning Number is " << winner << endl;
    //Exit stage right!
    return 0;
}