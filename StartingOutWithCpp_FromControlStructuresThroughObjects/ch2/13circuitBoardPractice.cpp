/*
 Circuit Board Price 
 An electronics company sells circuit boards at a 35 percent profit. 
 Write a program that will calculate the selling price of a circuit board that costs $14.95. 
 
 Display the result on the screen. 
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    double cbPrice = 14.95;
    double markup = 0.35;

    double msrp = cbPrice + (cbPrice*markup);

    cout << "Sales price: " << msrp << endl;

}