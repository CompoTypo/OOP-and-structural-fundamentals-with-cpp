#include <iostream>
#include <fstream>
#include <string>
using namespace std;

float calcRetail(float cost, float markup) {
    float msrp = cost + cost * (markup / 100);
    return msrp;
}

int main() {
    float cost;
    float markup;
    float msrp;

    cout << "enter an item price: ";
    cin >> cost;
    cout << "enter item markup percentage: ";
    cin >> markup;

    if (cost < 0 || markup < 0) {
        cout << "negative nums, you done goofed" << endl;
    } else {
        msrp = calcRetail(cost, markup);
    }

    cout << msrp << endl;
}