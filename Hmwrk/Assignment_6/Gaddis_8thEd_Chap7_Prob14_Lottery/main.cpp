/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created in 2017
 * Purpose:  Lottery!!!!
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>
#include <cstdlib>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int max=9;
    const int min=0;
    unsigned seed=time(0);
    srand(seed);
    const int guesses=5;
    int winner[guesses];
    int guess[guesses];
    int correct=0;
    //Initialize variables
    for(int start=0;start<guesses;start++)
    {
        winner[start]=(rand()%(max-min+1))+min;
    }
    //Input data
    for (int start=0;start<guesses;start++)
    {
        cout<<"Enter guess #"<<(start+1)<<": ";
        cin>>guess[start];
        while(guess[start]<0)
        {
            cout<<"Not a valid entry. Reenter 0-9: ";
            cin>>guess[start];
        }
        while(guess[start]>9)
        {
            cout<<"Not a valid entry. Reenter 0-9: ";
            cin>>guess[start];
        }
        
    }
    //Map inputs to outputs or process the data
    if(guess[0]==winner[0]||guess[0]==winner[1]||guess[0]==winner[2]||guess[0]==winner[3]
            ||guess[0]==winner[4])
        correct++;
    if(guess[1]==winner[0]||guess[1]==winner[1]||guess[1]==winner[2]
            ||guess[1]==winner[3]||guess[1]==winner[4])
        correct++;
    if(guess[2]==winner[0]||guess[2]==winner[1]||guess[2]==winner[2]
            ||guess[2]==winner[3]||guess[2]==winner[4])
        correct++;
    if(guess[3]==winner[0]||guess[3]==winner[1]||guess[3]==winner[2]
            ||guess[3]==winner[3]||guess[3]==winner[4])
        correct++;
    if(guess[4]==winner[4]||guess[4]==winner[1]||guess[4]==winner[2]
            ||guess[4]==winner[3]||guess[4]==winner[4])
        correct++;
    //Output the transformed data
    if(correct<5)
    {
        cout<<"You got "<<correct<<" correct!\n";
        cout<<"Better luck next time\n";
    }
    else if(correct==5)
    {
        cout<<"Congratulations you got the grand prize!!!\n";
    }
    //Exit stage right!
    return 0;
}