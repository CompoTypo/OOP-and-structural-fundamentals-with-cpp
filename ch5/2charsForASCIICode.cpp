#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    for (int i = 0; i < 128; i++) {
        if (i%16 == 0) {
            cout << endl;
        }
        cout << (char)i;
    }
}