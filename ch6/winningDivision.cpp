#include <iostream>
#include <fstream>
#include <string>
using namespace std;

double getSales() {

}

double findHighest() {
    
}

int main() {
    float cost;
    float markup;

    cout << "enter an item price: ";
    cin >> cost;
    cout << "enter item markup: ";
    cin >> markup;

    float msrp = cost + cost * (markup / 100);
    cout << msrp << endl;

}