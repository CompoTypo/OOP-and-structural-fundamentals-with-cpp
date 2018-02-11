#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    double calPerMin = 3.6;
    double calBurned;

    for (int i = 5; i <= 30; i += 5) {
        calBurned = calPerMin * (double)i;
        cout << calBurned << endl;
    }
}