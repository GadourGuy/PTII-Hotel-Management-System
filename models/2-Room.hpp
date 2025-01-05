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
    Room(string = "", double = 0.0, int = 0)
    {};
    bool updateStatus(int);
    void getPrice();
    virtual void displayInfo();

};