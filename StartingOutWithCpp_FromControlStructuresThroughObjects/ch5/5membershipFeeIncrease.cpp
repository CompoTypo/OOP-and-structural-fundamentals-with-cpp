/*
Membership Fees Increase 
A country club, which currently charges $2,500 per year for membership, 
has announced it will increase its membership fee by 4% each year for the next six years. 
Write a program that uses a loop to display the projected rates for the next six years. 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
  int costPerYear = 2500;
  double costIncreasePercent = 0.04;

  for (int i = 0; i <= 6; i++) {
    
    cout << costPerYear << endl;
    costPerYear = costPerYear + (costPerYear * costIncreasePercent);
  }

}