/*
Box Office
A movie theater only keeps a percentage of the revenue earned from ticket sales. The
remainder goes to the movie distributor. Write a program that calculates a theater’s
gross and net box office profit for a night. The program should ask for the name of the
movie, and how many adult and child tickets were sold. (The price of an adult ticket is
$10.00 and a child’s ticket is $6.00.) It should display a report similar to
Movie Name:                 “Wheels of Fury”
Adult Tickets Sold:         382
Child Tickets Sold:         127
Gross Box Office Profit:    $ 4582.00
Net Box Office Profit:      $ 916.40
Amount Paid to Distributor: $ 3665.60
*/

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