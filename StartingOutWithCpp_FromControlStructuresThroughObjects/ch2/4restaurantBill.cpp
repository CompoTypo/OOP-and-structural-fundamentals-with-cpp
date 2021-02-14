/*
Write a program that 
    computes the tax and tip on a restaurant bill for a patron with a $88.67 meal charge. 
*The tax should be 6.75 percent of the meal cost. 
*The tip should be 20 percent of the total after adding the tax. 
*Display the meal cost, tax amount, tip amount, and total bill on the screen.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    float mealCharge = 88.67;
    float salesTax = 6.75;
    float tip = 20;

    float finalBill = mealCharge + (mealCharge * (salesTax / 100)) + (mealCharge * (tip / 100));
    
    cout << "mealCharge: " << mealCharge << endl;        
    cout << "salesTax: " << salesTax << endl;
    cout << "tip: " << tip << endl;

    cout << "total: " << finalBill << endl;
}
