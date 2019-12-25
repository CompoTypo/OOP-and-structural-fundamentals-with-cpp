/*
The East Coast sales division of a company generates 
    58 percent of total sales. 
Based on that percentage, 
    write a program that will predict how much the East Coast division
	will generate if the company has $8.6 million in sales this year.
*/


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    float salesPercentage = 58;
    float sales = 8.6 * 1000000;

    float prediction = (salesPercentage / 100) * sales;
    cout << prediction << endl;
}
