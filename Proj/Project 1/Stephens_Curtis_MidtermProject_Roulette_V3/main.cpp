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
    int guessMax, guessed;
    int winner;
    const int min = 0;
    const int max = 36;
    string playType;
    int money = 40;
   
    //Intro
    cout << "Roulette Game!" << endl;
    cout << "______________" << endl;
    cout << "Each Play Will Cost $1" << endl;
    cout << "You start with $40" << endl;
   
    //play by color;
    
   do
   {
    //play by number
    cout << "How many plays do you want for this spin (up to 5 and enter -1 when done)? ";
    cin >> guessMax;
    if (guessMax > 5)   //validate input  
    {
        cout << "Not a valid entry. Please reenter the number of plays: ";
        cin >> guessMax;
    }
    //generate winning number
    winner = (rand() % (min - max + 1)) + min;   
    //guess and compare
    for (guess = 1; guess <= guessMax; guess++)
    {
        cout << "What number would you like (0-36)? "; 
        cin >> guessed;
        if (guessed < min)
            cout << "Not a valid entry. Please try again (0-36): ";       
        else if (guessed > max)
            cout << "Not a valid entry. Please try again" << endl;
        else if (guessed == winner)
        {
            cout << "This number hit!" << endl;
            money += 40;
            cout << "You have $" << money << " left." << endl;
        }
        else
        {
            cout << "This number missed." << endl;
            money--;
            cout << "You have $" << money << " left." << endl;
            if (money == 0)
            {
                cout << "You are out of money!! Come Again!" << endl;
                break;
            }
        }
    }
    cout << "The Winning Number is " << winner << endl << endl;
   }while (guessMax != -1);
    
   //Output the transformed data
   cout << "Come Again!";
    //Exit stage right!
    return 0;
}