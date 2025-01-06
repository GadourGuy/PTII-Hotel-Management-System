#include <iostream>
#include "models/3-Customer.cpp"
#include "models/4-Staff.cpp"

using namespace std;

int main() {
    // Create a staff member
    Staff staff1("Abdalla Ali", "aliabdalla@graduate.utm.my", "S5678", "Receptionist");

    // Display initial staff info
    cout << "Initial Staff Info:\n";
    staff1.displayInfo();

    // Assign a task to the staff
    cout << "\nAssigning Task...\n";
    staff1.assignTask("Prepare check-in documents for incoming guests.");

    // Update staff info
    cout << "\nUpdating Staff Info...\n";
    staff1.updateInfo("aliabdalla@graduate.utm.my", "Front Desk Manager");

    // Display updated staff info
    cout << "\nUpdated Staff Info:\n";
    staff1.displayInfo();

    return 0;
}