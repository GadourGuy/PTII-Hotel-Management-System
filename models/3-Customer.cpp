#include "../headers/3-Customer.hpp"
#include <iostream>
using namespace std;

// Constructor for Person
Person::Person(const string& name, const string& contactInfo)
    : name(name), contactInfo(contactInfo) {}

// Virtual Destructor for Person
Person::~Person() {}

// Update Contact Info (Person)
void Person::updateContactInfo(const string& newContactInfo) {
    contactInfo = newContactInfo;
    cout << "Contact information updated successfully.\n";
}

// Display Info (Person)
void Person::displayInfo() const {
    cout << "Person Details:\n";
    cout << "  Name         : " << name << "\n";
    cout << "  Contact Info : " << contactInfo << "\n";
}

// Getter for Name (Person)
std::string Person::getName() const {
    return name;
}

// Constructor for Customer
Customer::Customer(const string& name, const string& contactInfo, const string& customerID)
    : Person(name, contactInfo), customerID(customerID) {}

// Update Contact Info (Customer)
void Customer::updateContactInfo(const string& newContactInfo) {
    Person::updateContactInfo(newContactInfo);
    cout << "Customer-specific contact info updated.\n";
}

// Display Info (Customer)
void Customer::displayInfo() const {
    cout << "Customer Details:\n";
    cout << "  Name         : " << name << endl;
    cout << "  Contact Info : " << contactInfo << endl;
    cout << "  Customer ID  : " << customerID << endl;
    cout << "  Booking History: " << (bookingHistory.empty() ? "None" : bookingHistory) << endl;
}

// Update Booking History
void Customer::updateBookingHistory(const string& bookingDetails) {
    if (!bookingHistory.empty()) {
        bookingHistory += "; ";
    }
    bookingHistory += bookingDetails;
    cout << "Booking history updated successfully.\n";
}

// Getter for Name (Customer)
std::string Customer::getName() const {
    return Person::getName(); // Inherits functionality from base class
}
