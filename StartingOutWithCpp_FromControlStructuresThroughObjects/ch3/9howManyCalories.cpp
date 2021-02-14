/*
How Many Calories?
A bag of cookies holds 30 cookies. The calorie information on the bag claims that there
are 10 “servings” in the bag and that a serving equals 300 calories. Write a program
that asks the user to input how many cookies he or she actually ate and then reports
how many total calories were consumed.
*/

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