/* 
 * File:   main.cpp
 * Author: Nathan Garcellano
 *
 * Created on January 13, 2023, 9:01 PM
 * Purpose:  Fuel Cost Optimization
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
    float mpg = 16; //Miles per gallon
    float sizeg = 22; //Size of gas tank in gallons
    float gage = 0.25; //Fuel gage reading
    float fill = 16.5; //Fill the tank in gallons
    
    float dist1 = 10; //Distance station 1
    float ppg1 = 3.85; //Price per gallon on station 1
    
    float dist2 = 0.5; //Distance station 2
    float ppg2 = 3.95; //Price per gallon on station 2
    //Initialize Variables
    float currnt = sizeg * gage; //Gallons currently in car
    float used1 = dist1 / mpg; //Gas used to get to station 1
    float used2 = dist2 / mpg; //Gas used to get to station 2
    float amt1 = currnt * used1; //Gas amount station 1
    float amt2 = currnt * used2; //Gas amount station 2
    float cost1 = (sizeg - amt1) * ppg1; //Cost to fill at station 1
    float cost2 = (sizeg - amt2) * ppg2; //Cost to fill at station 1
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout <<"Station 1" << endl;
    cout <<"Price per gallon is $" << ppg1 << endl;
    cout <<"Cost to fill tank is $" << cost1 << endl;
    cout <<"Distance away is " <<dist1 << " miles" << endl;
    cout << endl;
    cout <<"Station 2" << endl;
    cout <<"Price per gallon is $" << ppg2 << endl;
    cout <<"Cost to fill tank is $" << cost2 << endl;
    cout <<"Distance away is " <<dist2 << " miles" << endl;
    cout << endl;
    cout << "Station 2 is better because it is cheaper and closer." << endl;
    //Clean up memory and files
    
    //Exit the program
    return 0;
}

