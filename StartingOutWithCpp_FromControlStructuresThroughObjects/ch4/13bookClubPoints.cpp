#include <iostream>

using namespace std;

int main() {
    int numSold;
    int bookPoints = 0;

    cout << "How many books bought: ";
    cin >> numSold;

    while (numSold < 0) {
        cout << "invalid, enter positive num" << endl;
        cin >> numSold;
    }
    

    if (numSold == 0) {
        bookPoints += 0;
    } else if (numSold == 1) {
        bookPoints += 5;
    } else if (numSold == 2) {
        bookPoints += 15;
    } else if (numSold == 3) {
        bookPoints += 30;
    } else {
        bookPoints += 60;        
    }

    cout << "Points awarded: " << bookPoints << endl;
}