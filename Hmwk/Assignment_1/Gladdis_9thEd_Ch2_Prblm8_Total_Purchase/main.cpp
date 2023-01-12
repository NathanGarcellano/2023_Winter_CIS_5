/* 
 * File:   main.cpp
 * Author: Nathan Garcellano
 *
 * Created on January 12, 2023, 1:21 AM
 * Purpose:  Calculating the total of items
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
    float a = 15.95; 
    float b = 24.95;
    float c = 6.95;
    float d = 12.95;
    float e = 3.95; //prices of each item
    //Initialize Variables
    float sub = a + b + c + d + e; //subtotal
    float slt = sub * .07; //sales tax
    float total = slt + sub; //total
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout << "Subtotal of the sale $" << sub << endl;
    cout << "Amount of sales tax $" << slt << endl;
    cout << "Total $" << total <<endl;
            
    //Clean up memory and files
    
    //Exit the program
    return 0;
}

