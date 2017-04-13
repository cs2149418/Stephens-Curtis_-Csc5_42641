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
    int guess1, guess2, guess3, guess4, guess5;
    int winner;
    const int min = 0;
    const int max = 40;
   
    //Play the game
    cout << "Roulette Game!" << endl;
    cout << "______________" << endl;
    cout << "Enter a number 0-40. You get 5 guesses." << endl;
    cout << "Guess 1: ";
    cin >> guess1;
    cout << "Guess 2: ";
    cin >> guess2;
    cout << "Guess 3: ";
    cin >> guess3;
    cout << "Guess 4: ";
    cin >> guess4;
    cout << "Guess 5: ";
    cin >> guess5;
    
    winner = (rand() % (min - max + 1)) + min;
    if (winner == guess1)
        cout << "You win";
    if (winner == guess2)
        cout << "You win";
    if (winner == guess3)
        cout << "You win";    
    if (winner == guess4)
        cout << "You win";    
    if (winner == guess5)
        cout << "You win";
    //Output the transformed data
    cout << "The Winning Number is " << winner;
    
    //Exit stage right!
    return 0;
}