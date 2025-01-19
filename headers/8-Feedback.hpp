#ifndef FEEDBACK_HPP
#define FEEDBACK_HPP

#include "3-Customer.hpp"
#include <string>

class Feedback {
public:
    Feedback(const std::string& feedbackID, int rating, const std::string& comment, const Customer& customer);
    virtual ~Feedback();

    virtual void submitFeedback();       
    virtual void displayFeedback() const; 
    virtual void analyzeFeedback() const; 

protected:
    std::string feedbackID;            
    Customer customer;          
    int rating;  
    std::string comment;                
};

// Derived Class: RoomFeedback
class RoomFeedback : public Feedback {
public:
    RoomFeedback(const std::string& feedbackID, int rating, const std::string& comment, 
                 const Customer& customer, const std::string& roomNumber);
    
    void displayFeedback() const override; // Override for specific behavior

private:
    std::string roomNumber; // Room number related to feedback
};

// Derived Class: ServiceFeedback
class ServiceFeedback : public Feedback {
public:
    ServiceFeedback(const std::string& feedbackID, int rating, const std::string& comment, 
                    const Customer& customer, const std::string& serviceType);
    
    void displayFeedback() const override; // Override for specific behavior

private:
    std::string serviceType; // Type of service related to feedback
};

#endif 
