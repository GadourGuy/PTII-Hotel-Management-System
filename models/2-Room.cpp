#include "../headers/2-Room.hpp"
#include <iostream>
#include <algorithm>

using namespace std;

// Room Constructor
Room::Room(const string& type, double price, int roomNum, bool status)
    : type(type), price(price), roomNum(roomNum), status(status) {}

// Virtual Destructor
Room::~Room() {}

// Update Room Status (Booking or Checkout)
bool Room::updateStatus() {
    cout << "Room booking or checkout (Enter 'booking' or 'checkout'): ";
    string action;
    cin >> action;

    // Convert input to lowercase
    transform(action.begin(), action.end(), action.begin(), ::tolower);

    if (action == "booking" && status) {
        status = false; // Room is now occupied
        cout << "Room #" << roomNum << " has been successfully booked.\n";
        return true;
    } else if (action == "checkout" && !status) {
        status = true; // Room is now empty
        cout << "Room #" << roomNum << " has been successfully checked out.\n";
        return true;
    } else {
        cout << "Invalid action or room is already in the desired state.\n";
        return false;
    }
}

// Get Room Price
double Room::getPrice() const {
    return price;
}

// Display Room Information
void Room::displayInfo() const {
    cout << "Room Details:\n";
    cout << "  Type       : " << type << endl;
    cout << "  Number     : " << roomNum << endl;
    cout << "  Price      : $" << fixed << setprecision(2) << price << endl;
}

// Get Room Number
int Room::getRoomNumber() const {
    return roomNum;
}

// Check Availability
bool Room::isAvailable() const {
    return status;
}

// SingleRoom Constructor
SingleRoom::SingleRoom(double price, int roomNum, bool status)
    : Room("Single", price, roomNum, status) {}

// Overridden Display Info
void SingleRoom::displayInfo() const {
    cout << "Single Room Details:\n";
    Room::displayInfo();
}

// DoubleRoom Constructor
DoubleRoom::DoubleRoom(double price, int roomNum, bool status)
    : Room("Double", price, roomNum, status) {}

// Overridden Display Info
void DoubleRoom::displayInfo() const {
    cout << "Double Room Details:\n";
    Room::displayInfo();
}

// Suite Constructor
Suite::Suite(double price, int roomNum, bool status)
    : Room("Suite", price, roomNum, status) {}

// Overridden Display Info
void Suite::displayInfo() const {
    cout << "Suite Details:\n";
    Room::displayInfo();
}
