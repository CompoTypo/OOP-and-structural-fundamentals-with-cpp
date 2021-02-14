/*
Male and Female Percentages
Write a program that asks the user for the number of males and the number of females
registered in a class. The program should display the percentage of males and females
in the class.
Hint: Suppose there are 8 males and 12 females in a class. There are 20 students in the
class. The percentage of males can be calculated as 8 ÷ 20 = 0.4, or 40%. The percent-
age of females can be calculated as 12 ÷ 20 = 0.6, or 60%.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    int m, f;

    cout << "Enter num of male students: ";
    cin >> m;
    cout << "Enter num of female students ";        
    cin >> f;
    
    double mAvg = (double)m /  ((double)m + (double)f);
    double fAvg = (double)f / ((double)m + (double)f);

    cout << "Percent male: " << fixed << setprecision(2) << mAvg * 100 << "%" << endl;
    cout << "Percent female: " << fixed << setprecision(2) << fAvg * 100 << "%" << endl;

}