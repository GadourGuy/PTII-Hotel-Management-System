#include "../headers/5-Booking.hpp"
#include <iostream>

using namespace std;

// Constructor
Booking::Booking(const string& bookingID, const Customer& customer, const Room& room, 
                 const string& checkInDate, const string& checkOutDate)
    : bookingID(bookingID), customer(customer), room(room), 
      checkInDate(checkInDate), checkOutDate(checkOutDate) {}


// Method to calculate the total cost
double Booking::calculateTotal() const {
    cout << "Calculating total cost for Booking ID: " << bookingID << endl;
    return room.getPrice(); 
}

// Method to display booking details
void Booking::displayBookingDetails() const {
    cout << "Booking Details:\n";
    cout << "Booking ID: " << bookingID << endl;
    cout << "Customer Details:\n";
    customer.displayInfo(); 
    cout << "Room Details:\n";
    room.displayInfo();  
    cout << "Check-In Date: " << checkInDate << endl;
    cout << "Check-Out Date: " << checkOutDate << endl;
}