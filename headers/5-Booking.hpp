#include <iostream>
#include <ctime>
#include "3-Customer.hpp"
#include "2-Room.hpp"


class Booking{
    private:
    Customer customer;
    char* BookingID;
    Room room;
    time_t checkInDate;
    time_t checkOutDate;


    public:
    Booking(Customer, char* , Room, int, time_t, time_t);
    void UpdateContactInfo();
    void displayDetails();

};