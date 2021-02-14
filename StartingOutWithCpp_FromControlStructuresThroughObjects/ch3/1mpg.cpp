/*
Miles per Gallon
Write a program that calculates a car’s gas mileage. The program should ask the user
to enter the number of gallons of gas the car can hold and the number of miles it can
be driven on a full tank. It should then display the number of miles that may be driven
per gallon of gas.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    int gallons;
    int maxMiles;

    cout << "How many gallons does it hold?: ";
    cin >> gallons;

    cout << "How many miles can it go on a full tank?: ";
    cin >> maxMiles;

    double mpg = (double)maxMiles / (double)gallons;

    cout << "mpg: " << mpg << endl;
}