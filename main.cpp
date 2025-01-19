#include <iostream>
#include <vector>
#include <memory>
#include "models/1-Hotel.cpp"
#include "models/2-Room.cpp"
#include "models/3-Customer.cpp"
#include "models/4-Staff.cpp" // Include Staff implementation
#include "models/5-Booking.cpp"
#include "models/6-Payment.cpp"
#include "models/7-Service.cpp" // Include Service implementation
#include "models/8-Feedback.cpp"

using namespace std;

int main() {
    // Create hotel instance
    Hotel myHotel("Luxury Stay", "New York", 10);
    
    // Create rooms with appropriate parameters
    Room room101("Deluxe", 150.0, 101, true);  // Room type, price, room number, status
    Room room102("Suite", 200.0, 102, true);   // Room type, price, room number, status

    // Add rooms to hotel
    myHotel.addRoom(room101);
    myHotel.addRoom(room102);

    // Create a customer
    Customer customer("Alice", "alice@example.com", "C001");

    // Create a booking
    Booking booking("B001", customer, room101, "2025-01-20", "2025-01-25");

    // Process payment for the booking
    Payment payment("P001", booking, booking.calculateTotal(), "Credit Card", "Pending");
    
    // Display booking details
    booking.displayBookingDetails();

    // Process payment
    if (payment.processPayment()) {
        cout << "Payment processed successfully.\n";
    }

    // Submit feedback for the booking
    Feedback feedback("F001", 9, "Excellent stay!", customer);
    feedback.submitFeedback();

    // Display feedback details
    feedback.displayFeedback();
    feedback.analyzeFeedback();

    // Refund payment
    payment.refundPayment();

    // Create a vector for services
    vector<shared_ptr<Service>> services;

    // Add different services
    services.push_back(make_shared<SpaService>("S001", 50.0, "Relaxing massage", 60));
    services.push_back(make_shared<RoomService>("R001", 20.0, "Dinner delivery", "Vegetarian"));

    // Display details of all services
    cout << "\nAvailable Services:\n";
    for (const auto& service : services) {
        service->displayServiceDetails();
        cout << "Total Cost: $" << service->calculateTotalCost() << "\n\n";
    }

    // Book services for the customer
    cout << "Booking services for customer " << customer.getName() << ":\n";
    for (const auto& service : services) {
        service->bookService(); // Book each service for the customer
        cout << "- " << service->getServiceID() << " booked for a total cost of $" << service->calculateTotalCost() << "\n";
    }

    // Simulate service cancellation
    services[0]->cancelService(); // Cancel the first service (Spa)

    // Create staff members
    Staff staff1("John Doe", "+123456789", "S001", "Manager");
    Staff staff2("Jane Smith", "+987654321", "S002", "Receptionist");

    // Display staff information
    cout << "\nStaff Information:\n";
    staff1.displayInfo();
    staff2.displayInfo();

    // Assign tasks to staff
    staff1.assignTask("Prepare for the upcoming event.");
    staff2.assignTask("Manage the front desk operations.");

    return 0;
}
