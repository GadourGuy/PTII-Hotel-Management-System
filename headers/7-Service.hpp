#ifndef SERVICE_HPP
#define SERVICE_HPP

#include <string>

using namespace std;

// Base class: Service
class Service {
public:
    // Constructor
    Service(const string& serviceID, const string& type, double price, const string& description);
    string getServiceID() const;

    // Virtual destructor for polymorphism
    virtual ~Service();

    // Core functionalities
    virtual void bookService();                // Method to book a service
    virtual void cancelService();              // Method to cancel a service
    virtual void displayServiceDetails() const; // Display service details

    // Polymorphic method
    virtual double calculateTotalCost() const; // Virtual method to calculate total cost

protected:
    string serviceID;   // Service ID
    string type;        // Service type
    double price;            // Base price of the service
    string description; // Service description
};

// Derived class: SpaService
class SpaService : public Service {
public:
    // Constructor
    SpaService(const string& serviceID, double price, const string& description, int durationMinutes);

    // Overridden method
    double calculateTotalCost() const override;

private:
    int durationMinutes; // Duration of the spa session in minutes
};

// Derived class: RoomService
class RoomService : public Service {
public:
    // Constructor
    RoomService(const string& serviceID, double price, const string& description, const string& mealType);

    // Overridden method
    double calculateTotalCost() const override;

private:
    string mealType; // Type of meal provided
};

#endif
