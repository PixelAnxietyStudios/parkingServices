#include "Motorcycle.h"
#include <iostream>
using namespace std;

void Motorcycle::setMake(string tempMake){
  make = tempMake;
}

void Motorcycle::setModel(string tempModel){
  model = tempModel;
}

void Motorcycle::setYear(int tempYear){
  
  while (tempYear < 0){
    cout << "Please enter a valid input" << endl;
    cin >> tempYear;
  }
  year = tempYear;
}

void Motorcycle::setMPG(double tempMPG){
  
  while (tempMPG < 0){
    cout << "Please enter a valid input" << endl;
    cin >> tempMPG;
  }
  mpg = tempMPG; 
}

void Motorcycle::setTires(int tempTires){
  
  while (tempTires < 0){
    cout << "Please enter a valid input" << endl;
    cin >> tempTires;
  }
  tires = tempTires;
}

string Motorcycle::getMake(){
  return make; 
}

string Motorcycle::getModel(){
  return model;
}

int Motorcycle::getYear(){
  return year;
}

double Motorcycle::getMPG(){
  return mpg;
}

int Motorcycle::getTires(){
  return tires;
}

string Motorcycle::motorcycleInfo(){
  string info = "Make: ";
  info.append(make);
  info += "\nModel: ";
  info.append(model);
  info += "\nYear: ";
  info.append(year);
  info += "\nMPG: ";
  info.append(MPG);
  info += "\nTires: ";
  info.append(tires);
  return info;
}
