// function definitions for student class
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

void Student::setName(string n){
  n = name;
}

void Student::setEmail(string e){
  e = email;
}

void Student::setAddress(string add){
  add = address;
}

void Student::setDriverLicense(string license){
  license = driverLicense;
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
