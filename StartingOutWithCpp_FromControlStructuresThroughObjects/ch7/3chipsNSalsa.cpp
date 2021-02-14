#include <iostream>
#include <string>

using namespace std;

int main() {

    // array to hold salsa names
    string salsaTypes[] = {
        "mild", 
        "medium", 
        "sweet", 
        "hot", 
        "zesty"
    };

    // array to hold jars sold of each corresponding type
    int jarsSold[] = {
        0,
        0,
        0,
        0,
        0
    };

    // total sales
    int totalSales = 0;

    int max = 0;
    string maxString = "";

    int min = 127;
    string minString = "";

    // get how many of each jar type sold
    for (int i = 0; i < 5; i++) {
        cout << "How many " << salsaTypes[i] << " sold? ";
        cin >> jarsSold[i];
        totalSales += jarsSold[i];

        if (jarsSold[i] < min) {
            min = jarsSold[i];
            minString = salsaTypes[i];
        }

        if (jarsSold[i] > max) {
            max = jarsSold[i];
            maxString = salsaTypes[i];
        }
    }

    // display data
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << "We sold " << jarsSold[i] << " " << salsaTypes[i] << endl;
        
    }
    cout << endl << "We sold " << totalSales << " total" << endl << endl;
    cout << "Max sold was " << maxString << " with " << max << " sales" << endl;
    cout << "Min sold was " << minString << " with " << min << " sales" << endl;

}