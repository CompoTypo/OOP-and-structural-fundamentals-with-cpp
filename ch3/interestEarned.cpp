#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {

    double princ;
    int compounds;
    double intRate;



    cout << "enter a intitial savings: ";
    cin >> princ;
    cout << "enter a num of compounds: ";
    cin >> compounds;
    cout << "enter an interest rate: ";
    cin >> intRate;

    double rateDec = intRate / 100;
    double parenths = (1 + (rateDec / compounds));
    double intAmount = pow(compounds, parenths);

    cout << "Interest Rate:      " << intRate << "%" << endl;
    cout << "Times compounded:   " << compounds << endl;
    cout << "Principal:         $" << princ << endl;
    cout << "Interest:          $" << princ - intAmount << endl;
    cout << "Amount in savings: $" << intAmount << endl;
    
    


}