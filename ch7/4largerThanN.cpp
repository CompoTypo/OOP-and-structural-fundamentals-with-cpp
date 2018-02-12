#include <iostream>

using namespace std;

void largerThan(int[], int, int);

int main() {
    int _SIZE = 6;
    int input;

    int arr[] = {
        12,
        32,
        93,
        79,
        13,
        16
    };

    cout << "Enter a num for n: ";
    cin >> input;

    largerThan(arr, _SIZE, input);
}

void largerThan(int arr[], int size, int n) {
    for (int i = 0; i < size; i++) {
        if (arr[i] > n) {
            cout << arr[i] << endl;
        }
    }
}