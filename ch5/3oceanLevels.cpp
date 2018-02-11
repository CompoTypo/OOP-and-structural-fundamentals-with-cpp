#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    double risingRate = 1.5;
    int years;

    cout << "Enter how many years the oceans are rising: ";
    cin >> years;

    for (int i = 0; i <= years; i++) {
        cout << "Ocean has risen " << i * risingRate << endl;
    }
}