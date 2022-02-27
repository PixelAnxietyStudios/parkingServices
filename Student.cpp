// function definitions for student class
#include <iostream>
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
  camp = campusLocation;
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

char Student::getCampusLocation(){
  return campusLocation;
}
