#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    double pricePerShare = 45.5;
    double returnedPricePerShare = 56.9;
    double shares = 1000;
    double commisionRate = 0.02;


    double pricePaid = pricePerShare * shares;

    double pricePaidWithComish = pricePaid + (pricePaid * commisionRate);

    double soldFor = returnedPricePerShare * shares;

    double moneyMade = soldFor + (soldFor * commisionRate);

    cout << "Joe paid: $" << pricePaidWithComish << endl;
    cout << "Commision made: $" << pricePaid * commisionRate << endl;
    cout << "Sold for: $" << moneyMade << endl;
    cout << "Commision made: $" << soldFor * commisionRate << endl;


}