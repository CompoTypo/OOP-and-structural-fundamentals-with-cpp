/*
Currency
Write a program that will convert U.S. dollar amounts to Japanese yen and to euros,
storing the conversion factors in the constants YEN_PER_DOLLAR and EUROS_PER_
DOLLAR . To get the most up-to-date exchange rates, search the Internet using the
term “currency exchange rate”. If you cannot find the most recent exchange rates, use
the following:
1 Dollar = 98.93 Yen
1 Dollar = 0.74 Euros
Format your currency amounts in fixed-point notation, with two decimal places of
precision, and be sure the decimal point is always displayed.
*/

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