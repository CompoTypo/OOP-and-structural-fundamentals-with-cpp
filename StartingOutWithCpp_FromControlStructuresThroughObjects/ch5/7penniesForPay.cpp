#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    double wage = 0.01;
    int days;

    cout << "How days have you worked? ";
    cin >> days;   

    for (int i = 0; i < days; i++) {
        cout << "day " << i + 1 << setw(10) << wage << endl;

        wage *= 2;
    }
}