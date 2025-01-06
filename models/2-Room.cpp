#include "../headers/2-Room.hpp"

// Room constructor
Room::Room(string a, double b, int c, bool d) : type(a), price(b), roomNum(c), status(d) {}

// Function to update room status
bool Room::updateStatus(int roomnum) {
    roomNum = roomnum;
    cout << "Room booking or Room checkout (answer with booking or checkout) ====> ";
    string state;
    cin >> state;

    // Convert state to lowercase
    for (int i = 0; i < state.size(); i++) {
        state[i] = tolower(state[i]);
    }

    if (state == "booking") {
        cout << "Do you want to book this room? (yes/no): ";
        string ans;
        cin >> ans;

        // Convert ans to lowercase
        for (int i = 0; i < ans.size(); i++) {
            ans[i] = tolower(ans[i]);
        }

        if (ans == "yes") {
            status = false; // Room is now occupied
            return true;
        } else if (ans == "no") {
            cout << "Room remains empty.\n";
            return false;
        } else {
            cout << "Error: Invalid input type.\n";
            return false;
        }
    } else if (state == "checkout") {
        cout << "Do you want to checkout from this room? (yes/no): ";
        string ans;
        cin >> ans;

        // Convert ans to lowercase
        for (int i = 0; i < ans.size(); i++) {
            ans[i] = tolower(ans[i]);
        }

        if (ans == "yes") {
            status = true; // Room is now empty
            return true;
        } else if (ans == "no") {
            cout << "Room remains occupied.\n";
            return false;
        } else {
            cout << "Error: Invalid input type.\n";
            return false;
        }
    } else {
        cout << "Error: Invalid state input.\n";
        return false;
    }
}

// Function to display room price
void Room::getPrice() {
    cout << "The price of room " << roomNum << " is " << price << ".\n";
}

// Function to display room information
void Room::displayInfo() {
    cout << setw(15) << "Room number : " << roomNum << endl;
    cout << setw(15) << "Room price : " << price << endl;
    cout << setw(15) << "Room status : ";
    if (status) {
        cout << "empty\n";
    } else {
        cout << "occupied\n";
    }
}

// SingleRoom constructor
SingleRoom::SingleRoom(double b, int c, bool d) : Room("Single", b, c, d) {}

// DoubleRoom constructor
DoubleRoom::DoubleRoom(double b, int c, bool d) : Room("Double", b, c, d) {}

// Suite constructor
Suite::Suite(double b, int c, bool d) : Room("Suite", b, c, d) {}

