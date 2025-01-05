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
    Room(string = "", double = 0.0, int = 0)
    {};
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
