/*
Personal  Information  
Write a program that displays the following pieces of information, each on a separate line: 
    Your name 
    Your address, with city, state, and ZIP code 
    Your telephone number 
    Your college major 
    
Use only a single  cout statement to display all of this information.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    string name = "smitty werben";
    string addr = "2911 dna blvd";
    string num = "(214) 567 - 3293";
    string major = "Comp Sci";

    cout << name << "\n" << addr << "\n" << num << "\n" << major << endl;

}