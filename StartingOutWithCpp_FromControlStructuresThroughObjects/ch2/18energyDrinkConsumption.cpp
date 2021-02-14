/*
Energy Drink Consumption 
A soft drink company recently surveyed 16,500 of its customers  
    and found that approximately 15 percent of those  surveyed  
    purchase one or more energ  drink per week Of those customers who purchase energy drinks, 
    approximately 58  percent of them prefer citrus-flavored energy drinks. 
    
Write a program that displays the following: 
•   The  approximate  number  of  customers  in  the  survey  who  purchase  one  or  more  energy drinks 
        per week 
•   The approximate number of customers in the survey who prefer citrus-flavored energy drinks      
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int surveyers = 16500;
    double percentHeavyDrinkers = 0.15;
    double percentHeavyCitrusLovers = percentHeavyDrinkers * 0.58;

    double heavyDrinkers = surveyers * percentHeavyDrinkers;
    double heavyCitrusLovers = surveyers * percentHeavyCitrusLovers;

    cout << "Heavy drinkers: " << heavyDrinkers << endl;
    cout << "How many drink citrus: " << heavyCitrusLovers << endl;

}