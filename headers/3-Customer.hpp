#include <iostream>

class Customer{
    private:
    char* name;
    char* CustomerID;
    int contactInfo;
    char* History;


    public:
    Customer(char *, char* , int, int);
    void UpdateContactInfo();
    void displayDetails();

};