#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    double mph;
    int hours;

    cout << "what is the speed of your vehicle? ";
    cin >> mph;
    cout << "How many hours have you traveled? ";
    cin >> hours;   

    for (int i = 0; i < hours; i++) {
        cout << i + 1 << setw(10) << mph * (i+1) << endl;
    }
}