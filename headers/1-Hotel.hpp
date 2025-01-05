#include <iostream>
#include "2-Room.hpp"
#include "3-Customer.hpp"

class Hotel{
    private:
    char* name;

    char* location;
    int totalRooms;
    int availableRooms;


    public:
    Hotel(char *, char* , int, int);
    void bookRoom(Room&);
    void releaseRoom(Room&);
    void checkOut(Customer&);
    void displayDetails();

};