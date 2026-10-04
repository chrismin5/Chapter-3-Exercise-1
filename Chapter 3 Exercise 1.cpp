/*  Program File Name: Chapter 3 Exercise 1
    Programmer: Christian Min
    Date: 10/4/26
    Requirements:
    Write a program that calculates a car's gas mileage. The user should be asked to enter the total 
    number of gallons the car can hold, and the total number of miles the car can be driven on a full 
    tank. Calculate the miles per gallon and display the information.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double tankTotal, milesFullTank, milesPerGallon;

    cout << "Enter the number of gallons of gas the car can hold: ";
    cin >> tankTotal;
    cout << "Enter the number of miles the car can be driven on a full tank: ";
    cin >> milesFullTank;

    milesPerGallon = (milesFullTank / tankTotal);

    cout << "\n" << "Based on the information entered, the average miles per gallon of this vehicle is: " << milesPerGallon << " MPG" << "\n";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
