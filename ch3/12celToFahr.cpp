#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    double cel;

    cout << "Enter a temp in celcius: ";
    cin >> cel;

    double fahr = (cel * 9/5) + 32;

    cout << "Faherenheit:      " << setw(20) << fahr << endl;
  
}