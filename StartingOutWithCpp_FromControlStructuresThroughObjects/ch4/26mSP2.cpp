#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    char menuOption;
    double chargeA = 0;
    double chargeB = 0;
    double chargeC = 0; 
    double finalCharge = 0;

    double monthlyRateA = 39.99;
    int allotedMinutesA = 450;
    double excessMinuteRateA = 0.45;

    double monthlyRateB = 59.99;
    int allotedMinutesB = 900;
    double excessMinuteRateB = 0.4;
    
    double monthlyRateC = 69.99;
    chargeC = monthlyRateC;

    int minutes;

    cout << "Which package do you have (A, B, or C): ";
    cin >> menuOption;
    
    if (tolower(menuOption) == 'a') {
        cout << "Enter number of minutes used: ";
        cin >> minutes;
        chargeA = monthlyRateA + ((double)(minutes - allotedMinutesA) * excessMinuteRateA);
        chargeB = monthlyRateB + ((double)(minutes - allotedMinutesB) * excessMinuteRateB);

        finalCharge = chargeA;
        if (chargeA > chargeB) {
            cout << "Youd save $" << fixed << setprecision(2) << chargeA - chargeB << " by switching to package B" << endl;
        }
        if (chargeA > chargeC) {
            cout << "Youd save $" << fixed << setprecision(2) << chargeA - chargeC << " by switching to package C" << endl;            
        }
    } else if (tolower(menuOption) == 'b') {
        cout << "Enter number of minutes used: ";
        cin >> minutes;
        chargeA = monthlyRateA + ((double)(minutes - allotedMinutesA) * excessMinuteRateA);
        chargeB = monthlyRateB + ((double)(minutes - allotedMinutesB) * excessMinuteRateB);
        finalCharge = chargeB;
        if (chargeB > chargeC) {
            cout << "Youd save $" << fixed << setprecision(2) << chargeB - chargeC << " by switching to package C" << endl;            
        }
    } else if (tolower(menuOption) == 'c') {
        finalCharge = chargeC;
    } else {
        cout << "Invalid menu option" << endl;
    }

    cout << "Charge is $" << fixed << setprecision(2) << finalCharge << " for this month" << endl;

}
