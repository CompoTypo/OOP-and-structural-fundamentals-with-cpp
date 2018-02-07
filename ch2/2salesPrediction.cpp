#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    float salesPercentage = 58;
    float sales = 8.6 * 1000000;

    float prediction = (salesPercentage / 100) * sales;
    cout << prediction << endl;
}