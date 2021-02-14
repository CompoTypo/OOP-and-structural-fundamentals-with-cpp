/*
How Many Widgets?
The Yukon Widget Company manufactures widgets that weigh 12.5 pounds each.
Write a program that calculates how many widgets are stacked on a pallet, based on
the total weight of the pallet. The program should ask the user how much the pallet
weighs by itself and with the widgets stacked on it. It should then calculate and display
the number of widgets stacked on the pallet.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    double weight, palletWeight;
    double widgetWeight = 12.5;



    string mName;

    cout << "How much does the pallet weigh?: ";
    cin >> weight;
    cout << "How much does the pallet weigh, alone?: ";
    cin >> palletWeight;

    double totalWidgets = (weight - palletWeight) / widgetWeight;

    cout << "Total widgets: " << setw(20) << totalWidgets << endl;
   
}