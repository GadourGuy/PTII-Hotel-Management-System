#include <iostream>
#include "2-Room.hpp"

class Suite : public Room
 {
    private:
    int RoomNum;
    bool status;

    public:
    void DisplayInfo();

};