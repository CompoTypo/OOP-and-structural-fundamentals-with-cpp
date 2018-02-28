#include <cstdlib>
#include <iostream>


using namespace std;

int main(int argc, char** argv) {

    int fatGramCals = 9;
    int fatGrams;
    int calories;

    cout << "Enter number of calories: ";
    cin >> calories;
    cout << "Enter number of fat grams: ";
    cin >> fatGrams;

    if (calories < 0 || fatGrams < 0) {
        cout << "Invalid entry, no negative inputs" << endl;
        return 0;
    }

    int calsFromFat = fatGrams * fatGramCals;
    
    if (calsFromFat > calories) {
        cout << "Cant have more cals of fat than actual cals" << endl;
        return 0;
    }

    double percentCalsFromFat = (double)calsFromFat / (double)calories;

    cout << "%" << percentCalsFromFat * 100 << " cals from fat" << endl;
    
}

