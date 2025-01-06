#ifndef SERVICE_HPP
#define SERVICE_HPP

#include <string>

class Service {
public:
    Service(const std::string& serviceID, const std::string& type, double price, const std::string& description);



    void bookService();                
    void cancelService();           
    void displayServiceDetails() const; 

private:
    std::string serviceID;  
    std::string type;       
    double price;           
    std::string description; 
};

#endif 