#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int surveyers = 16500;
    double percentHeavyDrinkers = 0.15;
    double percentHeavyCitrusLovers = percentHeavyDrinkers * 0.58;

    double heavyDrinkers = surveyers * percentHeavyDrinkers;
    double heavyCitrusLovers = surveyers * percentHeavyCitrusLovers;

    cout << "Heavy drinkers: " << heavyDrinkers << endl;
    cout << "How many drink citrus: " << heavyCitrusLovers << endl;

}