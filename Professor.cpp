#include "Professor.h"
#include <iostream>
using namespace std;

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
    
    while (tempSSN < 0){
      cout << "Please enter a valid input" << endl;
      cin >> tempSSN;
    }
      
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
  
