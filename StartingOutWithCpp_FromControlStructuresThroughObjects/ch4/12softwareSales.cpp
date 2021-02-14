#include <iostream>

using namespace std;

int main() {
    double packagePrice = 99;
    int numSold;

    cout << "How many units sold: ";
    cin >> numSold;

    while (numSold < 0) {
        cout << "invalid, enter positive num" << endl;
        cin >> numSold;
    }

    double ogPrice, discount;

    if (numSold >= 10 && numSold < 20) {
        ogPrice = packagePrice * numSold;
        discount = ogPrice * 0.2;
    } else if (numSold >= 20 && numSold < 50) {
        ogPrice = packagePrice * numSold;
        discount = ogPrice * 0.3;
    } else if (numSold >= 50 && numSold < 100) {
        ogPrice = packagePrice * numSold;
        discount = ogPrice * 0.4;
    } else if (numSold >= 100) {
        ogPrice = packagePrice * numSold;
        discount = ogPrice * 0.5;
    }

    cout << "MSRP: " << ogPrice << endl;
    cout << "Discount:" << discount << endl;
    cout << "Total: " << ogPrice - discount << endl;
}