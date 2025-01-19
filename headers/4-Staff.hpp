#ifndef STAFF_HPP
#define STAFF_HPP

#include "3-Customer.hpp"
#include <iostream>
#include <vector>

using namespace std;


// Derived Class: Staff
class Staff : public Person {
private:
    string staffID;
    string position;

public:
    // Constructor
    Staff(string name, string contactInfo, string staffID, string position);

    // Method to assign tasks for the staff
    void assignTask(const string& task);

    // Method to update info for the staff
    void updateInfo(const string& newContactInfo, const string& newPosition);

    // Method to display info for the staff
    void displayInfo() const override;

    // Additional method to get the staff ID
    string getStaffID() const;
};

#endif
