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

    int v1;
    
    cout << "Enter a number between 0 and 10: ";
    cin >> v1;
    
    if (v1 > 10 || v1 < 1) {
        cout << v1 << " is invalid " << endl;
    } else {
        switch ( v1 ) {  
            case 1:  
                cout << "I" << endl;  
                break;  
            case 2:  
                cout << "II" << endl;  
                break; 
            case 3:  
                cout << "III" << endl;  
                break;  
            case 4:  
                cout << "IV" << endl;  
                break;  
            case 5:  
                cout << "V" << endl;  
                break;  
            case 6:  
                cout << "VI" << endl;  
                break; 
            case 7:  
                cout << "VI" << endl;  
                break;  
            case 8:  
                cout << "VII" << endl;  
                break;  
            case 9:  
                cout << "IX" << endl;  
                break;  
            case 10:  
                cout << "X" << endl;  
                break; 
            default:
                break;  
        }  
    }
}

