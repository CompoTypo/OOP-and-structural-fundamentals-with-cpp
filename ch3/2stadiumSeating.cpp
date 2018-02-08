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