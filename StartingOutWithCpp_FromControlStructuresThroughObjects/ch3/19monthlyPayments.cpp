/*
Monthly Payments
The monthly payment on a loan may be calculated by the following formula:

Payment = Rate * (1 + Rate)^N / ((1 + Rate)^N - 1) * L

Rate is the monthly interest rate, which is the annual interest rate divided by 12. (12%
annual interest would be 1 percent monthly interest.) N is the number of payments, and
L is the amount of the loan. Write a program that asks for these values and displays a
report similar to
Loan Amount:            $ 10000.00
Monthly Interest Rate:  1%
Number of Payments:     36
Monthly Payment:        $ 332.14
Amount Paid Back:       $ 11957.15
Interest Paid:          $ 1957.15
*/

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