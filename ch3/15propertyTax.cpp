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