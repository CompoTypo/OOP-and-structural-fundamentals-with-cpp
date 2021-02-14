/*
Stock Transaction Program
Last month Joe purchased some stock in Acme Software, Inc. Here are the details of
the purchase:
• The number of shares that Joe purchased was 1,000.
• When Joe purchased the stock, he paid $45.50 per share.
• Joe paid his stockbroker a commission that amounted to 2% of the amount he paid
for the stock.
Two weeks later Joe sold the stock. Here are the details of the sale:
• The number of shares that Joe sold was 1,000.
• He sold the stock for $56.90 per share.
• He paid his stockbroker another commission that amounted to 2% of the amount
he received for the stock.
Write a program that displays the following information:
• The amount of money Joe paid for the stock.
• The amount of commission Joe paid his broker when he bought the stock.
• The amount that Joe sold the stock for.
• The amount of commission Joe paid his broker when he sold the stock.
• Display the amount of profit that Joe made after selling his stock and paying the two
commissions to his broker. (If the amount of profit that your program displays is a
negative number, then Joe lost money on the transaction.)
*/

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