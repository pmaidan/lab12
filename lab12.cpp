// This program calculates the occupancy rate for a hotel.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int iFloors, iRooms, iRoomsOccupied, iRoomsOccupiedTotal, iRoomsFree, iRoomsTotal;
    double fOccupancyRate;

    iRoomsOccupiedTotal = 0;
    iRoomsTotal = 0;

    // Request the number of floors at the hotel.
    cout << "Enter the number of floors at the hotel: ";
    cin >> iFloors;

    // Validate the number of floors.
    while (iFloors < 1)
    {
        cout << "Invalid input. Please enter the number of floors of at least 1: ";
        cin >> iFloors;
    }

    // Request the number of rooms and the number of occupied rooms for each floor.
    for (int iFloorsCounter = 1; iFloorsCounter <= iFloors; iFloorsCounter++)
    {
        // Request the number of rooms at a floor.
        cout << "Enter the number of rooms on floor " << iFloorsCounter << ": ";
        cin >> iRooms;

        // Validate the number of rooms.
        while(iRooms < 10)
        {
            cout << "Please enter the number of rooms of at least 10: ";
            cin >> iRooms;
        }

        // Accumulate the total number of rooms.
        iRoomsTotal += iRooms;

        // Request the number of occupied rooms.
        cout << "How many of the rooms are occupied: ";
        cin >> iRoomsOccupied;

        // Validate the number of occupied rooms.
        while (iRoomsOccupied > iRooms)
        {
            cout << "The number of occupied rooms can't exceed the total number of rooms.\n";
            cout << "Please enter the number of occupied rooms: ";
            cin >> iRoomsOccupied;
        }

        // Accumulate the total number of occupied rooms.
        iRoomsOccupiedTotal += iRoomsOccupied;
    }

    // Calculate the occupancy rate and the number of rooms free.
    iRoomsFree = iRoomsTotal - iRoomsOccupiedTotal;
    fOccupancyRate = ((double)iRoomsOccupiedTotal / (double)iRoomsTotal) * 100.0;

    // Display the results.
    cout << setprecision(0) << fixed;
    cout << "The total number of rooms is " << iRoomsTotal << ".\n";
    cout << iRoomsOccupiedTotal << " rooms are occupied.\n";
    cout << iRoomsFree << " rooms are free.\n";
    cout << "The occupancy rate is " << fOccupancyRate << "%.\n";

    return 0;
}
