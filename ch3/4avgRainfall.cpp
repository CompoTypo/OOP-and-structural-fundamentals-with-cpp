#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    string m1, m2, m3;
    double r1, r2, r3;

    cout << "Enter a month name: " << endl;
    cin >> m1;
    cout << "Enter amt of rainfall: " << endl;        
    cin >> r1;
    
    cout << "Enter a month name: " << endl;
    cin >> m2;
    cout << "Enter amt of rainfall: " << endl;        
    cin >> r2;
        
    cout << "Enter a month name: " << endl;
    cin >> m3;
    cout << "Enter amt of rainfall: " << endl;        
    cin >> r3;
    
    double avg = (r1 + r2 + r3) / 3;

    cout << "The avg rainfall for " << m1 << " " << m2 << " and " << m3 << " " << fixed << setprecision(2) << avg << endl;
}