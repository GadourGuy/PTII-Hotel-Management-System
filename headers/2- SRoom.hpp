#include <iostream>
#include "2-Room.hpp"

class SingleRoom : public Room
 {
    private:
    int RoomNum;
    bool status;

    public:
    void DisplayInfo();

};