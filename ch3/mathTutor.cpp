#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int v1 = rand() % 1000;
    int v2 = rand() % 1000;
    int value;

    cout << " " << v1 << endl;
    cout << "+" << v2 << endl;
    cout << "-----\tEnter any key for answer";
    cin >> value;
    cout << v1 + v2 << endl;

}