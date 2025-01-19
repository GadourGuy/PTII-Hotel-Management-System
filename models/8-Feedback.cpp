#include "../headers/8-Feedback.hpp"
#include <iostream>

using namespace std;

// Constructor for Feedback
Feedback::Feedback(const std::string& ID, int rating, const std::string& c, const Customer& customer)
    : feedbackID(ID), customer(customer), rating(rating), comment(c) {}

// Destructor to clean up resources
Feedback::~Feedback() {}

// Method to submit feedback
void Feedback::submitFeedback() {
    cout << "Submitting feedback...\n";
    cout << "Feedback submitted successfully for Customer: "; 
    customer.displayInfo();
}

// Method to display feedback details
void Feedback::displayFeedback() const {
    cout << "Feedback Details:\n";
    cout << "  Feedback ID: " << feedbackID << "\n";
    cout << "  Customer: ";
    customer.displayInfo();
    cout << "  Rating: " << rating << "\n";
    cout << "  Comment: " << comment << "\n";
}

// Method to analyze feedback
void Feedback::analyzeFeedback() const {
    cout << "Analyzing feedback...\n";
    if (rating > 7) {
        cout << "Positive feedback. Keep up the good work!\n";
    } else if (rating >= 3 && rating <= 7) {
        cout << "Neutral feedback. Room for improvement.\n";
    } else {
        cout << "Negative feedback. Immediate action required.\n";
    }
}

// Constructor for RoomFeedback class
RoomFeedback::RoomFeedback(const std::string& feedbackID, int rating, const std::string& comment, 
                           const Customer& customer, const std::string& roomNumber)
    : Feedback(feedbackID, rating, comment, customer), roomNumber(roomNumber) {}

// Override to display room feedback details
void RoomFeedback::displayFeedback() const {
    Feedback::displayFeedback();
    cout << "Room Number: " << roomNumber << "\n";
}

// Constructor for ServiceFeedback class
ServiceFeedback::ServiceFeedback(const std::string& feedbackID, int rating, const std::string& comment, 
                                 const Customer& customer, const std::string& serviceType)
    : Feedback(feedbackID, rating, comment, customer), serviceType(serviceType) {}

// Override to display service feedback details
void ServiceFeedback::displayFeedback() const {
    Feedback::displayFeedback();
    cout << "Service Type: " << serviceType << "\n";
}
