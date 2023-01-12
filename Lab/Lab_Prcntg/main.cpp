/* 
 * File:   main.cpp
 * Author: Nathan Garcellano
 *
 * Created on January 12, 2023, 1:44 AM
 * Purpose:  Calculate the federal budget
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
   float milBdgt,fedBdgt,mlPrcnt;

    milBdgt=7.77e11f;    //Military Budget = 777 Billion

    fedBdgt=6.272e12f;    //Federal Budget  = 6.272 Trillion
    //Initialize Variables
    mlPrcnt = milBdgt / fedBdgt;
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout << "the percentage of the federal budget out of the military budget is " <<mlPrcnt<<endl;
    //Clean up memory and files
    
    //Exit the program
    return 0;
}

