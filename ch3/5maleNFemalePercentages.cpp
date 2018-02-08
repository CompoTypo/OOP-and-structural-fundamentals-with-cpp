#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    int m, f;

    cout << "Enter num of male students: ";
    cin >> m;
    cout << "Enter num of female students ";        
    cin >> f;
    
    double mAvg = (double)m /  ((double)m + (double)f);
    double fAvg = (double)f / ((double)m + (double)f);

    cout << "Percent male: " << fixed << setprecision(2) << mAvg * 100 << "%" << endl;
    cout << "Percent female: " << fixed << setprecision(2) << fAvg * 100 << "%" << endl;

}