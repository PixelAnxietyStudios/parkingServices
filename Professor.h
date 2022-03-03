#ifndef Professor_h
#define Professor_h

#include <string>
using namespace std;

class Professor
{
  private:
    string name;
    string address;
    string email;
    string ssn;
    string department;
   
  public:
    void setName(string);
    void setAddress(string);
    void setEmail(string);
    void setSSN(string);
    void setDepartment(string);
    string getName();
    string getAddress();
    string getEmail();
    string getSSN();
    string getDepartment();
  
};

#endif /* Professor_h */
