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

    // linear search
    for(int i = 0; i < SIZE; i++) {
        if (input == array[i]) {
            found = true;
        }

    }
    
    if (found) {
        cout << "number is valid" << endl;
    } else {
        cout << "invalid number" << endl;
    }

}