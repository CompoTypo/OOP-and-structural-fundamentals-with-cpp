/*
Ocean  Levels  
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, 
write a program that displays: 
•      The number of millimeters higher than the current level that the ocean’s level will be in 5 years 
•      The number of millimeters higher than the current level that the ocean’s level will be in 7 years 
•      The number of millimeters higher than the current level that the ocean’s level will be in 10 years 
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    double oceanLevel = 1000;
    double rate = 1.5;

    double year5 = 1000 + (1.5 * 5);
    double year7 = 1000 + (1.5 * 7);
    double year10 = 1000 + (1.5 * 10);

    cout << "year 5: " << year5 << endl;
    cout << "year 7: " << year7 << endl;
    cout << "year 10: " << year10 << endl;
}
