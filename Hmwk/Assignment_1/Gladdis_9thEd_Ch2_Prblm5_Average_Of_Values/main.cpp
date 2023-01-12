/* 
 * File:   main.cpp
 * Author: Nathan Garcellano
 *
 * Created on January 12, 2023, 12:48 AM
 * Purpose:  To get the average of a series of values
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
    int a = 28;
    int b = 32;
    int c = 37;
    int d = 24;
    int e = 33;
    //Initialize Variables
    int sum = a + b + c + d + e;
    int avg = sum / 5;
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout << "The average of the series of values is " << avg<< endl;
    //Clean up memory and files
    
    //Exit the program
    return 0;
}

