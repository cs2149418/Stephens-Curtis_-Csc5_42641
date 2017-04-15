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
#include <iomanip>   //set precision
#include <fstream>   //read file
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
    int guessMax, guessed, winner1, winner2, color; //random variables
    const int min = 0;  //number min
    const int max = 37; //number max
    const int black = 1; //black
    const int red = 2;  //red
    string name, choice;  //strings
    char winLose;  //choose ratio
    unsigned int money = 40;  //starting bank
    float wins = 0;   //set win counter
    float losses = 0;  //set lose counter
    float winRatio, loseRatio, winLost;  //ratios
    float plays = 0;  //set play counter
   
    //Intro
    cout << "Roulette Game!" << endl;
    cout << "______________" << endl;
    cout << "Player Name: ";
    cin >> name;                    //enter name
    cout << "Each Play Will Cost $1." << endl;
    cout << "You start with $40." << endl << endl;
    cout << "Play by color (C) or play by number (N)? ";
    cin >> choice;                  //choose game type
    cout << "\n";
   
   //play by color;
   if (choice == "C" || choice == "c")   //defining color choice
   {
        cout << "Each time your number hits your bank will gain $1!" << endl;
        cout << "Each time you miss your bank will lose $1.\n" << endl;
        cout << "Choose a color! Black (1) or Red (2). To quit enter (-1): ";
        cin >> color;  //choose color
        while (color < -1 || color > 2)   //validate input
        {
            cout << "Not a valid choice! Choose either Black (1) or ";
            cout << "Red (2): ";
            cin >> color;
        }
        do               //loop game
        {
            //generate winning color
            winner1 = (rand() % (red - black + 1)) + black; 
            //win!!!!
            if (color == winner1)      
            {
                cout << "You win!" << endl;
                money++;  //adjust bank
                wins++;    //add win
                plays++;    //add play
                cout << "You have $" << money;
                cout << " left. \n" << endl;      //funds left
                if (money == 0)  //bankrupt
                {
                    cout << "You are out of money!! Come Again!" << endl;
                    break;  //end game from lack of funds
                }
                cout << endl;
            }
            //lose!!!
            else   
            {
                cout << "You lose." << endl;
                money--; //adjust bank
                losses++; //add loss
                plays++;  //add play
                cout << "You have $" << money;
                cout << " left.\n" << endl;      //funds left
                if (money == 0)  //bankrupt
                {
                    cout << "You are out of money!! Come Again!" << endl;
                    break;    //end game from lack of funds
                }
                cout << endl;
            }
            cout << "Enter another color. Black (1) or Red (2): ";
            cin >> color;  //repeat loop
            while (color < -1 || color > 2)   //validate input
            {
                cout << "Not a valid choice! Choose either Black (1) or ";
                cout << "Red (2): ";
                cin >> color;
            }
        } while (color != -1);  // ends games
    } 
   
    //play by number   
    else if (choice == "N" || choice == "n")  //choose number game
    {
    cout << "Each time your number hits your bank will gain $40!" << endl;
    cout << "Each time you miss your bank will lose $1.\n" << endl;
        do   //start number game
        {
            cout << "How many plays do you want for this spin? (up to 10 per ";
            cout << "spin enter -1 when done): ";
            cin >> guessMax;  //how many guesses for this spin
            while (guessMax < -1 || guessMax > 10)
            {
                cout << "Not a valid number of plays! Reenter ";
                cout << "number of plays (1-10): ";
                cin >> guessMax;
            }
            //generate winning number
            winner2 = (rand() % (max - min + 1)) + min; 
            //guess and compare
            for (guess = 1; guess <= guessMax; guess++)  //guess loop
            {
                cout << "What number would you like to play for ";
                cout << "play number " << guess << "? (0-37): "; 
                cin >> guessed;  //guess number
                while (guessed < 0 || guessed > 37)
                {
                    cout << "Not a valid number to play! Please reenter ";
                    cout << "The number that you want to play (0-37): ";
                    cin >> guessed;
                }
                //win
                if (guessed == winner2)  //winning number
                {
                    cout << "This number hit!" << endl; //win
                    money += 40;  //add winnings
                    plays++;  //add play
                    wins++;   //add wins
                    cout << "You have $" << money;
                    cout << " left. \n" << endl;       //funds left
                }
                //lose
                else    // losing number
                {
                    cout << "This number missed." << endl;  //lose
                    money--; //subtract losings
                    losses++;  //add losses
                    plays++; //add plays
                    cout << "You have $" << money;
                    cout << " left.\n" << endl; //funds left
                    if (money == 0)  //bankrupt!!
                    {
                        cout << "You are out of money!! Come Again!" << endl;
                        break;
                    }
                }
            }
            cout << "The Winning Number is "; 
            cout << winner2 << "\n\n";        //display win  
        } while (guessMax != -1);  //to end game
   }
   
   // validate entry from menu
   else 
       cout << "Not a valid game choice. Please come again!";
    
    //ratios
    winRatio = static_cast<double>(wins) / plays;
    loseRatio = (losses / plays);
    winLost = (wins / losses);
    
    //output data
    cout << "Your total number of wins is " << wins << endl;  //total wins
    cout << "Your total number of losses is ";
    cout << losses << endl << endl;//total losses
    cout << "Would you like to see Win ratio (W), ";
    cout << "Loss ratio (L), Win over Loss ratio (O), ";
    cout << "or All Three (T)?: ";
    cin >> winLose;     //choose ratio
    switch (winLose)   //switch option for ratios
    {
        case 'W':          //win ratio
        case 'w': cout << "Your Win ratio is " << winRatio << endl;  
                break;
        case 'L':      //loss ratio
        case 'l': cout << "Your Loss ratio is " << loseRatio << endl;
                break;
        case 'o':     //win loss ratio
        case 'O': cout << "Your Win over Loss ratio is " << winLost << endl;
                break;
        case 'T':
        case 't':    //display all three
            cout << "Your Win ratio is " << winRatio << endl;
            cout << "Your Loss ratio is " << loseRatio << endl;
            cout << "Your Win/Loss ratio is " << winLost << endl;
            break;
        default: cout << "That is an invalid choice. \n"; //validation
    }
    cout << "Your ending balance is $" << money << endl << endl; //end balance
    cout << "Come Again!";
    
   //Exit stage right!
    return 0;
}