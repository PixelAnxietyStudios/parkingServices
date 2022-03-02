// function definitions for student class by Raymond Purdy
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

void Student::setName(string n){
  name.assign(n);
}

void Student::setEmail(string e){
email.assign(e);
}

void Student::setAddress(string add){
  address.assign(add);
}

void Student::setDriverLicense(string license){
  driverLicense.assign(license);
}

void Student::setCampusLocation(char camp){
  if (camp == 'y' || camp == 'Y')
    { campusLocation = true; }
  else
  { campusLocation = false; }
}

string Student::getName(){
  return name;
}

string Student::getEmail(){
  return email;
}

string Student::getAddress(){
  return address;
}

string Student::getDriverLicense(){
  return driverLicense;
}

bool Student::getCampusLocation(){
  return campusLocation;
}

string Student::studentInfo(){
  string info = "Name: ";
  info.append(name);
  info += "\nEmail: ";
  info.append(email);
  info += "\nAddress: ";
  info.append(address);
  info += "\nDriver's License Number: ";
  info.append(driverLicense);
  switch (campusLocation){
    case true:
      info += "\nOn Campus: yes";
      break;
    case false:
      info += "\nOn campus: no";
  }
  return info;
}
