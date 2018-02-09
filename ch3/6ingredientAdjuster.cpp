#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    double sugar = 1.5;
    double butter = 1;
    double flour = 2.75;
    double batch = 48;

    int m;

    cout << "Enter num of cookies to make: ";
    cin >> m;
    
    double ratio = m / batch;

    cout << "Sugar needed: " << sugar * ratio << endl;
    cout << "Butter needed: " << butter * ratio << endl;
    cout << "Flour needed: " << flour * ratio << endl;

}