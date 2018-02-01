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

    cout << "enter an item price: ";
    cin >> cost;
    cout << "enter item markup: ";
    cin >> markup;
    float msrp = calcRetail(cost, markup);

    cout << msrp << endl;

}