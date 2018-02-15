// basic file operations
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string pigify(string word) {
    for(int i = 0; i < word.length(); i++) {
        if (word[i] == "\n") {
            break;
        } else if (word[i] == "a") {
            
        } else if (word[i] == "e") {
            
        } else if (word[i] == "i") {
            
        } else if (word[i] == "o") {
            
        } else if (word[i] == "u") {
            
        } else {
            continue;
        }



    }
}

int main () {
    fstream myfile;
    char c;
    string word = "";
    myfile.open ("words.txt");
    for(word; getline(myfile, word); ) {
        string pigWord = pigify(word);
    }
    cout << word << endl;
    myfile.close();
    return 0;
}


