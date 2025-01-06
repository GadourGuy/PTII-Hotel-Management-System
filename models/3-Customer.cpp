#include "../headers/3-Customer.hpp"
using namespace std;

Person::Person(string name, string contactInfo) 
    : name(name), contactInfo(contactInfo) {}

void Person::updateContactInfo(const string& newContactInfo) {
    contactInfo = newContactInfo;
}

void Person::displayInfo() const {
    cout << "Name: " << name << endl;
    cout << "Contact Info: " << contactInfo << endl;
}

Customer::Customer(string name, string contactInfo, string customerID)
    : Person(name, contactInfo), customerID(customerID) {}

void Customer::updateContactInfo(const string& newContactInfo) {
    contactInfo = newContactInfo;
}

void Customer::displayInfo() const {
    Person::displayInfo();
    cout << "Customer ID: " << customerID << endl;
    cout << "Booking History: " << bookingHistory << endl;
}