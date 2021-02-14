#include <iostream>

using namespace std;

int main() {
    double weight;
    int miles;
    double charges = 0;

    cout << "Enter the weight of the package: ";
    cin >> weight;
    cout << "Enter the distance it has to go: ";
    cin >> miles;

    if (weight < 0) {
        cout << "Error, invalid weight, setting to 0" << endl;
        weight = 0;
    } else if (weight > 20) {
        cout << "Error, invalid weight, no more than 20 kilos" << endl;
        return 0;
    } 

    if (miles < 10 || miles > 3000) {
        cout << "Error, invalid distance" << endl;
        return 0;
    }

    if (weight <= 2) {
        charges = miles * (1.1 / 500);
    } else if (weight > 2 && weight <= 6) {
        charges = miles * (2.2 / 500);
    } else if (weight > 6 && weight <= 10) {
        charges = miles * (3.7 / 500);
    } else if (weight > 10 && weight <= 20) {
        charges = miles * (4.8 / 500);
    } 

    cout << "Total shipping charge is: $" << charges << endl;
}