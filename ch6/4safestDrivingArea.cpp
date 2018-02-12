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
int getNumAccidents(string);
void findLowest(int, int, int, int, int);

/*
 * 
 */
int main(int argc, char** argv) {
    string nName = "North";
    string sName = "South";
    string eName = "East";
    string wName = "West";
    string cName = "Central";

    int n = getNumAccidents(nName);
    int s = getNumAccidents(sName);
    int e = getNumAccidents(eName);
    int w = getNumAccidents(wName);
    int c = getNumAccidents(cName);

    findLowest(n, s, e, w, c);

}

int getNumAccidents(string name) {
    double accidents;

    cout << "Enter num of accidents for " << name << " area: ";
    cin >> accidents;

    if (accidents < 0) {
        cout << "invalid input, no sales for you" << endl;
    }

    return accidents;
}

void findLowest(int n, int s, int e, int w, int c) {
    if (n < s && n < e && n < w && n < c) {
        cout << "North is safest" << endl;
    } else if (s < n && s < e && s < w && s < c) {
        cout << "South is safest" << endl;
    } else if (e < n && e < s && e < w && e < c) {
        cout << "East is safest" << endl;
    } else if (w < n && w < s && w < e && w < c) {
        cout << "West is safest" << endl;
    } else {
        cout << "Central is safest" << endl;

    }
}

