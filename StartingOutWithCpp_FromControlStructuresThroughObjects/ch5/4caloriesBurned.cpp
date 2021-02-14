/*
Calories Burned 
Running on a particular treadmill you burn 3.6 calories per minute. 
Write a program that uses a loop to display the number of calories burned after 5, 10, 15, 20, 25, and 30 minutes. 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    double calPerMin = 3.6;
    double calBurned;

    for (int i = 5; i <= 30; i += 5) {
        calBurned = calPerMin * (double)i;
        cout << calBurned << endl;
    }
}