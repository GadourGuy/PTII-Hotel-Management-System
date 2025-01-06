#include <iostream>
#include "models/1-Hotel.cpp"
#include "models/2-Room.cpp"
#include "models/3-Customer.cpp"
#include "models/5-Booking.cpp"

using namespace std;

int main() {
    // Create a customer
    Customer customer("Othman Hassan", "hassan.othman@graduate.utm.my", "C1234");

    // Create some rooms
    SingleRoom room1(100.0, 101, true); // Room 101, $100, empty
    DoubleRoom room2(150.0, 102, true); // Room 102, $150, empty

    // Create a hotel
    Hotel hotel("Luxury Stay", "Downtown", 10, 2);

    // Display hotel details
    hotel.displayDetails();

    // Display available rooms
    cout << "\nRoom 1 Details:\n";
    room1.displayInfo();
    cout << "\nRoom 2 Details:\n";
    room2.displayInfo();

    // Customer books a room
    cout << "\nCustomer Booking Room...\n";
    hotel.bookRoom(room1);

    // Create a booking
    Booking booking("B001", customer, room1, "2025-01-01", "2025-01-05");
    booking.displayBookingDetails();

    return 0;
}
