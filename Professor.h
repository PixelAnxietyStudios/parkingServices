#ifndef Professor_h
#define Professor_h

#include <string>
using namespace std;

Class Professor
{
  private:
    string name;
    string address;
    string email;
    int ssn;
    string department;
   
  public:
    void setName(string);
    void setAddress(string);
    void setEmail(string);
    void setSSN(int);
    void setDepartment(string);
    string getName();
    string getAddress();
    string getEmail();
    int getSSN();
    string getDepartment();
  
};

#endif /* Professor_h */
