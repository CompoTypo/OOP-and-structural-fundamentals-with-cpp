#include <cstdlib>
#include <iostream>


using namespace std;

int main(int argc, char** argv) {

    int menuOption;
    double seconds, distance;

    cout << "What gas is sound travelling through?" << endl;
    cout << "1) Carbon Dioxide" << endl;
    cout << "2) Air" << endl;
    cout << "3) Helium" << endl;
    cout << "4) Hydrogen" << endl;
    cout << "Enter menu option: ";
    cin >> menuOption;

    cout << "Enter number of seconds spent in travel: ";
    cin >> seconds;

    if (seconds < 0) {
        cout << "Invalid time entry, must be positive" << endl;
        return 0;
    } else if (seconds > 30) {
        cout << "Invalid time entry, must less than 30" << endl;
        return 0;        
    }
    
    switch (menuOption) {
        case 1:
            distance = seconds * 238;
            break;
        case 2:
            distance = seconds * 331.5;
            break;
        case 3:
            distance = seconds * 972;
            break;
        case 4:
            distance = seconds * 1270;
            break;
        default:
            cout << "invalid menu option" << endl;
            return 0;
    }

    cout << "Sound will travel for " << distance << " meters in " << seconds << " seconds" << endl;
}

