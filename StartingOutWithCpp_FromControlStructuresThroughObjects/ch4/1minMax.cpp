#include <cstdlib>
#include <iostream>
#include <vector>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int v1, v2;
    
    cout << "Enter two numbers seperated by a space: ";
    cin >> v1 >> v2;
    
    if (v1 > v2) {
        cout << v1 << " is greater than " << v2 << endl;
    } else if (v1 < v2) {
        cout << v1 << " is less than " << v2 << endl;
    } else {
        cout << v1 << " is equal to " << v2 << endl;

    }
}

