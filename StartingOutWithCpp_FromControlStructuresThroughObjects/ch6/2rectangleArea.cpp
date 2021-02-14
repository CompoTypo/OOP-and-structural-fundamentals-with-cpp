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

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <vector>


using namespace std;

// prototypes
double getLength();
double getWidth();
double getArea(double, double);
void displayData(double, double, double);

/*
 * 
 */
int main(int argc, char** argv) {
    double len = getLength();
    double wid = getWidth();
    double area = getArea(len, wid);
    displayData(len, wid, area);

}

double getLength() {
    double l;

    cout << "Enter length: ";
    cin >> l;


    return l;
}

double getWidth() {
    double w;

    cout << "Enter width: ";
    cin >> w;

    return w;
}

double getArea(double l, double w) {
    return l*w;
}

void displayData(double l, double w, double a) {
    cout << "length: " << setw(10) << l << endl;
    cout << "Width:  " << setw(10) << w << endl;
    cout << "area:   " << setw(10) << a << endl;

}

