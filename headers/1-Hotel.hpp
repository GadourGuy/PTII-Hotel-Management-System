#include <iostream>
#include "2-Room.hpp"

class Hotel{
    private:
    string name;
    string location;
    int totalRooms;
    int availableRooms;


    public:
    Hotel(string = "", string = "", int = 0, int = 0);
    void bookRoom(Room&);
    void releaseRoom(bool);
    void checkOut(Room&);
    void displayDetails();

};