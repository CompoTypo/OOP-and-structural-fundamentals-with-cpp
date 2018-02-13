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

    // linear search
    for(int i = 0; i < SIZE; i++) {
        if (input == array[i]) {
            found = true;
        }

    }
    
    if (found) {
        cout << "Winner" << endl;
    } else {
        cout << "Loser" << endl;
    }

}