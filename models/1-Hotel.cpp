#include "../headers/1-Hotel.hpp"
#include <iostream>

using namespace std;

// Constructor
Hotel::Hotel(const string& name, const string& location, int totalRooms)
    : name(name), location(location), totalRooms(totalRooms), availableRooms(totalRooms) {}

// Add a room to the hotel
void Hotel::addRoom(const Room& room) {
    if (roomList.size() < totalRooms) {
        roomList.push_back(room);
        cout << "Room #" << room.getRoomNumber() << " added successfully.\n";
    } else {
        cout << "Cannot add more rooms. Maximum capacity reached.\n";
    }
}

// Book a room
void Hotel::bookRoom() {
    int roomNumber;
    cout << "Enter the room number you want to book: ";
    cin >> roomNumber;

    Room* targetRoom = findRoom(roomNumber);
    if (targetRoom && targetRoom->updateStatus()) {
        availableRooms--;
        cout << "Booking confirmed for Room #" << roomNumber << ".\n";
    } else {
        cout << "Booking failed. Room #" << roomNumber << " is unavailable or does not exist.\n";
    }
}

// Release a room
void Hotel::releaseRoom(bool success) {
    if (success) {
        cout << "Room successfully released.\n";
        availableRooms++;
    } else {
        cout << "Room release failed.\n";
    }
}

// Check out of a room
void Hotel::checkOut() {
    int roomNumber;
    cout << "Enter the room number to check out: ";
    cin >> roomNumber;

    Room* targetRoom = findRoom(roomNumber);
    if (targetRoom) {
        bool success = targetRoom->updateStatus(); // Assuming this method changes the room's status
        releaseRoom(success);
    } else {
        cout << "Check-out failed. Room #" << roomNumber << " does not exist.\n";
    }
}

// Display hotel details
void Hotel::displayDetails() const {
    cout << "\nHotel Details:\n";
    cout << "  Hotel Name      : " << name << "\n";
    cout << "  Location        : " << location << "\n";
    cout << "  Total Rooms     : " << totalRooms << "\n";
    cout << "  Available Rooms : " << availableRooms << "\n";
}

// Find a room by number
Room* Hotel::findRoom(int roomNumber) {
    for (auto& room : roomList) {
        if (room.getRoomNumber() == roomNumber) {
            return &room;
        }
    }
    return nullptr;
}

// Getter for available rooms
int Hotel::getAvailableRooms() const {
    return availableRooms;
}
