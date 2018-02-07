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
    double parenths = rateDec / compounds;
    double addOne = 1 + parenths;
    
    double toCompound = addOne;
    for (int i = 0; i < compounds - 1; i++) {
        toCompound *= addOne;
    }
 
    cout << parenths << endl;
    cout << addOne << endl;

    cout << toCompound << endl;

    double intAmount = princ * toCompound;

    cout << "Interest Rate:     " << intRate << "%" << endl;
    cout << "Times compounded:  " << compounds << endl;
    cout << "Principal:         $" << princ << endl;
    cout << "Interest:          $" << intAmount - princ << endl;
    cout << "Amount in savings: $" << intAmount << endl;
    
    


}