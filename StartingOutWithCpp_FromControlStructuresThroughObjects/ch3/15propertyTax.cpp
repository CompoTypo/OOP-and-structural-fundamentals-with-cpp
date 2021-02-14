/*
Property Tax
A county collects property taxes on the assessment value of property, which is 60 per-
cent of the property’s actual value. If an acre of land is valued at $10,000, its assessment
value is $6,000. The property tax is then 75¢ for each $100 of the assessment value.
The tax for the acre assessed at $6,000 will be $45. Write a program that asks for the
actual value of a piece of property and displays the assessment value and property tax.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    string month;
    double value;


    cout << "enter a value of your land: ";
    cin >> value;

    double taxValue = value * 0.6;
    double propTax = taxValue * 0.0075;

    cout << "assessmentValue: $" << taxValue << endl;
    cout << "propTax: $" << propTax << endl;
    
    


}