#ifndef PAYMENT_HPP
#define PAYMENT_HPP

#include "5-Booking.hpp"
#include <string>

using namespace std;

class Payment {
private:
    string paymentID;       
    Booking booking;        
    double amount;          
    string paymentMethod;   
    string status;          

public:
    Payment(const string& paymentID, const Booking& booking, double amount, 
            const string& paymentMethod, const string& status);

 


    
    bool processPayment();

    
    void refundPayment();

    
    void displayPaymentDetails() const;


    string getPaymentID() const;
    double getAmount() const;
    string getPaymentMethod() const;
    string getStatus() const;

   
    void setStatus(const string& newStatus);
};

#endif
