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

    int sec;
    
    cout << "Enter any number of seconds: ";
    cin >> sec;
   
    int days = sec / 86400;
    sec = sec % 86400;
    int hours = sec / 3600;
    sec = sec % 3600;
    int minutes = sec / 60;
    sec = sec % 60;

    
    cout << "Days: " << days << " Hours: " << hours << " Minutes: " << minutes << " Seconds: " << sec << endl;
}

