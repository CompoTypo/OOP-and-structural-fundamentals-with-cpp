#include <iostream>

using namespace std;

int main() {
    double t1, t2, t3;
    string n1, n2, n3;

    cout << "Name of first runner: ";
    cin >> n1;
    cout << "Enter his/her time: ";
    cin >> t1;
    cout << "Name of second runner: ";
    cin >> n2;
    cout << "Enter his/her time: ";
    cin >> t2;
    cout << "Name of third runner: ";
    cin >> n3;
    cout << "Enter his/her time: ";
    cin >> t3;

    if (t1 < 0) {
        t1 = -1;
    }
    
    if (t2 < 0) {
        t2 = -1;
    } 
    
    if (t3 < 0) {
        t3 = -1;
    }

    if (t1 < t2 && t1 < t3) {
        cout << n1 << ": " << t1 << endl;
        if (t2 < t3) {
            cout << n2 << ": " << t2 << endl;
            cout << n3 << ": " << t3 << endl;
        } else {
            cout << n3 << ": " << t3 << endl;
            cout << n2 << ": " << t2 << endl;            
        }
    } else if (t2 < t1 && t2 < t3) {
        cout << n2 << ": " << t2 << endl;
        if (t1 < t3) {
            cout << n1 << ": " << t1 << endl;
            cout << n3 << ": " << t3 << endl;
        } else {
            cout << n3 << ": " << t3 << endl;
            cout << n1 << ": " << t1 << endl;
        }
    } else if (t3 < t1 && t3 < t2) {
        cout << n3 << ": " << t3 << endl;
        if (t1 < t2) {
            cout << n1 << ": " << t1 << endl;
            cout << n2 << ": " << t2 << endl;
        } else {
            cout << n2 << ": " << t2 << endl;
            cout << n1 << ": " << t1 << endl;
        }
    }
}