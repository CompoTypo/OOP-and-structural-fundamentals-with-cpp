#include <iostream>
#include <fstream>
#include <string>
using namespace std;

arra

int main() {
    string word = "tackle";
    string backword = "";

    for (int i = 0; i < word.length() + 1; i++) {
        backword += word[word.length() - i];
    }
    cout << "Digit count: " << backword << endl;
}