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