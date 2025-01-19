#include "../headers/7-Service.hpp"
#include "../headers/3-Customer.hpp" // Assuming Customer is defined in 3-Customer.hpp
#include <iostream>
#include <vector>
#include <memory> // For smart pointers

using namespace std;

// Base class: Service

// Constructor
Service::Service(const string& serviceID, const string& type, double price, const string& description)
    : serviceID(serviceID), type(type), price(price), description(description) {}

// Virtual destructor for polymorphism
Service::~Service() {}

string Service::getServiceID() const {
    return serviceID; // Return the service ID
}

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

// Virtual method for polymorphism
double Service::calculateTotalCost() const {
    return price; // Default implementation returns the base price
}

// Derived class: SpaService
SpaService::SpaService(const string& serviceID, double price, const string& description, int durationMinutes)
    : Service(serviceID, "Spa", price, description), durationMinutes(durationMinutes) {}

// Overriding calculateTotalCost for SpaService
double SpaService::calculateTotalCost() const {
    return price + (durationMinutes * 0.5); // Example: $0.5 per minute
}

// Derived class: RoomService
RoomService::RoomService(const string& serviceID, double price, const string& description, const string& mealType)
    : Service(serviceID, "Room", price, description), mealType(mealType) {}

// Overriding calculateTotalCost for RoomService
double RoomService::calculateTotalCost() const {
    return price + 10; // Example: $10 service fee
}

