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
#include <string>
#include <cctype>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    string p1, p2;    

    cout << "Enter two primary colors seperated by a space: ";
    cin >> p1 >> p2;


   
    if ((p1 == "red" || p1 == "blue" || p1 == "yellow") && (p2 == "red" || p2 == "blue" || p2 == "yellow")) {
        if (p1 == "red" && p2 == "red") {
            cout << "red" << endl;
        } else if ((p1 == "red" && p2 == "blue") || (p2 == "red" && p1 == "blue")) {
            cout << "purple" << endl;
        } else if ((p1 == "red" && p2 == "yellow") || (p2 == "red" && p1 == "yellow")) {
            cout << "orange" << endl;
        } else if ((p1 == "blue" && p2 == "yellow") || (p2 == "blue" && p1 == "yellow")) {
            cout << "green" << endl;
        } else {
            cout << "invalid combo";
        }

    } else {
        cout << "not primary colors" << endl;
    }

    
}

