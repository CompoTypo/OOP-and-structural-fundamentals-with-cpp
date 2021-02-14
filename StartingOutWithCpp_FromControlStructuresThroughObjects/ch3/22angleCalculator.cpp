/*
Angle Calculator
Write a program that asks the user for an angle, entered in radians. The program
should then display the sine, cosine, and tangent of the angle. (Use the sin , cos , and
tan library functions to determine these values.) The output should be displayed in
fixed-point notation, rounded to four decimal places of precision.
*/

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