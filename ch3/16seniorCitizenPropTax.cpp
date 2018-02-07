#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    double value;
    double exemption = 5000;


    cout << "enter a value of your land: ";
    cin >> value;

    double taxValue = value * 0.6 - exemption;
    double propTax = taxValue * 0.0264;

    cout << "assessmentValue: $" << taxValue << endl;
    cout << "propTax: $" << propTax << endl;
    cout << "quarterly: $" << propTax / 4 << endl;

}