#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    double YEN_PER_DOLLAR = 98.93;
    double EUROS_PER_DOLLAR = 0.74;

    double dollars;

    cout << "Enter an amount of dollars you have: ";
    cin >> dollars;

    double toYen = YEN_PER_DOLLAR * dollars;
    double toEuros = EUROS_PER_DOLLAR * dollars;

    cout << "Dollars to yen:      " << setw(20) << fixed << setprecision(2) << toYen << endl;
    cout << "Dollars to euros:    " << setw(20) << fixed << setprecision(2) << toEuros << endl;

  
}