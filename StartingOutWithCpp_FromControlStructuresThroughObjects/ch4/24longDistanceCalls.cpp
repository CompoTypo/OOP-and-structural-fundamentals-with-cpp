#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    float startTime;
    int duration;
    double charge = 0;

    cout << "Enter a starting time (07.00 === 07:00): ";
    cin >> startTime;

    if (startTime > 0 && startTime < 23.59 && startTime - static_cast<int>(startTime) < 0.59) {
        cout << "Enter duration of call in minutes: ";
        cin >> duration;

        if (startTime < 6.59) {
            charge = duration * 0.05;
        } else if (startTime > 7 && startTime < 19) {
            charge = duration * 0.45;
        } else if (startTime > 19.01) {
            charge = duration * 0.2;
        }
    } else {
        cout << "Invalid start time entered" << endl;
    }

    cout << "Call costs $" << fixed << setprecision(2) << charge << endl;
}
