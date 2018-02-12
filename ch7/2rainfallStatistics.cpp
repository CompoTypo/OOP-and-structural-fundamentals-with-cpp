#include <iostream>

using namespace std;

int _SIZE = 12;

int main() {
    double arr[_SIZE];

    for (int i = 0; i < _SIZE; i++) {
        cout << "Enter amount of rainfall for month " << i+1 << " of the year: ";
        cin >> arr[i];
        if (arr[i] < 0) {
            cout << "no negative nums, replacing with 0" << endl;
            arr[i] = 0;
        }
    }

    double total = 0;

    for (int i = 0; i < _SIZE; i++) {
        total += arr[i];
    }

    cout << total << endl;
}
