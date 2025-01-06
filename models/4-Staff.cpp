#include "../headers/4-Staff.hpp"

// Constructor for Staff class inherating from Person
Staff::Staff(string name, string contactInfo, string staffID, string position)
    : Person(name, contactInfo), staffID(staffID), position(position) {}

// Method to assign tasks for the staff
void Staff::assignTask(const string& task) {
    cout << "Task assigned: " << task << endl;
}
// Method to update info for the staff
void Staff::updateInfo(const string& newContactInfo, const string& newPosition) {
    contactInfo = newContactInfo;
    position = newPosition;
}

// Method to display info for the staff
void Staff::displayInfo() const {
    Person::displayInfo();
    cout << "Staff ID: " << staffID << endl;
    cout << "Position: " << position << endl;
}
