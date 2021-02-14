/*
Monthly Sales Tax
A retail company must file a monthly sales tax report listing the sales for the month and
the amount of sales tax collected. Write a program that asks for the month, the year,
and the total amount collected at the cash register (that is, sales plus sales tax). Assume
the state sales tax is 4 percent and the county sales tax is 2 percent.
If the total amount collected is known and the total sales tax is 6 percent, the amount
of product sales may be calculated as:

S = T / 1.06

S is the product sales and T is the total income (product sales plus sales tax).
The program should display a report similar to
Month: October
--------------------
Total Collected:    $ 26572.89
Sales:              $ 25068.76
County Sales Tax:   $ 501.38
State Sales Tax:    $ 1002.75
Total Sales Tax:    $ 1504.13
*/

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