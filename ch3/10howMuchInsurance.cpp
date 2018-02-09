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