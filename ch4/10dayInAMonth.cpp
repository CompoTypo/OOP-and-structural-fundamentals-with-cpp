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

    int month, year;

    int days;

    bool leap = false;
    
    cout << "Enter a month in numeric form: ";
    cin >> month;
    cout << "Enter a year as two digits: ";
    cin >> year;

    if (year < 0) {
        cout << "ERR invalid year" << endl;
    } else if (month < 0 || month > 12) {
        cout << "ERR invalid month" << endl;
    } else {
        if (year%100 == 0 && year%400 == 0) {
            leap = true;
        } else if (year%100 != 0 && year%4 == 0) {
            leap = true;
        } else {
            leap = false;
        }
    }

        switch (month) {
        case 1:  
            days = 31;
            break;  
        case 2:  
            days = 28;
            if (leap) {
                days++;
            }
            break; 
        case 3:  
            days = 31;
            break;  
        case 4:  
            days = 30;
            break;  
        case 5:  
            days = 31;
            break;  
        case 6:  
            days = 30;
            break; 
        case 7:  
            days = 31;
            break;  
        case 8:  
            days = 31;
            break;  
        case 9:  
            days = 30;
            break;  
        case 10:  
            days = 31;
            break; 
        default:
            break;  
    }

    cout << days << " days" << endl;
}

