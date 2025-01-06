#include "../headers/7-Service.hpp"
#include <iostream>

using namespace std;

// Constructor
Service::Service(const std::string& serviceID, const std::string& type, double price, const std::string& description)
    : serviceID(serviceID), type(type), price(price), description(description) {}


// Method to book a service
void Service::bookService() {
    cout << "Service with ID: " << serviceID << " has been successfully booked.\n";
}

// Method to cancel a service
void Service::cancelService() {
    cout << "Service with ID: " << serviceID << " has been successfully canceled.\n";
}

// Method to display service details
void Service::displayServiceDetails() const {
    cout << "Service Details:\n";
    cout << "Service ID: " << serviceID << "\n";
    cout << "Type: " << type << "\n";
    cout << "Price: $" << price << "\n";
    cout << "Description: " << description << "\n";
}