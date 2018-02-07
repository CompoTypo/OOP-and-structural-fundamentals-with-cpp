#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    string month;
    int year;
    float collectedDough;
    double stateSalesTaxPercent = 4;
    double countySalesTaxPercent = 2;


    cout << "enter a month: ";
    cin >> month;
    cout << "enter a num for year: ";
    cin >> year;
    cout << "enter a num for amount collected: ";
    cin >> collectedDough;

    double stateSalesTax = (stateSalesTaxPercent / 100) * collectedDough;
    double countySalesTax = (countySalesTaxPercent / 100) * collectedDough;   

    double totalIncome = collectedDough - (stateSalesTax + countySalesTax);

    cout << "Month: " << month << endl;
    cout << "---------------" << endl;
    cout << "Total Collected:   $" << collectedDough << endl;
    cout << "Sales:             $" << totalIncome << endl;
    cout << "County Sales Tax:  $" << countySalesTax << endl;
    cout << "State Sales Tax:   $" << stateSalesTax << endl;
    cout << "Total Sales Tax:   $" << stateSalesTax + countySalesTax << endl;
    
    


}