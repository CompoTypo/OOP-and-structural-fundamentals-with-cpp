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

/*
 * 
 */
int main(int argc, char** argv) {

    int month, dayDate, year;
    
    cout << "Enter a month in numeric form: ";
    cin >> month;
    cout << "Enter a day of the month in numeric form: ";
    cin >> dayDate;
    cout << "Enter a year as two digits: ";
    cin >> year;

    if (year < 0 || year > 99) {
        cout << "ERR invalid year" << endl;
    } else if (dayDate < 0 || dayDate > 31) {
        cout << "ERR invalid day" << endl;
    } else if (month < 0 || month > 12) {
        cout << "ERR invalid month" << endl;
    } else {
        if ((month * dayDate) == year) {
            cout << "That date is magical" << endl;
        } else {
            cout << "Not a magic day" << endl;

        }
    }
}

