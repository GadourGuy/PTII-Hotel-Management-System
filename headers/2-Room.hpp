#include <iostream>


class Room{
    private:
    char* type;
    int price;
    int roomNum;
    bool status;


    public:
    Room(char *,int, int, bool);
    void updateStatus();
    void getPrice();
    void displayPrice();

};