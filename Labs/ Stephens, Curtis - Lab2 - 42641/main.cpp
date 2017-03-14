/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  This program is to compute the percentage tax per gallon of gas
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float excise, sales, cap, federal, oilCompany, price;
    
    //Initialize variables
    excise = 0.39;
    sales = 0.08;
    cap = 0.1;
    federal = 0.184;
    oilCompany = 0.07;
    //Input data
    
    //Map inputs to outputs or process the data
     
    //Output the transformed data
    cout << "What is the price paid per gallon? ";
    cin >> price;
    
    float salesTotal = price * sales;
    
    cout << "The state excise tax/gallon is: $" << excise << endl;
    
    cout << "The California state tax/gallon is: $" << salesTotal << endl;
    
    cout << "The federal tax/gallon is: $" << federal << endl;
    
    cout << "The cap and trade tax/gallon is: $" << cap << endl;
    float taxtotal = excise + salesTotal + federal + cap;
    float baseprice = price - taxtotal;
    
    cout << "The base price of a gallon is: $" << baseprice << endl;
    
    cout << "\n" << endl;
    float constant = 100;
    float profPr = oilCompany * baseprice;
    float taxPr = taxtotal / baseprice;
    float proffinal = profPr * constant;
    
    cout << "The oil company profit/gallon is: " << proffinal << "%" << endl;
    
    float taxfinal = constant * taxPr;
    cout << "The tax profit/gallon is: " << taxfinal << "%" << endl;
    
    
    //Exit stage right!
    return 0;
}
