// Polina Maidanova
// Programming Fundamentals
// CS 1436
// 005
// Due Date: 10/15/2024
// Date Completed: 10/15/2024
// Date Submitted: 10/15/2024


// This program calculates the occupancy rate for a hotel.

#include <iostream> // Header file allowing the use of input/output objects.
#include <iomanip>  // Header file allowing to manipulate the output.
using namespace std;    // Use standard namespace.

int main()  // Main function, the starting point of the program execution.
{
    // Declare variables to store the hotel's information.
    int iFloors, iRooms, iRoomsOccupied, iRoomsOccupiedTotal, iRoomsFree, iRoomsTotal;
    double fOccupancyRate;

    // Initialize the variables used for accumulation.
    iRoomsOccupiedTotal = 0;
    iRoomsTotal = 0;

    // Request the number of floors at the hotel.
    cout << "Enter the number of floors at the hotel: ";
    cin >> iFloors;

    // Validate the number of floors.
    while (iFloors < 1) // Check if the number of floors is less than one and display the error message.
    {
        cout << "Invalid input. Please enter the number of floors of at least 1: ";
        cin >> iFloors;
    }

    // Request the number of rooms and the number of occupied rooms for each floor.
    for (int iFloorsCounter = 0; iFloorsCounter <= iFloors - 1; iFloorsCounter++)   // Initialize, test and update the floor counter.
    {
        // Request the number of rooms at a floor.
        cout << "Enter the number of rooms on floor " << iFloorsCounter + 1 << ": ";
        cin >> iRooms;

        // Validate the number of rooms.
        while(iRooms < 10)  // Check if the number of rooms is less than 10 and display the error message.
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
        while (iRoomsOccupied > iRooms) // Check if the number of occupied rooms exceeds the number of rooms.
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
    cout << setprecision(0) << fixed;   // Display the output to 0 decimal places.
    cout << "The total number of rooms is " << iRoomsTotal << ".\n";
    cout << iRoomsOccupiedTotal << " rooms are occupied.\n";
    cout << iRoomsFree << " rooms are free.\n";
    cout << "The occupancy rate is " << fOccupancyRate << "%.\n";

    return 0;
}
