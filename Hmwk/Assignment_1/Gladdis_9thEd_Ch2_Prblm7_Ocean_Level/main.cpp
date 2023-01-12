/* 
 * File:   main.cpp
 * Author: Nathan Garcellano
 *
 * Created on January 12, 2023, 1:08 AM
 * Purpose:  Ocean levels
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
    float ocean = 1.5; //how many millimeters the ocean rises per year
    //Initialize Variables
    float five = ocean * 5; //ocean level in 5 years
    float seven = ocean * 7; //ocean level in 7 years
    float ten = ocean * 10; //ocean level in 10 years
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout <<"In five years the ocean will be "<< five <<" millimeters";
    cout <<" higher than the current level" << endl;
    cout <<"In seven years the ocean will be "<< seven <<" millimeters";
    cout <<" higher than the current level" << endl;
    cout <<"In ten years the ocean will be "<< ten <<" millimeters";
    cout <<" higher than the current level" << endl;
    //Clean up memory and files
    
    //Exit the program
    return 0;
}

