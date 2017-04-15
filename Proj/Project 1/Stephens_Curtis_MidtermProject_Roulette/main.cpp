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
    const int min = 0;  //set constants
    const int max = 40;
   
    //intro
    cout << "Roulette Game!" << endl;
    cout << "______________" << endl;
    
    //play the game
    cout << "Enter a number 0-40. You get 5 guesses." << endl;
    cout << "Guess 1: ";  //enter guess 1
    cin >> guess1;
    cout << "Guess 2: ";  //enter guess 2
    cin >> guess2;
    cout << "Guess 3: ";  // enter guess 3
    cin >> guess3;
    cout << "Guess 4: ";  //enter guess 4
    cin >> guess4;
    cout << "Guess 5: ";  //enter guess 5
    cin >> guess5;
    
    winner = (rand() % (min - max + 1)) + min;  //generate random number
    if (winner == guess1)  //compare guess 1
        cout << "You win";
    if (winner == guess2)  //compare guess 2
        cout << "You win";
    if (winner == guess3)  //compare guess 3
        cout << "You win";    
    if (winner == guess4)  //compare guess 4
        cout << "You win";    
    if (winner == guess5)  //compare guess 5
        cout << "You win";
    //Output the transformed data
    cout << "The Winning Number is " << winner;  //display winning number
    
    //Exit stage right!
    return 0;
}