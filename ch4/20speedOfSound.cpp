#include <cstdlib>
#include <iostream>


using namespace std;

int main(int argc, char** argv) {

    int menuOption;
    double seconds, distance;

    cout << "Enter distance sound needs to travel: ";
    cin >> distance;

    cout << "1) Air" << endl;
    cout << "2) Water" << endl;
    cout << "3) Steel" << endl;
    cout << "Enter menu option: ";
    cin >> menuOption;
    
    switch (menuOption) {
        case 1:
            seconds = distance / 1100;
            break;
        case 2:
            seconds = distance / 4900;
            break;
        case 3:
            seconds = distance / 16400;
            break;
        default:
            cout << "invalid menu option" << endl;
            return 0;
    }

    cout << "Sound will travel for " << seconds << " seconds" << endl;
}

