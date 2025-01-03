#include <iostream>
#include <ctime>
#include "5-Booking.hpp"
#include "2-Room.hpp"


class Payment{
    private:
    Booking booking;
    char* PaymentID;
    int amount;
    char* paymentMethod;
    bool status;


    public:
    Payment(Booking, char* , int, char* ,bool);
    void processPayment();
    void refundPayment();
    void displayPaymentDetails();

};