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
double fallingDistance(double);

/*
 * 
 */
int main(int argc, char** argv) {
    double sec;

    for (int i = 0; i < 10; i++) {
        double d = fallingDistance(i + 1);
        cout << i + 1 << " seconds of falling; " << d << " distance fallen" << endl;
    }

}

double fallingDistance(double s) {
    double gravity = 9.8;

    double distance = 0.5 * gravity * (s * s);

    return distance;
}

