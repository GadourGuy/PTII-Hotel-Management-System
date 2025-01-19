#include "../headers/6-Payment.hpp"

// Constructor for Payment class
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
    cout << "  Payment ID: " << paymentID << endl;
    cout << "  Booking Details:\n";
    booking.displayBookingDetails();
    cout << "  Amount: $" << fixed << setprecision(2) << amount << endl;
    cout << "  Payment Method: " << paymentMethod << endl;
    cout << "  Status: " << status << endl;
}

// Constructor for CreditCardPayment class
CreditCardPayment::CreditCardPayment(const string& paymentID, const Booking& booking, double amount,
                                     const string& cardNumber, const string& status)
    : Payment(paymentID, booking, amount, "Credit Card", status), cardNumber(cardNumber) {}

// Override to process credit card payment
bool CreditCardPayment::processPayment() {
    if (Payment::processPayment()) {
        cout << "Credit card payment processed successfully." << endl;
        return true;
    }
    return false;
}

// Constructor for CashPayment class
CashPayment::CashPayment(const string& paymentID, const Booking& booking, double amount, 
                         const string& status)
    : Payment(paymentID, booking, amount, "Cash", status) {}

// Override to process cash payment
bool CashPayment::processPayment() {
    if (Payment::processPayment()) {
        cout << "Cash payment processed successfully." << endl;
        return true;
    }
    return false;
}
