#include "../headers/7-Service.hpp"
#include <iostream>

// Constructor
Service::Service(const std::string& serviceID, const std::string& type, double price, const std::string& description)
    : serviceID(serviceID), type(type), price(price), description(description) {}


// Method to book a service
void Service::bookService() {
    std::cout << "Service with ID: " << serviceID << " has been successfully booked.\n";
}

// Method to cancel a service
void Service::cancelService() {
    std::cout << "Service with ID: " << serviceID << " has been successfully canceled.\n";
}

// Method to display service details
void Service::displayServiceDetails() const {
    std::cout << "Service Details:\n";
    std::cout << "Service ID: " << serviceID << "\n";
    std::cout << "Type: " << type << "\n";
    std::cout << "Price: $" << price << "\n";
    std::cout << "Description: " << description << "\n";
}