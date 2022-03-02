//
//  Car.cpp
//  parkingMeters
//
//  Created by Sam Zdziarski on 2/28/22.
//

#include <iostream>
#include "Car.h"
using namespace std;
void Car::setMake(string m) {make = m;}
void Car::setModel(string m) {model = m;}
void Car::setYear(int y) {
    while (y < 0) {
        cout << "Please enter a valid year";
        cin >> y;
    }
}
void Car::setLicensePlate(string l) {licensePlate = l;}
void Car::setDisabled(char c) {
    if (c == 'y') {
        disabled = true;
    } else {
        disabled = false;
    }
}
void Car::setColor(string c) {color = c;}
string Car::getMake() {return make;}
string Car::getModel() {return model;}
int Car::getYear() {return year;}
string Car::getLicensePlate() {return licensePlate;}
bool Car::getDisabled() {return disabled;}
string Car::getColor() {return color;}
string Car::carInfo(){
  string info = "Make: ";
  info.append(make);
  info += "\nModel: ";
  info.append(model);
  info += "\nYear: ";
  info.append(year);
  info += "\nLicense Plate: ";
  info.append(licensePlate);
  switch (disabled){
    case true:
      info += "\nDisabled: yes";
      break;
    case false:
      info += "\nDisabled: no";
  }
  info += "\nColor: ";
  info.append(color);
  return info;
}
