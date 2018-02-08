#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    int acreArea = 43560;
    int yourArea = 391876;

    double yourAcres = (double)yourArea / acreArea;

    cout << "You have: " << yourAcres << " acres of land" << endl;
}