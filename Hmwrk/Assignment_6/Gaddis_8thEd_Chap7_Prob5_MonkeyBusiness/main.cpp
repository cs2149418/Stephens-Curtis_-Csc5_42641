/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created in 2017
 * Purpose: Program to track monkey food intake
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int monkeys = 3;
    const int days=5;
    float pounds[days][monkeys];
    int dayTotal=0;
    float poundTotal=0;
    float average;
    float lowest=100000, highest;
    
    //Initialize variables
    
    //Input data
    cout<<"This program will calculate the amount of food ate by the ";
    cout<<"monkeys at the zoo!"<<endl;
    for (int day=0;day<days;day++)
    {
        for (int monkey=0;monkey<monkeys;monkey++)
        {
            cout<<"Enter the amount of food for monkey "<<(monkey+1);
            cout<<" for day "<<(day+1)<<": ";
            cin>>pounds[day][monkey];
            if(pounds[day][monkey]<0)
            {
                cout<<"Not a valid amount. Reenter: ";
                cin>>pounds[day][monkey];
            }
        }
        cout<<endl;
    }
    //Map inputs to outputs or process the data
    for (int day=0;day<days;day++)
    {
        for (int monkey=0;monkey<monkeys;monkey++)
        {
           poundTotal+=pounds[day][monkey];
           dayTotal++;
           if(pounds[day][monkey]<lowest)
               lowest=pounds[day][monkey];
           else if(pounds[day][monkey]>highest)
               highest=pounds[day][monkey];
        }
    }
    //Output the transformed data
    average=poundTotal/dayTotal;
    cout<<"REPORT******"<<endl;
    cout<<"The average food eaten this week is "<<average<<" pounds."<<endl;
    cout<<"The least amount of food eaten this week is "<<lowest<<" pounds.\n";
    cout<<"The most amount of food eaten this week is "<<highest<<" pounds. \n";
    //Exit stage right!
    return 0;
}