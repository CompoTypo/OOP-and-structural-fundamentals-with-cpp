/*
Distance per Tank of Gas 
A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town and 28.9 miles per gallon when driven on the highway. 
Write a program that calculates and displays the distance the car can travel on one tank of gas when driven in town and when driven on the highway. 

Hint: The following formula can be used to calculate the distance:  Distance = Number of Gallons * Average Miles per Gallon 
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

  int gallons = 20;
  double mpgTown = 23.5;
  double mpgHighway = 28.9;

  double distanceT = (double)gallons * mpgTown;
  double distanceH = (double)gallons * mpgHighway;

  cout << "Total distance (Town): " << distanceT << endl;
  cout << "Total distance (Highway): " << distanceH << endl;

}