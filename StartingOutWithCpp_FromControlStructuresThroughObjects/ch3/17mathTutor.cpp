/*
Math Tutor
Write a program that can be used as a math tutor for a young student. The program
should display two random numbers to be added, such as
 247
+129
--------
The program should then pause while the student works on the problem. When the
student is ready to check the answer, he or she can press a key and the program will
display the correct solution:
 247
+129
---------
 376
*/

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