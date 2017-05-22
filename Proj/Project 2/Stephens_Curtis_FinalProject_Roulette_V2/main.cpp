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
double random(int);
int searchList(int[],int,int);
void selectionSort(string [], int);
int binarySearch(string[], int, string);
int bank(int);
void showList(int = 0);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string choice, name;
    char winLose;
    int color, guessMax, guessed, winner2, moneys; 
    int black = 1; //black
    int red = 2;  //red
    int min=0;
    int max=10;
    unsigned int money;  //starting bank
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
                            "Eric", "Robert","Curtis"};  //valid names
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
        
    //initiate bank
    cout<<"Welcome back player number "<<acctNum<<"!\n";
    cout<<"How many dollars in chips would you like to purchase? $";
    cin>>money;
    bank(money);
    cout<<"You recieved a $5 bonus for your return!\n";
    moneys=bank(money);
    cout<<"Your bank is $"<<moneys<<endl;
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
                moneys+=bet;  //adjust bank
                wins++;    //add win
                plays++;    //add play
                cout << "You have $" << moneys;
                cout << " left. \n" << endl;      //funds left
                cout << endl;
            }
            //lose!!!
            else   
            {
                cout << "You lose." << endl;
                moneys-=bet; //adjust bank
                losses++; //add loss
                plays++;  //add play
                cout << "You have $" << moneys;
                cout << " left.\n" << endl;      //funds left
                if (moneys <= 0)  //bankrupt
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
            int winner2=random(min);
            //guess and compare
            for (int guess = 1; guess <= guessMax; guess++)  //guess loop
            {
                cout << "What number would you like to play for ";
                cout << "play number " << guess << "? (0-37): ";
                cin >> guessed;  //guess number
                cout<<"How much would you like to bet for this play? $";
                cin>>bet;
                int winAmounted = bet*40;
                while (guessed < 0 || guessed > 37)  //validate input
                {
                    cout << "Not a valid number to play! Please reenter ";
                    cout << "The number that you want to play (0-37): ";
                    cin >> guessed;
                }
                //win
                if (guessed == winner2)  //winning number
                {
                    cout << "This number hit!" << endl; //win
                    moneys += winAmounted;  //add winnings
                    plays++;  //add play
                    wins++;   //add wins
                    cout << "You have $" << moneys;
                    cout << " left. \n" << endl;       //funds left
                }
                //lose
                else    // losing number
                {
                    cout << "This number missed." << endl;  //lose
                    moneys-=bet; //subtract losings
                    losses++;  //add losses
                    plays++; //add plays
                    cout << "You have $" << moneys;
                    cout << " left.\n" << endl; //funds left
                    if (moneys < 0)  //bankrupt!!
                    {
                        cout << "You are out of money!! Come Again!" << endl;
                        break;
                    }
                }
            }            
            cout << "The Winning Number is "; 
            cout << winner2 << "\n\n";        //display winning number 
        } while (guessMax != -1);  //to end game
    }
    else 
       cout << "Not a valid game choice. Please come again!";
    }

    //Output the transformed data
    //ratios
    winRatio = static_cast<double>(wins) / plays;
    loseRatio = (losses / plays);
    winLost = (wins / losses);
    
    //output data
    cout << "Your total number of wins is " << wins << endl;  //total wins
    cout << "Your total number of losses is ";
    cout << losses << endl << endl;//total losses
    cout << setprecision(2) << fixed;
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
    cout << "Your ending balance is $" << moneys << endl << endl; //end balance
    
   //member list
    cout<<"Would you like to see the current member list(Y for yes)? ";
    string listChoice;
    cin>>listChoice;
    if(listChoice=="Y"||listChoice=="y")
    {
        cout<<"Member List\n";
        cout<<"------------------\n";
        showList();
    }
    else
        cout<<"Alright.\n";
    //Exit stage right!
    cout<<"Thank you for coming! Come again!\n";
    return 0;
    }}

//***************************
//***************************
//randomize numbers color
//***************************
int random(int red, int black)
{
    unsigned seed = time(0);
    srand(seed);
    int winner1=(rand() % (red - black + 1)) + black;
    return winner1;
}

//***************************
//***************************
//randomize numbers number
//***************************
double random(int min)
{
    int max=37;
    unsigned seed = time(0);
    srand(seed);
    int winner2=(rand() % (max - min + 1)) + min;
    return winner2;
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

//****************************
//****************************
//bank bonus static local
//*****************************
int bank(int money)
{
    static int moneys=(money+5);
    return moneys;
}

//****************************
//****************************
//parallel arrays
//*****************************
void showList(int index)
{
    const int size=20;
    int validAcct[size]={543, 785, 313, 432, 765, 345, 678, 409, 945,
                                284, 851, 274, 345, 456, 235, 143, 178, 993, 
                                169, 420}; //valid accts
    string names[size]={"Mark", "David", "Henry", "Kristina", "Joel", 
                            "Herman", "Tyler", "Kohl", "Tracy", "Coby", "Nina", 
                            "Sean", "John", "Mia", "Thomas", "Nick", "Pat", 
                            "Eric", "Robert", "Curtis"};  //valid names
    for(index=0;index<size;index++)
    {
        cout<<validAcct[index]<<"    "<<names[index]<<endl;   
    }
}