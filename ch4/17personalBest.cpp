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
#include <vector>


using namespace std;

int main(int argc, char** argv) {

    string name;
    int vaults = 3;
    double heights[vaults];
    double dates[vaults];


    cout << "Enter vaulter name: ";
    cin >> name;
    cout << "Enter three vault heights?: " << endl;
    cin >> heights[0] >> heights[1] >> heights[2];
    cout << "enter corresponding dates (mmddyyyy): " << endl;
    cin >> dates[0] >> dates[1] >> dates[2];

    for (int i = 0; i < vaults; i++ ) {
        if (heights[i] < 2.0 || heights[i] > 5.0) {
            cout << "ERR invalid vault height";
            return 0;
        }

    }

    if (heights[0] > heights[1] && heights[0] > heights[2]) {
        cout << name << ": " << heights[0] << " on " << dates[0] << endl;
        if (heights[1] > heights[2]) {
            cout << name << ": " << heights[1] << " on " << dates[1] << endl;
            cout << name << ": " << heights[2] << " on " << dates[2] << endl;
        } else {
            cout << name << ": " << heights[2] << " on " << dates[2] << endl;
            cout << name << ": " << heights[1] << " on " << dates[1] << endl;
        }
    } else if (heights[1] > heights[0] && heights[1] > heights[2]) {
        cout << name << ": " << heights[1] << " on " << dates[1] << endl;
        if (heights[0] > heights[2]) {
            cout << name << ": " << heights[0] << " on " << dates[0] << endl;
            cout << name << ": " << heights[2] << " on " << dates[2] << endl;
        } else {
            cout << name << ": " << heights[2] << " on " << dates[2] << endl;
            cout << name << ": " << heights[0] << " on " << dates[0] << endl;
        }
    } else if (heights[2] > heights[0] && heights[2] > heights[1]) {
        cout << name << ": " << heights[2] << " on " << dates[2] << endl;
        if (heights[0] > heights[1]) {
            cout << name << ": " << heights[0] << " on " << dates[0] << endl;
            cout << name << ": " << heights[1] << " on " << dates[1] << endl;
        } else {
            cout << name << ": " << heights[1] << " on " << dates[1] << endl;
            cout << name << ": " << heights[0] << " on " << dates[0] << endl;
        }
    }

    
}

