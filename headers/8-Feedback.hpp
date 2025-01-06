#ifndef FEEDBACK_HPP
#define FEEDBACK_HPP

#include "3-Customer.hpp"
#include <string>

class Feedback {
public:

    Feedback(char* ID, int rating, char* comment, const Customer& customer);
    
    
    ~Feedback();

  
    void submitFeedback();       
    void displayFeedback() const; 
    void analyzeFeedback() const; 

private:
    char* feedbackID;            
    Customer customer;          
    int rating;  
    char* comment;                
};

#endif 