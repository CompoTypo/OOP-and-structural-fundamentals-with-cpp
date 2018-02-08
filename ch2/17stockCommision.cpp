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