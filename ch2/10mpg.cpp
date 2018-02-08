#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    int gallons = 15;
    int maxMiles = 375;

    double mpg = (double)maxMiles / (double)gallons;

    cout << "mpg: " << mpg << endl;
}