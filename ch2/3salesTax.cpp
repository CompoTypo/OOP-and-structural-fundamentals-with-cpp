#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    float stateSalesPercent = 4;
    float countySalesPercent = 2;

    float cost = 95;

    float tax = (95 * (stateSalesPercent / 100) + 95 * (countySalesPercent / 100));
    cout << tax << endl;
}