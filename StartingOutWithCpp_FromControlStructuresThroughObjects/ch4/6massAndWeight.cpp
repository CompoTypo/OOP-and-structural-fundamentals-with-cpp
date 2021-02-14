#include <cstdlib>
#include <iostream>
#include <vector>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    double mass;
    
    cout << "Enter mass: ";
    cin >> mass;
   
    double weight = mass * 9.8;

    
    if (weight > 1000) {
        cout << weight << ": to heavy" << endl;
    } else if (weight < 10) {
        cout << weight << ": to light" << endl;
    } else {
        cout << weight << ": optimal" << endl;
    }
}

