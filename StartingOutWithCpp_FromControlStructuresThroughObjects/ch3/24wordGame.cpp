/*
Word Game
Write a program that plays a word game with the user. The program should ask the
user to enter the following:
• His or her name
• His or her age
• The name of a city
• The name of a college
• A profession
• A type of animal
• A pet’s name
After the user has entered these items, the program should display the following story,
inserting the user’s input into the appropriate locations:
There once was a person named NAME who lived in CITY . At the age of
AGE , NAME went to college at COLLEGE . NAME graduated and went to work
as a PROFESSION . Then, NAME adopted a(n) ANIMAL named PETNAME . They
both lived happily ever after!
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string name, age, city, college, profession, petName;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your city: ";
    cin >> city;
    cout << "Enter your college: ";
    cin >> college;
    cout << "Enter your profession: ";
    cin >> profession;
    cout << "Enter your pet's name: ";
    cin >> petName;


    cout << "There once was a person named " << name << endl;
    cout << " who lived in " << city << ". At the age of" << endl;
    cout << age << " , " << name << " went to college at " << college << endl;
    // you get the rest 


}