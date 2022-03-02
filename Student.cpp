// function definitions for student class
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
    if (campusLocation == true) {
      info += "\nOn Campus: yes";
    } else {
      info += "\nOn campus: no";
    }
  return info;
}
