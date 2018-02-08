#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    int gallons;
    int maxMiles;

    cout << "How many gallons does it hold?: ";
    cin >> gallons;

    cout << "How many miles can it go on a full tank?: ";
    cin >> maxMiles;

    double mpg = (double)maxMiles / (double)gallons;

    cout << "mpg: " << mpg << endl;
}