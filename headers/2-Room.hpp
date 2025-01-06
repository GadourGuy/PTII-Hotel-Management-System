#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;


class Room{
    private:
    string type;
    double price;
    int roomNum;
    bool status;


    public:
    Room(string a, double b, int c);
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
    void displayInfo();

};

class DoubleRoom : public Room
 {
    private:
    int RoomNum;
    bool status;

    public:
    void displayInfo();

};

class Suite : public Room
 {
    private:
    int RoomNum;
    bool status;

    public:
    void displayInfo();

};
