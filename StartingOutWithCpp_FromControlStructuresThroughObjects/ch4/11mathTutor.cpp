#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main() {

    srand(time(NULL));

    int v1 = rand() % 1000;
    int v2 = rand() % 1000;
    int value;

    cout << " " << v1 << endl;
    cout << "+" << v2 << endl;
    cout << "-----\tEnter any key for answer" << endl;
    cin >> value;

    if (value == v1+v2) {
        cout << "correct" << endl;
    } else {
        cout << "wrong\nCorrect answer is " << v1+v2 << endl;
    }

}