#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int stringLength(string * word) {
    int counter = 0;
    int length = *word.length()

    for (int i = 0; i < length; i++) {
        counter++;
    }

}

int main() {
    string word = "tackle";
    int count = stringLength(word);

    cout << "Digit count: " << count << endl;

    
}