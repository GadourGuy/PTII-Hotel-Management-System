#ifndef ROOM_HPP
#define ROOM_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;


class Room{

    protected:
    string type;
    double price;
    int roomNum;
    bool status;


    public:
    Room(string a, double b, int c, bool d);
    bool updateStatus(int);
    void getPrice();
    virtual void displayInfo();

};

class SingleRoom : public Room
 {
    private:
    int RoomNum;
    bool status;

    public:

    SingleRoom(double = 0.0, int = 0, bool = false);
    void displayInfo();

};

class DoubleRoom : public Room
 {
    private:
    int RoomNum;
    bool status;

    public:
    DoubleRoom(double = 0.0, int = 0, bool = false);
    void displayInfo();

};

class Suite : public Room
 {
    private:
    int RoomNum;
    bool status;

    public:
    Suite(double = 0.0, int = 0, bool = false);
    void displayInfo();

};

#endif