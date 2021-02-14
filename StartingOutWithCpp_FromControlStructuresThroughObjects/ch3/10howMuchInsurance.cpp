/*
How Much Insurance?
Many financial experts advise that property owners should insure their homes or build-
ings for at least 80 percent of the amount it would cost to replace the structure. Write a
program that asks the user to enter the replacement cost of a building and then displays
the minimum amount of insurance he or she should buy for the property.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    double repCost;

    double insPercent = 0.80;

    cout << "Enter replacement cost: ";
    cin >> repCost;

    double insNeeded = repCost * insPercent;

    cout << "Insurance needed:        " << setw(20) << insNeeded << endl;

}