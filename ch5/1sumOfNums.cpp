#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a positive number: ";
    cin >> n;

    if (n < 0) {
        cout << "Enter a positive number next time" << endl;
    } else {
        for (int i = 0; i <= n; i++) {
            sum += i;
        }
    }

    cout << sum << endl;
}