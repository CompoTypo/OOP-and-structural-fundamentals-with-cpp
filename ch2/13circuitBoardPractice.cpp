#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    double cbPrice = 14.95;
    double markup = 0.35;

    double msrp = cbPrice + (cbPrice*markup);

    cout << "Sales price: " << msrp << endl;

}