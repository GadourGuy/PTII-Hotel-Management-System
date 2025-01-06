#ifndef FEEDBACK_H
#define FEEDBACK_H

#include <iostream>
#include "3-Customer.hpp"


class Feedback{
    private:
    char* feedbackID;
    int rating;
    char* comment;
    Customer customer;


    public:
    Feedback(char*, int, char*, Customer);
    void processPayment();
    void refundPayment();
    void displayPaymentDetails();

};

#endif