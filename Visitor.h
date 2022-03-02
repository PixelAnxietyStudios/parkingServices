#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

class Visitor
{
    public:
        Visitor() = default;
        Visitor(char, char);
        void setName(string n)
        { name = n; }
        void setAddress(string a)
        { address = a; }
        void setEmail(string e)
        { email = e;}
        void setSide(char s);
        void setAlumni(char a);
        string getName()
        { return name; }
        string getAddress()
        { return address; }
        string getEmail()
        { return email; }
        char getSide()
        { return side; }
        char getAlumni()
        { return alumni; }
        string visitorInfo();
    
    private:
        string name,
            address,
            email;
        char side {'w'};
        bool alumni {false}; 
};

#endif
