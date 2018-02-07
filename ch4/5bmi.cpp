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

    double weight;
    double height;
    
    cout << "Enter weight: ";
    cin >> weight;
    cout << "Enter Height: ";
    cin >> height;    
    double bmi = weight * 703 / (height*height);
    
    if (bmi > 25) {
        cout << bmi << ": person is overweight" << endl;
    } else if (bmi < 18.5) {
        cout << bmi << ": person is underweight" << endl;
    } else {
        cout << bmi << ": person is optimal" << endl;
    }
}

