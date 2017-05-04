/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created 2017
 * Purpose:  program to determine the winning division
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float getsales();
float findHighest(float,float,float,float);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float a,b,c,d, highest;
    //Initialize variables
    cout<<"Program for figuring out the winning division!\n";
    //Input data
    cout<<"How much did the Northeast sale this quarter? $";
    a=getsales();
    cout<<"How much did the Northwest sale this quarter? $";
    b=getsales();
    cout<<"How much did the Southeast sale this quarter? $";
    c=getsales();
    cout<<"How much did the Southwest sale this quarter? $";
    d=getsales();
    //Map inputs to outputs or process the data
    highest=findHighest(a,b,c,d);
    //Output the transformed data
    if(highest==a)
    {
        cout<<"The Northeastern Division had the greatest sales for this";
        cout<<" quarter with a total of $"<<a<<endl;
    }
    else if(highest==b)
    {
        cout<<"The Northwestern Division had the greatest sales for this";
        cout<<" quarter with a total of $"<<b<<endl;
    }
    else if(highest==c)
    {
        cout<<"The Southeastern Division had the greatest sales for this";
        cout<<" quarter with a total of $"<<c<<endl;
    }
    else if(highest==d)
    {
        cout<<"The Soutwestern Division had the greatest sales for this";
        cout<<" quarter with a total of $"<<d<<endl;
    }
    //Exit stage right!
    return 0;
}

//function for getting number and validating input
float getsales()
{
    float entry;
    cin>>entry;
    if(entry<0)
    {
        cout<<"Invalid amount. Re enter sales: $";
        cin>>entry;
    }
    return entry;
}

 //function for finding greatest number
float findHighest(float a, float b, float c, float d)
{
    return a>b?a>c?a>d?a:d:c>d?c:d:b>c?b>d?b:d:c>d?c:d;
}
