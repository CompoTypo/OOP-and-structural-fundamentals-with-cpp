#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    double payAmount = 2200;
    int payPeriods = 26;
    double annualPay = payAmount * payPeriods;

    cout << "annual pay: $" << annualPay << endl;

}