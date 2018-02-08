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