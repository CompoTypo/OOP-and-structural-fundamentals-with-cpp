#include <iostream>

using namespace std;

int main() {
    double balance;
    int checksUsed;

    cout << "Enter account balance: ";
    cin >> balance;

    if (balance < 0) {
        cout << "Account is overdrawn" << endl;
    }

    cout << "How many checks used: ";
    cin >> checksUsed;

    while (checksUsed < 0) {
        cout << "invalid, enter positive num" << endl;
        cin >> checksUsed;
    }  

    double monthlyCharges = 10;
    double checkCosts;
    double lowBalFee = 15;

    if (checksUsed < 20) {
        checkCosts = checksUsed * 0.1;
    } else if (checksUsed >= 20 && checksUsed < 40) {
        checkCosts = checksUsed * 0.08;
    } else if (checksUsed >= 40 && checksUsed < 60) {
        checkCosts = checksUsed * 0.06;
    } else {
        checkCosts = checksUsed * 0.04;
    }

    double totalServiceFee;

    if (balance < 400) {
        totalServiceFee = lowBalFee + monthlyCharges + checkCosts;
    } else {
        totalServiceFee = monthlyCharges + checkCosts;

    }

    cout << "Service fee: " << totalServiceFee << endl;
}