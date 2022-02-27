#ifndef Professor_h
#define Professor_h

#include <string>
using namespace std;

class Professor
{
  private:
    String name;
    String address;
    String email;
    int ssn;
    std::string department;
   
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
