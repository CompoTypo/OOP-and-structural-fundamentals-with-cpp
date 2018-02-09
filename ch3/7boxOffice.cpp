#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    int adultsSold, kidsSold;
    double adultPrice = 10;
    double kidsPrice = 6;

    double percentKept = 0.2;


    string mName;

    cout << "Enter name of the movie: ";
    cin >> mName;
    cout << "How many adult tickets sold: ";
    cin >> adultsSold; 
    cout << "How many kids tickets sold: ";
    cin >> kidsSold;

    cout << "Movie name:            " << setw(20) << mName << endl;
    cout << "Adult tickets sold:    " << setw(20) << adultsSold << endl;
    cout << "Kids tickets sold:     " << setw(20) << kidsSold << endl;
    cout << "Gross Box Profit:      " << setw(20) << (adultPrice*adultsSold) + (kidsPrice*kidsSold) << endl;
    cout << "Net box office profit: " << setw(20) << (adultPrice*adultsSold) + (kidsPrice*kidsSold) * percentKept << endl;
    cout << "Paid to dist:          " << setw(20) << (adultPrice*adultsSold) + (kidsPrice*kidsSold) - ((adultPrice*adultsSold) + (kidsPrice*kidsSold) * percentKept) << endl;






}