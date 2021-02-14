/*
Celsius to Fahrenheit
Write a program that converts Celsius temperatures to Fahrenheit temperatures. The
formula is
F = (9/5)C + 32
F is the Fahrenheit temperature, and C is the Celsius temperature.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    double cel;

    cout << "Enter a temp in celcius: ";
    cin >> cel;

    double fahr = (cel * 9/5) + 32;

    cout << "Faherenheit:      " << setw(20) << fahr << endl;
  
}