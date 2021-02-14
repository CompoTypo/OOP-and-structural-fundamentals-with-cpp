#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <cctype>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int pen, dime, nick, quart;

    double valPen = 0.01;
    double valDime = 0.1;
    double valNick = 0.05;
    double valQuart = 0.25;

    cout << "Enter num of pennies: ";
    cin >> pen;
    cout << "Enter num of dimes: ";
    cin >> dime;
    cout << "Enter num of nickels: ";
    cin >> nick;
    cout << "Enter num of quarters: ";
    cin >> quart;

    double sum = ((double)pen * valPen) + ((double)dime * valDime) + ((double)nick * valNick) + ((double)quart * valQuart);

    if (sum == 1) {
        cout << "Congrats you win" << endl;
    } else {
        cout << "Not a dollar" << endl;
    }

    cout << "$" << sum << endl;
    
}

