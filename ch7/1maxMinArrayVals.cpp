#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int getMax(int[]);
int getMin(int[]);

int SIZE = 10;

int main() {
    int input;

    int array[SIZE];
    
    for(int i = 0; i < SIZE; i++) {
        cout << "Enter num " << i+1 << ": ";
        cin >> input;
        array[i] = input;
    }

    int max = getMax(array);
    int min = getMin(array);
    cout << max << " " << min << endl;
}

int getMax(int arr[]) {
    int max = 0;

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int getMin(int arr[]) {
    int min = 127;

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}