/* 
 * File:   main.cpp
 * Author: Nathan Garcellano
 *
 * Created on January 9, 2023, 9:59 PM
 * Purpose:  Create a Banner Letter
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
    char lt; //Letter to create banner character
    //Initialize Variables
    cout<<"Type in a letter to compose the Banner C"<<endl;
    cout<<"Use characters a-z, or A-Z"<<endl;
    cin>>lt;
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout<<"Our Big C using letter "<<lt<<endl;
    cout<<"  "<<lt<<lt<<lt<<endl;
    cout<<" "<<lt<<"  "<<lt<<endl;
    cout<<lt<<endl;
    cout<<lt<<endl;
    cout<<lt<<endl;
    cout<<lt<<endl;
    cout<<lt<<endl;
    cout<<" "<<lt<<"  "<<lt<<endl;
    cout<<"  "<<lt<<lt<<lt<<endl;
    //Clean up memory and files
    
    //Exit the program
    return 0;
}

