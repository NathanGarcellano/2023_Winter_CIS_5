/* 
 * File:   main.cpp
 * Author: Nathan Garcellano
 *
 * Created on January 9, 2023, 10:14 PM
 * Purpose:  Free Fall Calculation
 */

//System Libraries
#include <iostream> //Input Output Library
#include <cstdlib>  //Utilizes random numbers
#include <cmath>
using namespace std;
//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
float GRAVITY=3.2174e1f;//Gravity 32.174 ft/sec^2

//Function Prototypes

//execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    float drop, //Distance the object falls
           tim; //Time in seconds
            
    //Initialize Variables
    tim=rand()%10+1;//Time from 1 to 10 seconds
    tim=1;
    //Map/Process the Inputs -> Outputs
    //drop=1/2*GRAVITY*tim*tim; Incorrect integer division
    //drop=1/2.0f*GRAVITY*tim*tim;
    //drop=GRAVITY*tim*tim/2;
    //Display Inputs/Outputs
    drop=GRAVITY*pow(tim,2)/2;
    cout<<"This program calculates distance in free fall"<<endl;
    cout<<"The time of drop = "<<tim<<" seconds"<<endl;
    cout<<"The distance dropped = "<<drop<<" feet"<<endl;
    //Clean up memory and files
    
    //Exit the program
    return 0;
}

