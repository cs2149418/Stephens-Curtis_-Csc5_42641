/* 
 * File:   main.cpp
 * Author: Curtis Stephens
 * Created in 2017
 * Purpose:  Program to calculate hospital bill
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void inpatient();
void outpatient();
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int patient;
    //Initialize variables
    
    //Input data
    cout<<"Thank you for staying at our hospital!\n";
    cout<<"I can help you calculate your bill!\n";
    cout<<"Was the patient an inpatient(1) or outpatient(2)? ";
    cin>>patient;
    //Map inputs to outputs or process the data
    if (patient==1)
    {
        inpatient();
    }
    else if (patient==2)
    {
        outpatient();
    }
    else
    {
        cout<<"Not a valid entry. Enter 1 for inpatient or 2 for outpatient: ";
        cin>>patient;
    }
    //Output the transformed data
    cout<<"Thanks for coming!\n";
    //Exit stage right!
    return 0;
}

//inpatient
void inpatient()
{
    int days;
    float rate, dayRate, meds, service, total;
    cout<<"How many days did you stay? ";
    cin>>days;
    cout<<"How much did your stay cost per day? $";
    cin>>rate;
    if (rate<0)
    {
        cout<<"Not a valid rate. Reenter daily rate: $";
        cin>>rate;
    }
    dayRate=days*rate;
    cout<<"How much did your medications cost? $";
    cin>>meds;
    if (meds<0)
    {
        cout<<"Not a valid rate. Reenter medication cost: $";
        cin>>meds;
    }
    cout<<"How much were your charges for hospital services (tests, labs,";
    cout<<" etc): $";
    cin>>service;
    if (service<0)
    {
        cout<<"Not a valid rate. Reenter service fees: $";
        cin>>service;
    }
    total=dayRate+meds+service;
    cout<<"Your hospital stay will come out to $"<<total<<endl;
}

//outpatient
void outpatient()
{
    float meds, service, total;
    cout<<"How much did your medications cost? $";
    cin>>meds;
    if (meds<0)
    {
        cout<<"Not a valid rate. Reenter medication cost: $";
        cin>>meds;
    }
    cout<<"How much were your charges for hospital services (tests, labs,";
    cout<<" etc): $";
    cin>>service;
    if (service<0)
    {
        cout<<"Not a valid rate. Reenter service fees: $";
        cin>>service;
    } 
    total=meds+service;
    cout<<"Your hospital stay will come out to $"<<total<<endl;
}