/*
Stock  Commission  

Kathryn bought 750 shares of stock at a price of $35.00 per share. 
She must pay her stockbroker a 2 percent commission for the transaction. 

Write a program that calcu-lates and displays the following: 
•      The amount paid for the stock alone (without the commission) 
•      The amount of the commission 
•      The total amount paid (for the stock plus the commission)
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int stocks = 750;
    double pricePerStock = 35.00;
    double commision = 0.02;

    double stockAmt = (double)stocks * pricePerStock;
    double cmsnAmt = stockAmt * commision;

    cout << "Stock price: " << stockAmt << endl;
    cout << "Commision amount: " << cmsnAmt << endl;
    cout << "Total: " << stockAmt + cmsnAmt << endl;

}