#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {

    int people;
    int diameter;

    cout << "How many people you having over: ";
    cin >> people;
    int neededSlices = people * 4;
    cout << "enter a pie diameter in inches: ";
    cin >> diameter;

    double area = 3.14159 * (diameter / 2) * (diameter / 2);
    double numSlices = area / 14.125;
    int pizzas = neededSlices / numSlices;

    cout << "Pizzas needed: " << pizzas << endl;

    
    
}