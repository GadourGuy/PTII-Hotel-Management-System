#include "../headers/1-Hotel.hpp"
    // Hotel Constructor
    Hotel :: Hotel (string a, string b, int c, int d) : name(a), location(b), totalRooms(c), availableRooms(d){}

    // Method for booking a room
    void Hotel :: bookRoom (Room& room)
    {
        cout << "which room do you want to book or checkout (Enter Room Number) : " << endl;
        int roomnum;
        cin >> roomnum;
        bool x = room.updateStatus(roomnum);
        if(x) { 
            availableRooms -= 1;
            cout << "Booking confirmed" << endl;
        }
        else if(x) {
            cout << " booking failed";
        }
    };
    // Method for releasing a room
    void Hotel :: releaseRoom(bool x) {

        if(!x) { 
            availableRooms += 1;
            cout << "checkout confirmed";
        }
        else if(x) {
            cout << "checkout failed";
        }

    };

    // Method for Checking out of hotel
    void Hotel :: checkOut(Room &room) {
        cout << "which room do you want to book or checkout : " << endl;
        int roomnum;
        cin >> roomnum;
        bool x = room.updateStatus(roomnum);
        releaseRoom(x);
        
    };

    // A Method that displayes Details of the hotel
    void Hotel :: displayDetails()
    {
        cout << setw(25) << "Hotel name : " << name << endl;
        cout << setw(25) << "Hotel location : "<< location << endl;
        cout << setw(25) << "Hotel total rooms" << totalRooms << endl;
        cout << setw(25) << "Hotel available rooms" << availableRooms << endl;
    };
