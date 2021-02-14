/*
Land  Calculation  
One acre of land is equivalent to 43,560 square feet. 
Write a program that calculates the number of acres in a tract of land with 391,876 square feet. 
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    int acreArea = 43560;
    int yourArea = 391876;

    double yourAcres = (double)yourArea / acreArea;

    cout << "You have: " << yourAcres << " acres of land" << endl;
}