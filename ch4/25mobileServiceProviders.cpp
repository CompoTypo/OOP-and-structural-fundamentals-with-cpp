#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    char menuOption;
    double monthlyRate, allotedMinutes, excessMinuteRate, charge;
    int minutes;

    cout << "Which package do you have (A, B, or C): ";
    cin >> menuOption;
    
    switch (tolower(menuOption)) {
        case 'a':
            monthlyRate = 39.99;
            allotedMinutes = 450;
            excessMinuteRate = 0.45;
            break;
        case 'b':
            monthlyRate = 59.99;
            allotedMinutes = 900;
            excessMinuteRate = 0.40;
            break;
        case 'c':
            monthlyRate = 69.99;
            allotedMinutes = 0;
            excessMinuteRate = 0;
            break;
        default:
            cout << "invalid menu option" << endl;
            return 0;
    }

    cout << "Enter number of minutes used: ";
    cin >> minutes;

    charge = monthlyRate + ((minutes - allotedMinutes) * excessMinuteRate);
    cout << "Charge is $" << fixed << setprecision(2) << charge << " for this month" << endl;

}
