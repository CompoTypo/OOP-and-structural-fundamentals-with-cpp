/*
Ocean Levels 
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, 
write a program that displays a table showing the number of millimeters that the ocean will have risen each year for the next 25 years. 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    double risingRate = 1.5;
    int years;

    cout << "Enter how many years the oceans are rising: ";
    cin >> years;

    for (int i = 0; i <= years; i++) {
        cout << "Ocean has risen " << i * risingRate << endl;
    }
}