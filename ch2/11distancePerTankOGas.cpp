#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    int gallons = 20;
    double mpgTown = 23.5;
    double mpgHighway = 28.9;

    double distanceT = (double)gallons * mpgTown;
    double distanceH = (double)gallons * mpgHighway;

    cout << "Total distance (Town): " << distanceT << endl;
    cout << "Total distance (Highway): " << distanceH << endl;

}