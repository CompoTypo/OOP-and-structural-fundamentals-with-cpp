#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {

    int radAngle;

    cout << "Enter an angle in radians: ";
    cin >> radAngle;
    float tangent = tan(radAngle);
    float cosine = cos(radAngle);
    float sine = sin(radAngle);

    cout << "Tangent: " << tangent << endl;
    cout << "Cosine: " << cosine << endl;
    cout << "Sine: " << sine << endl;

}