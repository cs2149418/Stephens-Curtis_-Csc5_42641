/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created on March 23rd, 2017, 12:05 AM
 * Purpose:  Menu to be utilized on Hmwk 4
 */

//System Libraries
#include <iostream> 
#include <iomanip>
#include <fstream>//Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char choice;
    
    //Show menu and loop
    do{
        //Display Menu
        cout<<endl<<endl<<"Type 0 to exit"<<endl;
        cout<<"Type 1 for Ocean Levels Problem"<<endl;
        cout<<"Type 2 for Membership Increase Problem"<<endl;
        cout<<"Type 3 for Distance Traveled Problem"<<endl;
        cout<<"Type 4 for Pennys for Pay Problem"<<endl;
        cout<<"Type 5 for Hotel Occupancy Problem"<<endl;
        cout<<"Type 6 for Average Rainfall Problem"<<endl;
        cout<<"Type 7 for Payroll Report Problem"<<endl;
        cout<<"Type 8 for Savings Account Problem"<<endl;
        cout<<"Type 9 for Budget Analysis Problem"<<endl;
        cout<<"Type 10 for Using Files on Savings Account Problem"<<endl<<endl;
       
        //Input the choice
        cout<<"Problem ";
        cin>>choice;
        
        //Place solutions to problems in switch statement
        switch(choice){
            case '1':{
                //Declare variables
                float year, final;
                float start = 1;
                float end = 25;
                float rise = 1.5;
                //Initialize variables

                //Input data
                cout << "Year\tRise of Ocean (mm)\n";
                cout << "----------------\n";

                //Map inputs to outputs or process the data
                for (year >= start; year <= end; year++)
                {
                    final = year * rise;
                    cout << year << "\t" << final << endl;
                 }
                break;
            }
            case '2':{
                //Declare variables
                float year = 1;
                float rateStrt = 2500;
                float rateIncr = 1.04;
                float rateFnl;
                //Initialize variables

                //Input data
                cout << "Membership Fee Increase Over the Next Six Years \n";
                cout << "--------------------\n";
                cout << "Year \t Rate\n";
                cout << "--------------------\n";
                //Map inputs to outputs or process the data
                for (year > 0; year < 7; year++)
                {
                 rateStrt *= rateIncr;
                 cout << year << " \t $" << rateStrt << endl;
                }
                break;
            }
            case '3':{
                //Declare variables
                float mph, timeEnd, time, distance;
                float timeStrt = 1;
                //Initialize variables

                //Input data
                cout << "This program will generate a table for distance traveled ";
                cout << "given a time and a speed." << endl;
                cout << "What is the speed of the vehicle in mph? ";
                cin >> mph;
                cout << "How many hours has it traveled? ";
                cin >> timeEnd;
                cout << "Hours \t Distance Traveled (miles) " << endl;
                cout << "--------------------" << endl;
                //Map inputs to outputs or process the data
                for (time = timeStrt; time <= timeEnd; time++)
                {
                    distance = time * mph;
                    cout << time << " \t " << distance << endl;
                }
                break;
            }
            case '4':{
                //Declare variables
                unsigned short day, dayMax;
                float payStrt, payIncrs;
                payStrt = 0;
                day = 1;
                payIncrs = .01;
                //Initialize variables
                cout << "This program calculates your pay by day." << endl;
                cout << "Everyday that you work your pay increases one penny." << endl;
                cout << "How many days did you work for? ";
                cin >> dayMax;
                if (dayMax < 1)
                {
                    cout << "Not a valid amount of days. Please reenter: ";
                    cin >> dayMax;
                }
                //Input data
                for (day;day <= dayMax; day++)
                {
                    payStrt += payIncrs;
                    payIncrs += .01;
                }
                //Map inputs to outputs or process the data

                //Output the transformed data
                cout << "You worked " << dayMax << " days and will get paid $" << payStrt;
                break;
            }
           
            case '5':{
                //Declare variables
                float floor, floorMax; // for floor limits
                float room, occupy, rate, unOcc; //for room and occupy calc
                float floorMin = 1;
                float roomTot, occTot;
                //Initialize variables
                roomTot = 0;
                occTot = 0;
                //Input data
                cout << "How many floors does the hotel have? ";
                cin >> floorMax;
                if (floorMax <= 0)
                {
                    cout << "Not a valid number of floors. Please Reenter: ";
                    cin >> floorMax;
                }
                //Map inputs to outputs or process the data
                for (floor = floorMin; floor <= floorMax; floor++)
                {

                    if (floor == 13)
                        continue;
                    cout << "How many rooms are on floor " << floor << "? ";
                    cin >> room;
                    if (room < 10)
                    {
                        cout << "That is not a valid number of rooms. Reenter number of rooms: ";
                        cin >> room;
                    }
                    roomTot += room;
                    cout << "How many of these rooms are occupied? ";
                    cin >> occupy;
                    occTot += occupy;
                }
                //Output the transformed data
                rate = (occTot / roomTot) * 100;
                unOcc = roomTot - occTot;
                cout << "The hotel has " << roomTot << " rooms." << endl;
                cout << "Of these rooms " << occTot << " are occupied." << endl;
                cout << "That leaves " << unOcc << " rooms unoccupied." << endl;
                cout << "The percentage of rooms filled is " << rate << "%" << endl;
                break;
            }
            case '6':{
                //Declare variables
                float year, years, month, months;
                float total, rainF, final, totals;
                //Initialize variables

                //Input data
                cout << "This program calculates average rainfall in INCHES! \n";
                cout << "How many years would you like to calculate for? ";
                cin >> years;
                if (years <= 0)
                {
                    cout << "Not a valid number of years please reenter years: ";
                    cin >> years;
                }
                months =  years * 12;
                //Map inputs to outputs or process the data
                for (year = 1; year <= years; year++)
                {
                    total = 0;
                    for (month = 1; month <= 12; month++)
                    {
                        cout << "Enter the rainfall for year " << year; 
                        cout<< " month " << month << ": ";
                        cin >> rainF;
                        if (rainF <= 0)
                        {
                         cout << "Not a valid measurement. Try again: ";
                         cin >> rainF;
                        }
                        total += rainF;
                    }
                    totals += total;
                    final = totals / months;

                }
                //Output the transformed data
                cout << "The number of months examined is " << months << endl;
                cout << "The total rainfall is " << totals << " inches" << endl;;
                cout << "Your Average Rainfall is " << final << " inches per year.";
                break;
            }
            case '7':{
                //Declare variables
                unsigned short empNo;
                float grossPay, stateTax, fedTax, fica;  //entry
                float grossTot, stateTot, fedTot, ficaTot, taxTot; //totals

                //Initialize variables
                grossTot = 0;
                stateTot = 0;
                fedTot = 0;
                ficaTot = 0;
                //Input data
                cout << "This program will calculate your payroll!" << endl;
                cout << "Enter the employee number: ";
                cin >> empNo;
                //Map inputs to outputs or process the data
                while (empNo != 0)
                {
                    cout << "Enter the gross pay for employee number " << empNo << ": $";
                    cin >> grossPay;            //gross
                    if (grossPay < 0)
                    {
                        cout << "Not a valid entry. Reenter gross pay: $";
                        cin >> grossPay;
                    }
                    grossTot += grossPay;

                    cout << "Enter the state tax for employee number " << empNo << ": $";
                    cin >> stateTax;       //state tax
                    if (stateTax < 0)
                    {
                        cout << "Not a valid entry. Reenter state tax: $";
                        cin >> stateTax;
                    }
                    stateTot += stateTax;

                    cout << "Enter the federal tax for employee number: " << empNo << ": $";
                    cin >> fedTax;       //feddddd
                    if (fedTax < 0)
                    {
                        cout << "Not a valid entry. Reenter federal tax: $";
                        cin >> fedTax;
                    }
                    fedTot += fedTax;

                    cout << "Enter the FICA holdings for employee number " << empNo << ": $";
                    cin >> fica;       //fica
                    if (fica < 0)
                    {
                        cout << "Not a valid entry. Reenter FICA holdings: $";
                        cin >> fica;
                    }
                    ficaTot += fica;

                    taxTot = stateTax + fedTax + fica;   //total verification
                    if (taxTot > grossPay)
                    {
                        cout << "Invalid entries, taxes and holdings must not exceed ";
                        cout << "gross pay. Please start over.";
                    }
                    cout << "Enter the employee number: ";
                    cin >> empNo;
                }
                //Output the transformed data
                cout << "The total gross pay is $" << grossTot << endl;
                cout << "The total state tax is $" << stateTot << endl;
                cout << "The total federal tax is $" << fedTot << endl;
                cout << "The total FICA holding is $" << ficaTot << endl;
                break;
            }
            case '8':{
                unsigned short month, months;
                float interest, start, balance, annual, dep, with, final;
                float depTot, withTot, interestT, interestTot;
                //Initialize variables
                cout << "This program will calculate your savings ";
                cout << "account balance!" << endl;
                cout << "Enter the annual interest rate? ";  //enter rate
                cin >> annual;
                interest = annual / 100 / 12;

                cout << "What is your starting balance? $";  //enter balance
                cin >> start;
                balance = 0;

                cout << "How many months have you had this account? ";  //enter months
                cin >> months;

                month = 1;    //for counters
                withTot = 0;
                depTot = 0;
                interestTot = 0;
                //Input data
                for (month;month <= months;month++)
                {
                    cout << "How much was deposited for month " << month << "? $";
                    cin >> dep;
                    if (dep <= 0)
                    {
                        cout << "Not a valid entry. Please reenter: $";
                        cin >> dep;
                    }
                    depTot += dep;

                    cout << "How much was withdrawn for month " << month << "? $";
                    cin >> with;
                    if (with <= 0)
                    {
                        cout << "Not a valid entry. Please reenter: $";
                        cin >> with;
                    }
                    withTot += with;

                    balance = start + depTot - withTot;
                    interestT = balance * interest;
                    interestTot += interestT;
                }
                //Map inputs to outputs or process the data
                final = start + depTot - withTot + interestTot;
                cout << "Your ending balance is $" << final << endl;
                cout << "Your deposit total is $" << depTot << endl;
                cout << "Your withdrawal total is $" << withTot << endl;
                cout << "Your interest earned is $" << interestTot << endl;
                break;
            }
            case '9':{
                //Declare variables
                float total, expense, start, minus;
                //Initialize variables

                //Input data
                cout << "This program will calculate your budget for the month!" << endl;
                cout << "How much are you trying to budget for the month? $";
                cin >> start;
                cout << "Enter the first expense (enter 0 when you are done entering): $";
                cin >> expense;

                //Map inputs to outputs or process the data
                while (expense != 0)
                {
                total += expense;
                minus = start - total;
                cout << "What is the next expense? $";
                cin >> expense;
                }
                //Output the transformed data
                cout << "The remaining balance for your budget is $"  << minus;
                break;
            }
            case '10':{
                //Declare variables
                ofstream outputFile;
                outputFile.open("Bank_Statements.txt");

                unsigned short month, months;
                float interest, start, balance, annual, dep, with, final;
                float depTot, withTot, interestT, interestTot;
                //Initialize variables
                cout << "This program will calculate your savings ";
                cout << "account balance!" << endl;
                cout << "Enter the annual interest rate? ";  //enter rate
                cin >> annual;
                interest = annual / 100 / 12;

                cout << "What is your starting balance? $";  //enter balance
                cin >> start;
                balance = 0;

                cout << "How many months have you had this account? ";  //enter months
                cin >> months;

                month = 1;    //for counters
                withTot = 0;
                depTot = 0;
                interestTot = 0;
                //Input data
                for (month;month <= months;month++)
                {
                    cout << "How much was deposited for month " << month << "? $";
                    cin >> dep;
                    if (dep <= 0)
                    {
                        cout << "Not a valid entry. Please reenter: $";
                        cin >> dep;
                    }
                    depTot += dep;

                    cout << "How much was withdrawn for month " << month << "? $";
                    cin >> with;
                    if (with <= 0)
                    {
                        cout << "Not a valid entry. Please reenter: $";
                        cin >> with;
                    }
                    withTot += with;

                    balance = start + depTot - withTot;
                    interestT = balance * interest;
                    interestTot += interestT;
                }
                //Map inputs to outputs or process the data
                final = start + depTot - withTot + interestTot;
                //output to file
                outputFile << "Your ending balance is $" << final << endl;
                outputFile << "Your deposit total is $" << depTot << endl;
                outputFile << "Your withdrawal total is $" << withTot << endl;
                outputFile << "Your interest earned is $" << interestTot << endl;
                break;
            }
            default:{
                cout<<"Exit the program"<<endl;
            }
        }
    }while(choice>='1'&&choice<='10');
    
    //Exit stage right!
    return 0;
}