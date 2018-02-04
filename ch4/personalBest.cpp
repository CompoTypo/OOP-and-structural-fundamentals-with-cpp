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



vector<vaulter> vaulters[] = {};

/*
vaulter enterVaulter(vaulter vaulters[]) {
    vaulter newVaulter;
    newVaulter.vaultsNum = 0;
    int vaults;
    double height;
    double date;
    
    
    cout << "Enter vaulter name: ";
    cin >> newVaulter.name;
    cout << "how many vaults has completed?: ";
    cin >> vaults;
    newVaulter.vaultsNum = vaults;
    for (int i = 0; i < newVaulter.vaultsNum; i++) {
        cout << "how high?: ";
        cin >> height;
        if (height < 2.0 || height > 5.0 ) {
            i--;
            cout << "ERR invalid height in meters\n";
            cout << "Try again.\n";
            continue;
        } else {
            newVaulter.vaultsHeight[i] = height;
        }
        cout << "When? (MMDDYYYY): ";
        cin >>  date;
        if (sizeof(date) != 8 ) {
            i--;
            cout << "ERR invalid invalid date\n";
            cout << "Try again.";
        } else {
            newVaulter.date[i] = date;
        }
    }
    vaulters -> newVaulter;
}
*/

/*
 * 
 */
int main(int argc, char** argv) {

    string name;
    int vaults = 3;
    double heights[vaults];
    double dates[vaults];

    
    
    cout << "Enter vaulter name: ";
    cin >> name;
    cout << "how many vaults has completed?: ";
    cin >> heights[0] >> heights[1] >> heights[2];
    cout << "enter corresponding dates (mmddyyyy): ";
    cin >> dates[0] >> dates[1] >> dates[2];

    for (int i = 0; i < vaults; i++ ) {
        if (heights[i] < 2.0 || heights[i] > 5.0) {
            cout << "ERR invalid vault height";
            return 0;
        }

        if (sizeof(dates[i]) != 8) {
            cout << "ERR invalid vault date";
            return 0;

        }
    }

    
}

