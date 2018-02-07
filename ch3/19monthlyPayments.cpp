#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {

    double loanAmt;
    int numOfPays;
    double intRate;



    cout << "enter a initial loan amount: ";
    cin >> loanAmt;
    cout << "enter a num of payments: ";
    cin >> numOfPays;
    cout << "enter an interest rate: ";
    cin >> intRate;

    double rateDec = intRate / 100;
    double parenths = rateDec + 1;
    
    double toCompound = parenths;
    for (int i = 0; i < numOfPays - 1; i++) {
        toCompound *= parenths;
    }
 
    cout << parenths << endl;

    cout << toCompound << endl;
    
    double div = (rateDec * toCompound) / (toCompound - 1);
    double intAmount = loanAmt * div;

    cout << "Loan Amount:      $" << loanAmt << endl;

    cout << "Interest Rate:    " << intRate << "%" << endl;
    cout << "Times compounded: " << numOfPays << endl;
    cout << "Monthly payment:  $" << intAmount << endl;
    
    


}