/*
Ingredient Adjuster
A cookie recipe calls for the following ingredients:
• 1.5 cups of sugar
• 1 cup of butter
• 2.75 cups of flour
The recipe produces 48 cookies with this amount of the ingredients. Write a program
that asks the user how many cookies he or she wants to make, and then displays the
number of cups of each ingredient needed for the specified number of cookies.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    double sugar = 1.5;
    double butter = 1;
    double flour = 2.75;
    double batch = 48;

    int m;

    cout << "Enter num of cookies to make: ";
    cin >> m;
    
    double ratio = m / batch;

    cout << "Sugar needed: " << sugar * ratio << endl;
    cout << "Butter needed: " << butter * ratio << endl;
    cout << "Flour needed: " << flour * ratio << endl;

}