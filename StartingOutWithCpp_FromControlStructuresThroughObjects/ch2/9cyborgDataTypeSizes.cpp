/*
Cyborg Data Type Sizes 
You have been given a job as a programmer on a Cyborg supercomputer. 
In order to accomplish some calculations, 
  you need to know how many bytes the following data types use: 
    char, 
    int, 
    float, 
    and double. 
  You do not have any manuals, so you can’t look this information up. 
  
Write a C++ program that will determine the amount of memory used by these types and display the information on the screen.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

  int i = 1;
  double d = 24.95;
  float f = 6.9;
  char c = 'c';

  int si = sizeof(i);
  int sd = sizeof(d);
  int sf = sizeof(f);
  int sc = sizeof(c);

  cout << "bytes used (int): " << si << endl;
  cout << "bytes used (doub): " << sd << endl;
  cout << "bytes used (float): " << sf << endl;
  cout << "bytes used (char): " << sc << endl;
}