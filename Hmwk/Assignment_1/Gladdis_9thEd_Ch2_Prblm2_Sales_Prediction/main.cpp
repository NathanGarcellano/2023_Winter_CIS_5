/* 
 * File:   main.cpp
 * Author: Nathan Garcellano
 *
 * Created on January 11, 2023, 11:23 PM
 * Purpose:  Sales Prediction
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
    float prcnt = .58; //percentage of total sales
    float sls = 8600000; //generated sales
    
    float ttls = sls * prcnt; //predicted sales
    //Initialize Variables
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout <<"The East Coast sales division predicted " << ttls;
    cout <<" in generated sales";
    //Clean up memory and files
    
    //Exit the program
    return 0;
}

