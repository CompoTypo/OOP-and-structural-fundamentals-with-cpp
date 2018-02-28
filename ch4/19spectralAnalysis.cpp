#include <cstdlib>
#include <iostream>


using namespace std;

int main(int argc, char** argv) {

    double wavelength;

    cout << "Enter a wavelength: ";
    cin >> wavelength;

    if (wavelength > 0.01) {
        cout << "wavelength is a radio wave" << endl;
    } else if (wavelength <= 0.01 && wavelength > 0.001) {
        cout << "wavelength is a microwave" << endl;
    } else if (wavelength <= 0.001 && wavelength > 0.0000007) {
        cout << "wavelength is a infared" << endl;
    } else if (wavelength <= 0.0000007 && wavelength > 0.0000004) {
        cout << "wavelength is visible light" << endl;
    } else if (wavelength <= 0.0000004 && wavelength > 0.00000001) {
        cout << "wavelength is ultra violet" << endl;
    } else if (wavelength <= 0.00000001 && wavelength > 0.00000000001) {
        cout << "wavelength is xray" << endl;        
    } else if (wavelength <= 0.00000000001) {
        cout << "wavelength is gamma ray" << endl;        
    }
    return 0;
}