/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created in 2017
 * Purpose:  Final Project Roulette Game
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>     //Time for rand
#include <cstdlib>   //Srand to set the seed
#include <string>    ///string function
#include <cmath>     // math functions
#include <iomanip>   //set precision
#include <fstream>   //read file
#include <vector>   //vector
using namespace std; //Name-space under which system libraries exist

//User Libraries

//NO CONSTANTS!!!!!

//Function Prototypes
int random(int, int);
int searchList(int[],int,int);
void selectionSort(string [], int);
int binarySearch(string[], int, string);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string choice, name;
    int color; 
    int black = 1; //black
    int red = 2;  //red
    unsigned int money = 40;  //starting bank
    int bet; //betting amount
    float wins = 0;   //set win counter
    float losses = 0;  //set lose counter
    float winRatio, loseRatio, winLost;  //ratios
    float plays = 0;//set play counter 
    int results, acctNum;  //verify acct
    const int acctSize=20;    //account size
    int validAcct[acctSize]={543, 785, 313, 432, 765, 345, 678, 409, 945,
                                284, 851, 274, 345, 456, 235, 143, 178, 993, 
                                169, 420}; //valid accts
    string names[acctSize]={"Mark", "David", "Henry", "Kristina", "Joel", 
                            "Herman", "Tyler", "Kohl", "Tracy", "Coby", "Nina", 
                            "Sean", "John", "Mia", "Thomas", "Nick", "Pat", 
                            "Eric", "Curtis"};  //valid names
    //Intro
    cout<<"Welcome to the Roulette Game!\n"; //greeting
    cout<<"Please verify your account.\n";
    cout<<"Enter your three digit account number (for prof. access use 543):";
    cin>>acctNum;               //enter account number
    
    //validate account
    results=searchList(validAcct, acctSize, acctNum);
    if (results==-1)   //invalid account number
    {    
        cout<<"The account is not valid.\n";
    }
    else  //valid account number
    {
    cout<<"For verification what is your name (prof. access use Mark)? ";
    cin>>name;
    
    //validate name
    selectionSort(names,acctSize);
    int results=binarySearch(names, acctSize, name);
    if (results==-1)   //invalid account
    {    
        cout<<"The name was not found\n";
    }
    else   //valid account play game
    {
        
    //choose game
    cout<<"Welcome back player number "<<acctNum<<"!\n";
    cout<<"Your bank will start with $40\n";
    //Input data
    cout << "Play by color (C) or play by number (N)? ";
    cin >> choice;                  //choose game type
    cout << "\n";
    //play
    if (choice == "C" || choice == "c") //choose the color game
    {
        cout<<"You chose to play by number!\n";
        cout << "Choose a color! Black (1) or Red (2). To quit enter (-1): ";
        cin >> color;  //choose color
        do
        {
            while (color < -1 || color > 2)   //validate input
            {
            cout << "Not a valid choice! Choose either Black (1) or ";
            cout << "Red (2): ";
            cin >> color;
            }
            int winner1=random(red, black);
            //win!!!!
            cout<<"How much do you want to bet on this spin? $";
            cin>>bet;
            while(bet>40||bet<1)
            {
                cout<<"Cannot bet more than $40. Reenter bet: $";
                cin>>bet;
            }
            if (color == winner1)      
            {
                cout << "You win!" << endl;
                money+=bet;  //adjust bank
                wins++;    //add win
                plays++;    //add play
                cout << "You have $" << money;
                cout << " left. \n" << endl;      //funds left
                cout << endl;
            }
            //lose!!!
            else   
            {
                cout << "You lose." << endl;
                money-=bet; //adjust bank
                losses++; //add loss
                plays++;  //add play
                cout << "You have $" << money;
                cout << " left.\n" << endl;      //funds left
                if (money <= 0)  //bankrupt
                {
                    cout << "You are out of money!! Come Again!" << endl;
                    break;    //end game from lack of funds
                }
            }
                cout << endl;
            cout << "Enter another color. Black (1) or Red (2): ";
            cin >> color;  //repeat loop
        }while (color != -1);  // ends games
    }
    else if (choice == "N" || choice == "n")  //choose number game
    {
        
    }
    else 
       cout << "Not a valid game choice. Please come again!";
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
    }}

//***************************
//***************************
//randomize numbers
//***************************
int random(int red, int black)
{
    unsigned seed = time(0);
    srand(seed);
    int winner1=(rand() % (red - black + 1)) + black;
    return winner1;
}

//****************************
//****************************
//search linear
//*****************************
int searchList(int validAcct[], int acctSize, int acctNum)
{
    int index=0;
    int position=-1;
    bool found=false;
    while(index<acctSize&&!found)
    {
        if(validAcct[index]==acctNum)
        {
            found=true;
            position=index;
        }
        index++;
    }
    return position;
}


//****************************
//****************************
//sort names
//*****************************
void selectionSort(string names[], int acctSize)
{
int startScan, minIndex;
string minValue;

for(startScan = 0; startScan < (acctSize-1); startScan++)
{
    minIndex = startScan;
    minValue = names[startScan];
    for(int index = startScan +1; index <acctSize; index++)
    {
        if (names[index] < minValue)
        {
            minValue = names[index];
            minIndex = index;
        }
    }
    names[minIndex] = names[startScan];
    names[startScan] = minValue;
}
}

//****************************
//****************************
//search names
//*****************************
int binarySearch(string names[], int acctSize, string name)
{
    long first=0;
    long last=acctSize-1;
    long middle;
    int position=-1;
    bool found=false;
    while(!found&&first<=last)
    {
        middle=(first+last)/2;
        if(names[middle]==name)
        {
            found=true;
            position=middle;
        }
        else if (names[middle]>name)
            last=middle-1;
        else
            first=middle+1;
    }
    return position;
}