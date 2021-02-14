#include "./date.h"

using namespace std;

int main() {
    Date date = Date();

    int m;
    int d;
    int y;

    cout << "Enter a month(int): ";
    cin >> m;
    cout << "Enter a day(int): ";
    cin >> d;    
    cout << "Enter a year(int): ";
    cin >> y;

    date.setMonth(m);
    date.setDay(d);
    date.setYear(y);

    date.printDate1();
    date.printDate2();
    date.printDate3();
}