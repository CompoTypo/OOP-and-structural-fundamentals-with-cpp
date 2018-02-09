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