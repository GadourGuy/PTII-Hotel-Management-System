#include "./4-Staff.hpp"

Staff::Staff(string name, string contactInfo, string staffID, string position)
    : Person(name, contactInfo), staffID(staffID), position(position) {}

void Staff::assignTask(const string& task) {
    cout << "Task assigned: " << task << endl;
}

void Staff::updateInfo(const string& newContactInfo, const string& newPosition) {
    contactInfo = newContactInfo;
    position = newPosition;
}

void Staff::displayInfo() const {
    Person::displayInfo();
    cout << "Staff ID: " << staffID << endl;
    cout << "Position: " << position << endl;
}