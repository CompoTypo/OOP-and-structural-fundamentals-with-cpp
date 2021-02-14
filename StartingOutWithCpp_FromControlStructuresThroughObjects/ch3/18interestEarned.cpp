/*
Interest Earned
Assuming there are no deposits other than the original investment, the balance in a
savings account after one year may be calculated as

Amount = Principal * (1 + Rate / T)^T

Principal is the balance in the savings account, Rate is the interest rate, and T is
the number of times the interest is compounded during a year ( T is 4 if the interest is
compounded quarterly).
Write a program that asks for the principal, the interest rate, and the number of times
the interest is compounded. It should display a report similar to
Interest Rate:      4.25%
Times Compounded:   12
Principal:          $ 1000.00
Interest:           $ 43.34
Amount in Savings:  $ 1043.34
*/

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