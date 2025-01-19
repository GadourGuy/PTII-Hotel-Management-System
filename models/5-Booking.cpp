#include "../headers/5-Booking.hpp"

// Constructor for Booking class
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
    cout << "\nBooking Details:\n";
    cout << "  Booking ID      : " << bookingID << endl;

    cout << "  Customer Details:\n";
    customer.displayInfo();
    
    cout << "  Room Details:\n";
    room.displayInfo();
    cout << "  Check-In Date   : " << checkInDate << endl;
    cout << "  Check-Out Date  : " << checkOutDate << endl;
    cout << "  Total Cost      : $" << fixed << setprecision(2) << calculateTotal() << endl;
}

// Constructor for ShortTermBooking class
ShortTermBooking::ShortTermBooking(const string& bookingID, const Customer& customer, const Room& room,
                                    const string& checkInDate, const string& checkOutDate)
    : Booking(bookingID, customer, room, checkInDate, checkOutDate) {}

// Override to calculate the total cost for short-term bookings
double ShortTermBooking::calculateTotal() const {
    return Booking::calculateTotal(); // You may add additional logic here if needed
}

// Constructor for LongTermBooking class
LongTermBooking::LongTermBooking(const string& bookingID, const Customer& customer, const Room& room,
                                 const string& checkInDate, const string& checkOutDate, double discount)
    : Booking(bookingID, customer, room, checkInDate, checkOutDate), discount(discount) {}

// Override to calculate the total cost for long-term bookings with discount
double LongTermBooking::calculateTotal() const {
    double total = Booking::calculateTotal();
    return total - (total * discount); // Apply discount
}
