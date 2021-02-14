/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   personalBest.cpp
 * Author: granada
 *
 * Created on February 1, 2018, 9:51 AM
 */

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

// prototypes
double getSales(string);
void findHighest(double, double, double, double);

/*
 * 
 */
int main(int argc, char** argv) {
    string swName = "South West";
    string nwName = "North West";
    string seName = "South East";
    string neName = "North East";


    double sW = getSales(swName);
    double nW = getSales(nwName);
    double sE = getSales(seName);
    double nE = getSales(neName);
    findHighest(sW, nW, sE, nE);

}

double getSales(string name) {
    double sales;

    cout << "Enter sales for " << name << ": ";
    cin >> sales;

    if (sales < 0) {
        cout << "invalid input, no sales for you" << endl;
    }

    return sales;
}

void findHighest(double sw, double nw, double se, double ne) {
    if (sw > nw && sw > se && sw > ne) {
        cout << "SW is banking" << endl;
    } else if (nw > sw && nw > se && nw > ne) {
        cout << "NW is banking" << endl;
    } else if (se > nw && se > sw && se > ne) {
        cout << "SE is banking" << endl;
    } else {
        cout << "NE is banking" << endl;
    }
}

