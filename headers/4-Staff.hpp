#ifndef STAFF_H
#define STAFF_H
#include "3-Customer.hpp"
#include <iostream>

class Staff : public Person {
private:
    string staffID;
    string position;

public:
    Staff(string name, string contactInfo, string staffID, string position);
    void assignTask(const string& task);
    void updateInfo(const string& newContactInfo, const string& newPosition);
    void displayInfo() const;
};

#endif