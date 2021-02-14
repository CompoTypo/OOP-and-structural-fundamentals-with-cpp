/* 
Hotel Occupancy 
Write a program that calculates the occupancy rate for a hotel. 
The program should start by asking the user how many floors the hotel has. 
A loop should then iterate once for each floor. 
In each iteration, the loop should ask the user for the number of rooms on the floor and how many of them are occupied. 

After all the iterations, the program should display 
    how many rooms the hotel has, 
    how many of them are occupied, 
    how many are unoccupied, 
    and the percentage of rooms that are occupied. 
    
The percentage may be calculated by dividing the number of rooms occupied by the number of rooms. 
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num_floors, total_rooms=0, total_occ_rooms=0;

    cout << "How many floors does this hotel have: ";
    cin >> num_floors;

    int floor_rooms, occ_floor_rooms;
    for (int floor = 0; floor < num_floors; floor++)
    {
        cout << "How many rooms are on this floor: ";
        cin >> floor_rooms;
        cout << "How many rooms on this floor are occupied: ";
        cin >> occ_floor_rooms;
        total_rooms += floor_rooms;
        total_occ_rooms += occ_floor_rooms;
    }

    cout << "The hotel has " << total_rooms << " rooms" << endl;
    cout << total_occ_rooms << " rooms are occupied" << endl;
    cout << total_rooms - total_occ_rooms << " rooms are unoccupied" << endl;
    cout << "Percent occupied " << (float)total_occ_rooms / (float)total_rooms << endl;

    return 0;
}