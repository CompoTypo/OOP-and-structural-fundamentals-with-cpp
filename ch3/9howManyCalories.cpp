 #include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    int cookiesAte;
    int cookiesPerBag = 30;
    int calsPerServ = 300;

    int numServPerBag = 10;

    double calPerCookie = calsPerServ / (cookiesPerBag / numServPerBag);

    cout << "Enter num of cookies eaten: ";
    cin >> cookiesAte;

    double cals = cookiesAte * calPerCookie;

    cout << "Cals consumed:         " << setw(20) << cals << endl;

}