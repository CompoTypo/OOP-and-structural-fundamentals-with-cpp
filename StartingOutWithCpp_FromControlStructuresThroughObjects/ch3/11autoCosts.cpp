/*
Automobile Costs
Write a program that asks the user to enter the monthly costs for the following
expenses incurred from operating his or her automobile: loan payment, insurance, gas,
oil, tires, and maintenance. The program should then display the total monthly cost of
these expenses, and the total annual cost of these expenses.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    double loan, ins, gas, oil, tires, maint;

    cout << "Enter loan payment: ";
    cin >> loan;

    cout << "Enter insurance payment: ";
    cin >> ins;

    cout << "Enter monthly gas: ";
    cin >> gas;

    cout << "Enter oil change amount: ";
    cin >> oil;

    cout << "Enter cost for tires: ";
    cin >> tires;

    cout << "Enter maintenence amount: ";
    cin >> maint;

    double monthlyCost = loan + ins + gas + oil + tires + maint;

    cout << "Total monthly costs:      " << setw(20) << fixed << setprecision(2) << monthlyCost << endl;

  
}