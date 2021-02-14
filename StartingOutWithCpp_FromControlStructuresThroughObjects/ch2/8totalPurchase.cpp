/*
Total  Purchase  
A customer in a store is purchasing five items. 
The prices of the five items are 
    Price of item 1 = $15.95 
    Price of item 2 = $24.95 
    Price of item 3 = $6.95 
    Price of item 4 = $12.95 
    Price of item 5 = $3.95 

Write a program that holds the prices of the five items in five variables. 
Display each item’s price, the subtotal of the sale, the amount of sales tax, and the total. 
Assume the sales tax is 7%
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    double i1 = 15.95;
    double i2 = 24.95;
    double i3 = 6.95;
    double i4 = 12.95;
    double i5 = 3.95;

    double subtotal = i1 + i2 + i3 + i4 + i5;
    double tax = subtotal * 0.07;

    cout << "subtotal: " << subtotal << endl;
    cout << "tax:      " << tax << endl;
    cout << "Final:    " << subtotal + tax << endl;
}