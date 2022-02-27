#include "Professor.h"
#include <string>

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

  void Professor::setName(string tempName)
  {
    name = tempName;
  }
  
  void Professor::setAddress(string tempAddress)
  {
    address = tempAddress;
  }
  
  void Professor::setEmail(string tempEmail)
  {
    email = tempEmail;
  }
  
  void Professor::setSSN(int tempSSN)
  {
    ssn = tempSSN;
    
  }
  
  void Professor::setDepartment(string tempDepartment)
  {
    department = tempDepartment;
  }
  
  string Professor::getName()
  {
    return name;
    
  }
  
  string Professor::getAddress()
  {
    return address;
    
  }
  
  string Professor::getEmail()
  {
    return email;
    
  }
  
  int Professor::getSSN()
  {
    return ssn;
   
  }
  
  string Professor::getDepartment()
  {
    return department; 
  }
  
