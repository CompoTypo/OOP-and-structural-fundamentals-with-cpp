#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    int menuOption;
    double rad, len, wid, base, height, area;
    double pi = 3.14;

    cout << "1) Calculate the area of a circle" << endl;
    cout << "2) Calculate the area of a rectangle" << endl;
    cout << "3) Calculate the area of a triangle" << endl;
    cout << "4) quit" << endl;
    cout << "Enter menu option (1-4): ";
    cin >> menuOption;

    
    switch (menuOption) {
        case 1:
            cout << "Enter a radius: ";
            cin >> rad;
            if (rad < 0) {
                cout << "No negative input" << endl;
                break;
            }
            area = pi * (rad * rad);
            break;
        case 2:
            cout << "Enter a length: ";
            cin >> len;
            cout << "Enter a width: ";
            cin >> wid;
            if (len < 0 || wid < 0) {
                cout << "No negative input" << endl;
                break;
            }
            area = len * wid;
            break;
        case 3:
            cout << "Enter a base: ";
            cin >> base;
            cout << "Enter a height: ";
            cin >> height;
            if (base < 0 || height < 0) {
                cout << "No negative input" << endl;
                break;
            }
            area = base * height * 0.5;
            break;
        case 4:
            break;
        default:
            cout << "invalid menu option" << endl;
            return 0;
    }

    cout << "Area equals " << area << endl;
}
