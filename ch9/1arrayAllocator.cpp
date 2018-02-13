#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int* returnPtr(int);

int main() {
    int input;

    cout << "How many elements to dynamically allocate?: ";
    cin >> input;

    int* ptr = returnPtr(input);
}

int* returnPtr(int input) {
    int* foo = new int[input];

    return foo;
}