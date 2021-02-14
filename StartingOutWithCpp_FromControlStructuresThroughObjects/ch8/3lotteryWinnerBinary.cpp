#include <iostream>
#include <string>
using namespace std;

int main() {
    int SIZE = 10;
    int input;

    bool found = false;

    int array[] = { 
        13579, 26791, 26792, 33445, 55555,
        62483, 77777, 79422, 85647, 93121
    };
    
    cout << "Enter a number: ";
    cin >> input;

    // binary search
    int l = 0;
    int r = SIZE - 1;

    while (l <= r) {
        int m = (l + r) / 2;
        if (array[m] == input) {
            found = true;
            break;
        } else if (array[m] > input) {
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    // end binary search
    
    if (found) {
        cout << "Winner" << endl;
    } else {
        cout << "Loser" << endl;
    }

}