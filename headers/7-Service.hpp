#include <iostream>

class Service{
    private:
    char* description;
    char* serviceID;
    int price;
    char* type;


    public:
    Service(char* , char*, int, char*);
    void bookService();
    void cancelService();
    void displayServiceDetails();

};