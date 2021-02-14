/*
   Sum of Numbers 
   Write a program that asks the user for a positive integer value. 
   The program should use a loop to get the sum of all the integers from 1 up to the number entered. 
   For example, if the user enters 50, the loop will find the sum of 1, 2, 3, 4, ... 50. 
   Input Validation: Do not accept a negative starting number.
*/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a positive number: ";
    cin >> n;

    if (n < 0) {
        cout << "Enter a positive number next time" << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
    }

    cout << sum << endl;
}