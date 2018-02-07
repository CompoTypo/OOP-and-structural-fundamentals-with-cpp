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

    double mass;
    
    cout << "Enter mass: ";
    cin >> mass;
   
    double weight = mass * 9.8;

    
    if (weight > 1000) {
        cout << weight << ": to heavy" << endl;
    } else if (weight < 10) {
        cout << weight << ": to light" << endl;
    } else {
        cout << weight << ": optimal" << endl;
    }
}

