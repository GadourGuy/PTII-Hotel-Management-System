#include <iostream>

class  Staff{
    private:
    char* name;
    char* staffID;
    int contactInfo;
    char* Position;


    public:
    Staff(char *, char* , int, char*);
    void UpdateStaffInfo();
    void displayDetails();

};