#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <string>

using namespace std;
// Base Class: Person
class Person {
public:
    // Constructor
    Person(const string& name, const string& contactInfo);

    // Virtual Destructor for Polymorphism
    virtual ~Person();

    // Public Methods
    virtual void updateContactInfo(const string& newContactInfo);
    virtual void displayInfo() const;

    // Getter
    string getName() const;

protected:
    string name;          // Person's name
    string contactInfo;   // Contact information
};

// Derived Class: Customer
class Customer : public Person {
public:
    // Constructor
    Customer(const string& name, const string& contactInfo, const string& customerID);

    // Overridden Methods
    void updateContactInfo(const string& newContactInfo) override;
    void displayInfo() const override;

    // Additional Methods
    void updateBookingHistory(const string& bookingDetails);

    // Getter
    string getName() const;

private:
    string customerID;       // Customer ID
    string bookingHistory;   // Customer booking history
};

#endif
