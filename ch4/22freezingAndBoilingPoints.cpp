#include <cstdlib>
#include <iostream>


using namespace std;

int main(int argc, char** argv) {

    int menuOption;
    double temperature;

    cout << "Enter a farenheit temperature: ";
    cin >> temperature;

    if (temperature < -173) {
        cout << "Freeze: Ethyl alcohol" << endl;
    }

    if (temperature < -38) {
        cout << "Freeze: Mercury" << endl;
    }

    if (temperature < -362) {
        cout << "Freeze: Oxygen" << endl;
    }

    if (temperature < 32) {
        cout << "Freeze: Water" << endl;
    }

    if (temperature > 172) {
        cout << "Boil: Ethyl Alcohol" << endl;
    }

    if (temperature < 676) {
        cout << "Boil: Mercury" << endl;
    }

    if (temperature < -306) {
        cout << "Boil: Oxygen" << endl;
    }

    if (temperature > 212) {
        cout << "Boil: Water" << endl;
    }
}

