#ifndef HOTEL_HPP
#define HOTEL_HPP

#include <string>
#include <vector>
#include "2-Room.hpp" // Assuming Room class is defined here

using namespace std;

class Hotel {
public:
    // Constructor
    Hotel(const std::string& name = "", const std::string& location = "", int totalRooms = 0);

    // Methods
    void bookRoom();         // Book a room (updated to take user input)
    void releaseRoom(bool success); // Release a room
    void checkOut();        // Check out of a room (updated to take user input)
    void displayDetails() const;    // Display hotel details
    void addRoom(const Room& room); // Add a room to the hotel

    // Getter for available rooms
    int getAvailableRooms() const;

private:
    string name;              // Name of the hotel
    string location;          // Location of the hotel
    int totalRooms;           // Total number of rooms
    int availableRooms;       // Number of available rooms
    vector<Room> roomList;    // List of rooms (aggregation)

    // Helper function to find a room
    Room* findRoom(int roomNumber);
};

#endif
