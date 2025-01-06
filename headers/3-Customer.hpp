#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    string contactInfo;

public:
    Person(string name, string contactInfo);
    void updateContactInfo(const string& newContactInfo);
    void displayInfo() const;
};

class Customer : public Person {
private:
    string customerID;
    string bookingHistory;

public:
    Customer(string name, string contactInfo, string customerID);
    void updateContactInfo(const string& newContactInfo);
    void displayInfo() const;
};

#endif