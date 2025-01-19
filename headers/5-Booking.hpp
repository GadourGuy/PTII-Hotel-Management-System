#ifndef BOOKING_HPP
#define BOOKING_HPP

#include <string>
#include "3-Customer.hpp"
#include "2-Room.hpp"
#include <iostream>
#include <vector>

using namespace std;

class Booking {
public:
    Booking(const string& bookingID, const Customer& customer, const Room& room,
            const string& checkInDate, const string& checkOutDate);

    virtual double calculateTotal() const; // Make this method virtual for polymorphism
    virtual void displayBookingDetails() const; // Make this method virtual for polymorphism

    // Getters
    string getBookingID() const;
    Customer getCustomer() const;
    Room getRoom() const;

private:
    string bookingID;  
    Customer customer;      
    Room room;              
    string checkInDate; 
    string checkOutDate; 
};

// Derived Class: ShortTermBooking
class ShortTermBooking : public Booking {
public:
    ShortTermBooking(const string& bookingID, const Customer& customer, const Room& room,
                     const string& checkInDate, const string& checkOutDate);
    
    double calculateTotal() const override; // Override for specific behavior
};

// Derived Class: LongTermBooking
class LongTermBooking : public Booking {
public:
    LongTermBooking(const string& bookingID, const Customer& customer, const Room& room,
                    const string& checkInDate, const string& checkOutDate, double discount);
    
    double calculateTotal() const override; // Override for specific behavior

private:
    double discount; // Discount for long-term bookings
};

#endif 
