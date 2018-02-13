#include <iostream>

using namespace std;

int main() {
    int numMonkeys = 3;
    int days = 5;

    double totalEaten = 0;

    double max = 0;
    double min = 1000;


    double monkeys[numMonkeys][days];

    for (int monkey = 0; monkey < numMonkeys; monkey++) {
        for (int day = 0; day < days; day++) {
            cout << "How much did monkey " << monkey + 1 << " eat on the " << day + 1 << " day of the week? ";
            cin >> monkeys[monkey][day];

            if (monkeys[monkey][day] < 0) {
                cout << "ERR invalid amount of food, monkey ate nothing";
                monkeys[monkey][day] = 0;
            }

            totalEaten += monkeys[monkey][day];

            if (monkeys[monkey][day] > max) {
                max = monkeys[monkey][day];
            }

            if (monkeys[monkey][day] < min) {
                min = monkeys[monkey][day];
            }
        }
    }

    cout << "Per day avg of whole fam " << totalEaten / days << endl;
    cout << "Least amount eaten on a day by a monkey " << min << endl;
    cout << "Greatest amount eaten on a day by a monkey " << max << endl;

}