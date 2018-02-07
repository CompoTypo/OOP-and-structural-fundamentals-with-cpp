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