#ifndef ROOM_HPP
#define ROOM_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

class Room {
public:
    // Constructor
    Room(const std::string& type, double price, int roomNum, bool status);

    // Virtual Destructor for Polymorphism
    virtual ~Room();

    // Public Methods
    virtual bool updateStatus();              // Update room booking/checkout status
    double getPrice() const;                  // Get room price
    virtual void displayInfo() const;         // Display room information

    // Getters
    int getRoomNumber() const;
    bool isAvailable() const;

protected:
    std::string type;  // Room type
    double price;      // Room price
    int roomNum;       // Room number
    bool status;       // Room availability: true = empty, false = occupied
};

// Derived Class: SingleRoom
class SingleRoom : public Room {
public:
    // Constructor
    SingleRoom(double price = 0.0, int roomNum = 0, bool status = true);

    // Overridden Method
    void displayInfo() const override;
};

// Derived Class: DoubleRoom
class DoubleRoom : public Room {
public:
    // Constructor
    DoubleRoom(double price = 0.0, int roomNum = 0, bool status = true);

    // Overridden Method
    void displayInfo() const override;
};

// Derived Class: Suite
class Suite : public Room {
public:
    // Constructor
    Suite(double price = 0.0, int roomNum = 0, bool status = true);

    // Overridden Method
    void displayInfo() const override;
};

#endif
