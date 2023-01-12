/* 
 * File:   main.cpp
 * Author: Nathan Garcellano
 *
 * Created on January 12, 2023, 12:58 AM
 * Purpose:  Annual Pay
 */

//System Libraries
#include <iostream>  //Input Output Library

using namespace std;
//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    int payamt = 2200; //employee earning per pay period
    int payper = 26; //number of pay periods per year  
    //Initialize Variables
    int annpay = payamt * payper; //annual pay
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout << "The total annual pay is $" <<annpay<< endl;
    //Clean up memory and files
    
    //Exit the program
    return 0;
}

