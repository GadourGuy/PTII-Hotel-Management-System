#include "../headers/6-Payment.hpp"
#include <iostream>

using namespace std;

// Constructor
Payment::Payment(const string& paymentID, const Booking& booking, double amount,
                 const string& paymentMethod, const string& status)
    : paymentID(paymentID), booking(booking), amount(amount), 
      paymentMethod(paymentMethod), status(status) {}



// Method to process the payment
bool Payment::processPayment() {
    if (status == "Pending") {
        cout << "Processing payment for Payment ID: " << paymentID << endl;
        status = "Completed";
        return true;
    } else {
        cout << "Payment already processed or invalid status." << endl;
        return false;
    }
}

// Method to refund the payment
void Payment::refundPayment() {
    if (status == "Completed") {
        cout << "Refunding payment for Payment ID: " << paymentID << endl;
        status = "Refunded";
    } else {
        cout << "Refund not possible for current payment status." << endl;
    }
}

// Method to display payment details
void Payment::displayPaymentDetails() const {
    cout << "Payment Details:\n";
    cout << "Payment ID: " << paymentID << endl;
    cout << "Booking Details: " << endl;
    booking.displayBookingDetails();
    cout << "Amount: " << amount << endl;
    cout << "Payment Method: " << paymentMethod << endl;
    cout << "Status: " << status << endl;
}
