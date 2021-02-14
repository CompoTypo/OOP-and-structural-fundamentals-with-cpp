/*
*To get the average of a series of values, 
    **you add the values up 
    **and then divide the sum by the number of values. 
Write a program that 
    stores the following values in five different variables: 
	28, 32, 37, 24, and 33. 
    The program should first 
	calculate the sum of these five variables 
	and store the result in a separate variable named sum . 
    Then, 
	the program should divide the sum variable by 5 to get the average
	Display the average on the screen.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    double val1 = 28;
    double val2 = 32;
    double val3 = 37;
    double val4 = 24;
    double val5 = 33;

    double sum = val1 + val2 + val3 + val4 + val5;
    double avg = sum / 5;
    cout << "average: " << avg << endl;

}
