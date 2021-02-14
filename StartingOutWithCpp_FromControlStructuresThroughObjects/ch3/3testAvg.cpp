/*
Test Average
Write a program that asks for five test scores. The program should calculate the aver-
age test score and display it. The number displayed should be formatted in fixed-point
notation, with one decimal point of precision.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    double t1, t2, t3, t4, t5;

    cout << "Enter 5 test grades, seperated by a newline?: " << endl;
    cin >> t1;
    cin >> t2;
    cin >> t3;
    cin >> t4;
    cin >> t5;

    double avg = (t1 + t2 + t3 + t4 + t5) / 5;


    cout << "Total made: "  << fixed << setprecision(1) << avg << endl;
}