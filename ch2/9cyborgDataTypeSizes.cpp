#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    int i = 1;
    double d = 24.95;
    float f = 6.9;
    char c = 'c';

    int si = sizeof(i);
    int sd = sizeof(d);
    int sf = sizeof(f);
    int sc = sizeof(c);

    cout << "bytes used (int): " << si << endl;
    cout << "bytes used (doub): " << sd << endl;
    cout << "bytes used (float): " << sf << endl;
    cout << "bytes used (char): " << sc << endl;
}