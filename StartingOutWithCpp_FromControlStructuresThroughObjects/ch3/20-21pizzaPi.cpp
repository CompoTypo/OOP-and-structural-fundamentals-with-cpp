/*
Pizza Pi
Joe’s Pizza Palace needs a program to calculate the number of slices a pizza of any size
can be divided into. The program should perform the following steps:
A) Ask the user for the diameter of the pizza in inches.
B) Calculate the number of slices that may be taken from a pizza of that size.
C) Display a message telling the number of slices.
To calculate the number of slices that may be taken from the pizza, you must know
the following facts:
• Each slice should have an area of 14.125 inches.
• To calculate the number of slices, simply divide the area of the pizza by 14.125.
• The area of the pizza is calculated with this formula:
Area = πr^2
Make sure the output of the program displays the number of slices in fixed point nota-
tion, rounded to one decimal place of precision. Use a named constant for pi.

How Many Pizzas?
Modify the program you wrote in Programming Challenge 18 (Pizza Pi) so that it
reports the number of pizzas you need to buy for a party if each person attending
is expected to eat an average of four slices. The program should ask the user for the
number of people who will be at the party and for the diameter of the pizzas to be
ordered. It should then calculate and display the number of pizzas to purchase.
*/

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {

    int people;
    int diameter;

    cout << "How many people you having over: ";
    cin >> people;
    int neededSlices = people * 4;
    cout << "enter a pie diameter in inches: ";
    cin >> diameter;

    double area = 3.14159 * (diameter / 2) * (diameter / 2);
    double numSlices = area / 14.125;
    int pizzas = neededSlices / numSlices;

    cout << "Pizzas needed: " << pizzas << endl;

    
    
}