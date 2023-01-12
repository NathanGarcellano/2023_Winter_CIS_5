/* 
 * File:   main.cpp
 * Author: Nathan Garcellano
 *
 * Created on January 11, 2023, 11:40 PM
 * Purpose:  Sales Tax
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
    float ttl = 95; //total sales
    float stetx = .04; //state sales tax
    float countx = .02; //county sales tax
    //Initialize Variables
    float prereq = countx * ttl; //county sales tax times total sales
    float stxtt = stetx * ttl; //state sales times total sales
    //Map/Process the Inputs -> Outputs
    float totlp = ttl + prereq + stxtt; //total sales price with tax
    //Display Inputs/Outputs
    cout << "The total with tax included $" << totlp;
    //Clean up memory and files
    
    //Exit the program
    return 0;
}

