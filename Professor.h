#ifndef Professor_h
#define Professor_h

#include <string>

class Professor
{
  private:
    std::string name;
    std::string address;
    std::string email;
    int ssn;
    std::string department;
   
  public:
    void setName(string);
    void setAddress(string);
    void setEmail(string);
    void setSSN(int);
    void setDepartment(string);
    std::string getName();
    std::string getAddress();
    std::string getEmail();
    int getSSN();
    std::string getDepartment();
  
};

#endif /* Professor_h */
