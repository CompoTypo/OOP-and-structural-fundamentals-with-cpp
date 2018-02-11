#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int costPerYear = 2500;
    double costIncreasePercent = 0.04;

    for (int i = 0; i <= 6; i++) {
        
        cout << costPerYear << endl;
        costPerYear = costPerYear + (costPerYear * costIncreasePercent);
    }

}