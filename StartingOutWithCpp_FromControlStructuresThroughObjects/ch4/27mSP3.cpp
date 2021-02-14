#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>

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
    int maxMinutes;
    string month;

    cout << "Which package do you have (A, B, or C): ";
    cin >> menuOption;

    if (tolower(menuOption) != 'a' && tolower(menuOption) != 'b' && tolower(menuOption) != 'c') {
        cout << "Invalid menu option" << endl;
    }

    cout << "Enter number of minutes used: ";
    cin >> minutes;
    cout << "What month is it (enter full month name): ";
    cin >> month;
    
    for (int i = 0; month[i]; i++) {
        month[i] = tolower(month[i]);
    }

    if (month == "january") {
        maxMinutes = 24 * 60 * 31;
    } else if (month == "february") {
        maxMinutes = 24 * 60 * 28;
    } else if (month == "march") {
        maxMinutes = 24 * 60 * 31;
    } else if (month == "april") {
        maxMinutes = 24 * 60 * 30;
    } else if (month == "may") {
        maxMinutes = 24 * 60 * 31;
    } else if (month == "june") {
        maxMinutes = 24 * 60 * 30;
    } else if (month == "july") {
        maxMinutes = 24 * 60 * 31;
    } else if (month == "august") {
        maxMinutes = 24 * 60 * 31;
    } else if (month == "september") {
        maxMinutes = 24 * 60 * 30;
    } else if (month == "october") {
        maxMinutes = 24 * 60 * 31;
    } else if (month == "november") {
        maxMinutes = 24 * 60 * 30;
    } else if (month == "december") {
        maxMinutes = 24 * 60 * 31;
    }

    if (minutes > maxMinutes || minutes < 0) {
        cout << "Invalid amount of minutes" << endl;
    }
    
    if (tolower(menuOption) == 'a') {

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
    }

    cout << "Charge is $" << fixed << setprecision(2) << finalCharge << " for this month" << endl;
}
