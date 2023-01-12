/* 
 * File:   main.cpp
 * Author: Nathan Garcellano
 *
 * Created on January 12, 2023, 12:03 AM
 * Purpose:  Program that computes tax and tip
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
    float meal = 88.67; //total of the meal
    float tax = .0675; //tax of meal
    float tip = .20; //tip percentage
    //Initialize Variables
    float txml = meal * tax; //tax of the meal
    float ttax = txml + meal; //total of meal plus tax
    float ttip = ttax * tip; //tip amount
    float total = ttax + ttip; //total with tax and tip
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout << "meal cost $" << meal << endl;
    cout << "tax amount $" << txml << endl;
    cout <<"tip $" << ttip << endl;
    cout <<"total $"<< total << endl;
    //Clean up memory and files
    
    //Exit the program
    return 0;
}

