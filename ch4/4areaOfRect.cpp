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

    int l1, w1;
    int l2, w2;
    
    cout << "Enter first length and width seperated by a space: ";
    cin >> l1 >> w1;
    cout << "Enter first length and width seperated by a space: ";
    cin >> l2 >> w2;
    

    if ((l1 * w1) > (l2 * w2)) {
        cout << "Rect 1 is greater than rect 2" << endl;
    } else if ((l1 * w1) < (l2 * w2)) {
        cout << "Rect 1 is less than Rect 2" << endl;
    } else {
        cout << "Rect 1 is equal to Rect 2" << endl;

    }
}

