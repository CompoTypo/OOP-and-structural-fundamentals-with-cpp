/*
Stadium Seating
There are three seating categories at a stadium. For a softball game, Class A seats cost
$15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how
many tickets for each class of seats were sold, then displays the amount of income gen-
erated from ticket sales. Format your dollar amount in fixed-point notation, with two
decimal places of precision, and be sure the decimal point is always displayed.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    double costA = 15;
    double costB = 12;
    double costC = 9;

    int soldA, soldB, soldC;

    cout << "How many class A tickets sold?: ";
    cin >> soldA;

    cout << "How many class B tickets sold?: ";
    cin >> soldB;

    cout << "How many class C tickets sold?: ";
    cin >> soldC;

    double totA = (double)soldA * costA;
    double totB = (double)soldB * costB;
    double totC = (double)soldC * costC;


    cout << "Total made: "  << fixed << setprecision(2) << totA + totB + totC << endl;
}