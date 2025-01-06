#include "../headers/8-Feedback.hpp"
#include "../headers/3-Customer.hpp"
#include <cstring>

// Constructor definition
Feedback::Feedback(char* ID, int rating, char* comment, Customer customer)
     {
    feedbackID = new char[strlen(ID) + 1];
    strcpy(feedbackID, ID);

    // Deep copy for comment
    this->comment = new char[strlen(comment) + 1];
    strcpy(this->comment, comment);
}

// Method to process payment
void Feedback::processPayment() {
    std::cout << "Processing payment for feedback ID: " << feedbackID << std::endl;
}

// Method to refund payment
void Feedback::refundPayment() {
    std::cout << "Refunding payment for feedback ID: " << feedbackID << std::endl;
}

// Method to display payment details
void Feedback::displayPaymentDetails() {
    std::cout << "Feedback ID: " << feedbackID << std::endl;
    std::cout << "Rating: " << rating << std::endl;
    std::cout << "Comment: " << comment << std::endl;
    customer.displayDetails(); // Assuming Customer has a displayDetails() method
}

// Destructor to clean up dynamic memory
Feedback::~Feedback() {
    delete[] feedbackID;
    delete[] comment;
}
