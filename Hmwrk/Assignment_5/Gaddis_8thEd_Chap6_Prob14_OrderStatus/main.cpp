/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created in 2017
 * Purpose:  Program for order status of a spool company
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int standardShip=10;
const int cost=100;
//Function Prototypes
void standard(float, float);
void special(float, float);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float ordered, stock, ship;
    //Initialize variables
    
    //Input data
    cout<<"This program will check the order status with our spool company!\n";
    cout<<"How many spools were ordered? ";
    cin>>ordered;
    if(ordered<1)
    {
        cout<<"Not a valid number of spools. Enter a valye greater than 0: ";
        cin>>ordered;
    }
    cout<<"How many spools are in stock? ";
    cin>>stock;
    if (stock<0)
    {
        cout<<"Not a valid stock number. Reenter: ";
        cin>>stock;
    }
    cout<<"Standard(1) or Special Ship(2)?";
    cin>>ship;
    //Map inputs to outputs or process the data
    if(ship==1)
    {
        standard(ordered, stock);
    }
    else if(ship==2)
    {
        special(ordered, stock);
    }
    else
    {
        cout<<"Invalid entry. Choose 1 for Standard and 2 for special: ";
        cin>>ship;
    }
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

//standard
void standard(float ordered, float stock)
{
    float available=stock-ordered;
    float subTotal, subShip, total;
    if (available>=0)
    {
        cout<<"All your spools are ready to ship!\n";
        cout<<"We can ship you "<<ordered<<" spools.\n";
        subTotal=ordered*cost;
        cout<<"Your subtotal is $"<<subTotal<<endl;
        subShip=ordered*standardShip;
        cout<<"Your shipping charges will be $"<<subShip<<endl;
        total=subTotal+subShip;
        cout<<"Your order total is $"<<total<<endl;
    }
    else if (available<0)
    {
        float backorder=(stock-ordered)*-1;
        float currentAvail=ordered-stock;
        cout<<"We are going to back some spools.\n";
        cout<<"We have "<<stock<<" spools now and ";
        cout<<"have to backorder "<<backorder<<" spools\n";
        subTotal=stock*cost;
        cout<<"Your subtotal is $"<<subTotal<<endl;
        subShip=stock*standardShip;
        cout<<"Your shipping charges will be $"<<subShip<<endl;
        total=subTotal+subShip;
        cout<<"Your order total is $"<<total;
    }
}

//special
void special(float ordered, float stock)
{
    float available=stock-ordered;
    float subTotal, subShip, total, charges;
    cout<<"How much extra are the special shipping charges? $";
    cin>>charges;
    if (available>=0)
    {
        cout<<"All your spools are ready to ship!\n";
        cout<<"We can ship you "<<ordered<<" spools.\n";
        subTotal=ordered*cost;
        cout<<"Your subtotal is $"<<subTotal<<endl;
        float chargeUp=charges*ordered;
        subShip=ordered*standardShip+chargeUp;
        cout<<"Your shipping charges will be $"<<subShip<<endl;
        total=subTotal+subShip;
        cout<<"Your order total is $"<<total<<endl;
    }
    else if (available<0)
    {
        float backorder=(stock-ordered)*-1;
        float currentAvail=ordered-stock;
        cout<<"We are going to back some spools.\n";
        cout<<"We have "<<stock<<" spools now and ";
        cout<<"have to backorder "<<backorder<<" spools\n";
        subTotal=stock*cost;
        cout<<"Your subtotal is $"<<subTotal<<endl;
        float chargeUp=stock*charges;
        subShip=stock*standardShip+chargeUp;
        cout<<"Your shipping charges will be $"<<subShip<<endl;
        total=subTotal+subShip;
        cout<<"Your order total is $"<<total;
    }
}