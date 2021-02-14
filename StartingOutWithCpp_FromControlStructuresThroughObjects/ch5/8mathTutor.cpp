/*
Math Tutor 
This program started in Programming Challenge 15 of Chapter 3, 
and was modified in Programming Challenge 9 of Chapter 4. 
Modify the program again so it displays a menu allowing the user to select an 
    addition, 
    subtraction, 
    multiplication, 
    or division problem. 
    
The final selection on the menu should let the user quit the program. 
After the user has finished the math problem, the program should display the menu again. 
This process is repeated until the user chooses to quit the program. 
Input Validation: 
If the user selects an item not on the menu, display an error message and display the menu again.
*/

#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string op[] = {"+", "-", "*", "/"};
    int opVal;
    srand(time(NULL));

    int v1 = rand() % 1000;
    int v2 = rand() % 1000;
    int value, answer;

    cout << "Pick an operation to practice by index" << endl;
    cout << "1) +" << endl;
    cout << "2) -" << endl;
    cout << "3) *" << endl;
    cout << "4) /" << endl;
    cin >> opVal;
    if (opVal < 1 || opVal > 4)
    {
        cout << "invalid opcode" << endl;
        exit(1);
    }

    cout << " " << v1 << endl;
    cout << op[opVal - 1] << v2 << endl;
    cout << "-----\tEnter any key for answer" << endl;
    cin >> value;

    switch (opVal)
    {
    case 1:
        answer = v1 + v2;
        break;
    case 2:
        answer = v1 - v2;
        break;
    case 3:
        answer = v1 * v2;
        break;
    case 4:
        answer = v1 / v2;
    default:
        break;
    }
    if (value == answer)
        cout << "correct" << endl;
    else
        cout << "wrong\nCorrect answer is " << answer << endl;
}
