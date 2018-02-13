#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int SIZE = 18;
    int input;

    bool found = false;

    int array[] = { 
        5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 
        8080152, 4562555, 5552012, 5050552, 7825887, 1250255, 
        1005231, 6545231, 3852085, 7576651, 7881200, 4581002, 
    };
    
    cout << "Enter a number: ";
    cin >> input;

    // selection sort
    int i, j, minIndex, tmp;    

    for (i = 0; i < SIZE - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < SIZE; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
              tmp = array[i];
              array[i] = array[minIndex];
              array[minIndex] = tmp;
        }
    }

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
        cout << "number is valid" << endl;
    } else {
        cout << "invalid number" << endl;
    }

}