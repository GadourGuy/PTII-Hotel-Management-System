#ifndef BOOKING_HPP
#define BOOKING_HPP

#include <string>
#include "3-Customer.hpp" 
#include "2-Room.hpp"     

class Booking {
public:
    Booking(const std::string& bookingID, const Customer& customer, const Room& room, 
            const std::string& checkInDate, const std::string& checkOutDate);

    
    double calculateTotal() const;      
    void displayBookingDetails() const; 

private:
    std::string bookingID;  
    Customer customer;      
    Room room;              
    std::string checkInDate; 
    std::string checkOutDate; 
};

#endif 