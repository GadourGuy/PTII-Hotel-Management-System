#include "../headers/8-Feedback.hpp"
#include <iostream>
#include <cstring>

using namespace std;

// Constructor for Feedback
Feedback::Feedback(char* ID, int rating, char* c, const Customer& customer)
    : customer(customer), rating(rating) { // Use initializer list for `customer` and `rating`
    feedbackID = new char[strlen(ID) + 1];
    strcpy(feedbackID, ID);

    comment = new char[strlen(c) + 1];
    strcpy(comment, c);
}

// Destructor to clean up memory
Feedback::~Feedback() {
    delete[] feedbackID;
    delete[] comment;
}

// Method to submit feedback
void Feedback::submitFeedback() {
    cout << "Submitting feedback...\n";
    cout << "Feedback submitted successfully for Customer: "; 
    customer.displayInfo();

}

// Method to display feedback details
void Feedback::displayFeedback() const {
    cout << "Feedback Details:\n";
    cout << "Feedback ID: " << feedbackID << "\n";
    cout << "Customer: ";
    customer.displayInfo();
    cout << endl;
    cout << "Rating: " << rating << "\n";
    cout << "Comment: " << comment << "\n";
}

// Method to analyze feedback
void Feedback::analyzeFeedback() const {
    cout << "Analyzing feedback...\n";
    if (rating > 4) {
        cout << "Positive feedback. Keep up the good work!\n";
    } else if (rating >= 3) {
        cout << "Neutral feedback. Room for improvement.\n";
    } else {
        cout << "Negative feedback. Immediate action required.\n";
    }
}