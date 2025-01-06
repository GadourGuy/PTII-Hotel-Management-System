#include "../headers/3-Customer.hpp"
using namespace std;


// Constructor for parent class "Person"
Person::Person(string name, string contactInfo) 
    : name(name), contactInfo(contactInfo) {}

// Method to update person contact info
void Person::updateContactInfo(const string& newContactInfo) {
    contactInfo = newContactInfo;
}

// Method to display person info
void Person::displayInfo() const {
    cout << "Name: " << name << endl;
    cout << "Contact Info: " << contactInfo << endl;
}

// constructor for customer class inherating from Person
Customer::Customer(string name, string contactInfo, string customerID)
    : Person(name, contactInfo), customerID(customerID) {}


// Method to Update contact info for customr class
void Customer::updateContactInfo(const string& newContactInfo) {
    contactInfo = newContactInfo;
}

// Method to display info for customr class
void Customer::displayInfo() const {
    Person::displayInfo();
    cout << "    Name          : " << name << endl;
    cout << "    Contact Info  : " << contactInfo << endl;
    cout << "    Customer ID   : " << customerID << endl;
}