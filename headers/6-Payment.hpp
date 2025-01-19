#ifndef PAYMENT_HPP
#define PAYMENT_HPP

#include "5-Booking.hpp"
#include <string>
#include <iostream>

using namespace std;

class Payment {
public:
    Payment(const string& paymentID, const Booking& booking, double amount, 
            const string& paymentMethod, const string& status);

    virtual bool processPayment(); // Make this method virtual for polymorphism
    virtual void refundPayment();   // Make this method virtual for polymorphism
    virtual void displayPaymentDetails() const; // Make this method virtual for polymorphism

    // Getters
    string getPaymentID() const;
    double getAmount() const;
    string getPaymentMethod() const;
    string getStatus() const;
    void setStatus(const string& newStatus);

protected:
    string paymentID;       
    Booking booking;        
    double amount;          
    string paymentMethod;   
    string status;          
};

// Derived Class: CreditCardPayment
class CreditCardPayment : public Payment {
public:
    CreditCardPayment(const string& paymentID, const Booking& booking, double amount, 
                      const string& cardNumber, const string& status);
    
    bool processPayment() override; // Override for specific behavior

private:
    string cardNumber; // Card number for credit card payment
};

// Derived Class: CashPayment
class CashPayment : public Payment {
public:
    CashPayment(const string& paymentID, const Booking& booking, double amount, 
                const string& status);
    
    bool processPayment() override; // Override for specific behavior
};

#endif 
