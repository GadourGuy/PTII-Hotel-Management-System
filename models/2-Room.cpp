#include "../headers/2-Room.hpp"

<<<<<<< HEAD
Room :: Room (string a, double b, int c):type(a),price(b),roomNum(c),status(false){}
=======
    Room :: Room (string a, double b, int c, bool d):type(a),price(b),roomNum(c),status(d){}
>>>>>>> 4fd81f0b1c1cb6bd60c4f01ccfb5d557ea226f6f

bool Room :: updateStatus(int roomnum) {   
    roomNum = roomnum;
    cout<< "Room booking or Room checkout (answer with booking or checkout) ====>  ";
    string state;
    cin >> state;
    for(int i = 0; i < state.size() ; i++){
        state[i]=tolower(state[i]);
    }
    if(state == "booking")
    {
    string ans;
    cout << "Do you want to book this room?";
    cin >> ans;
    for(int i = 0; i < ans.size() ; i++){
        ans[i]=tolower(ans[i]);
    }
    if(ans == "yes")
    {
        status == false;
        return true;
    }
    else if(ans == "no")
    {
        status = true;
        cout << "Room remains empty";
        return false;
    }
    else
    {
        cout << "Error invalid input type" ;
        return false;
    }
    }
    else if(state == "checkout")
    {
    string ans;
    cout << "Do you want to checkout from this room?";
    cin >> ans;
    for(int i = 0; i < ans.size() ; i++){
        ans[i]=tolower(ans[i]);
    }
    if(ans == "yes")
    {
        status == true;
        return false;
    }
    else if(ans == "no")
    {
        status = false;
        cout << "Room remains occupied";
        return true;
    }
    else
    {
        cout << "Error invalid input type" ;
        return true;
    }
    }
        return false;
    }


    void Room :: getPrice()
    {
        cout << "the price of room "<< roomNum << " is " << price;
    };

    void Room :: displayInfo()
    {
        cout<< setw(15) << "Room number : "<<roomNum<<endl;
        cout << setw(15)<< "Room price : "<<price<<endl;
        cout << setw(15)<< "Room status : ";
        if(status)
        {
            cout<<"empty";
        }
        else
        {
            cout<<"Occupied";
        }
    };
<<<<<<< HEAD

void SingleRoom :: displayInfo()
=======
//single room
SingleRoom :: SingleRoom ( double b, int c, bool d) : Room("Single", b, c, d){}

    void SingleRoom :: displayInfo()
>>>>>>> 4fd81f0b1c1cb6bd60c4f01ccfb5d557ea226f6f
{
    Room :: displayInfo();
};

<<<<<<< HEAD

void DoubleRoom :: displayInfo()
=======
//Double room
DoubleRoom :: DoubleRoom ( double b, int c, bool d) : Room("Double", b, c, d){}

    void DoubleRoom :: displayInfo()
>>>>>>> 4fd81f0b1c1cb6bd60c4f01ccfb5d557ea226f6f
{
    Room :: displayInfo();
};

<<<<<<< HEAD
void Suite :: displayInfo()
{
    Room :: displayInfo();
};
=======
//suite
Suite :: Suite ( double b, int c, bool d) : Room("Suite", b, c, d){}
    void Suite :: displayInfo()
{
    Room :: displayInfo();
};
>>>>>>> 4fd81f0b1c1cb6bd60c4f01ccfb5d557ea226f6f
