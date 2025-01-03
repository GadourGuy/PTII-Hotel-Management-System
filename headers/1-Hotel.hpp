#include <iostream>

class Hotel{
    private:
    char* name;
    char* location;
    int totalRooms;
    int availableRooms;


    public:
    Hotel(char *, char* , int, int);
    void bookRoom();
    void releaseRoom();
    void checkOut();
    void displayDetails();

};