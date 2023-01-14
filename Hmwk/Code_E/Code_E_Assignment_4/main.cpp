/* 
 * File:
 * Author: Nathan Garcellano
 * Date: 1/12/2023
 * Purpose:
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    
    //Initialize or input data here
    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0;
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    
    //Format and display outputs here
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cout << setw(9) << a << setw(10) << fixed << setprecision(1) << showpoint << a << setw(10) << fixed << setprecision(2) << a << endl;
    cout << noshowpoint << setprecision(0) << setw(9) << b << setw(10) << fixed << setprecision(1) << showpoint << b << setw(10) << fixed << setprecision(2) << b << endl;
    cout << noshowpoint << setprecision(0) << setw(9) << c << setw(10) << fixed << setprecision(1) << showpoint << c << setw(10) << fixed << setprecision(2) << c << endl;
    cout << noshowpoint << setprecision(0) << setw(9) << d << setw(10) << fixed << setprecision(1) << showpoint << d << setw(10) << fixed << setprecision(2) << d;
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}