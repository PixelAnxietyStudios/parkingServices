// moped function class definitions by Raymond Purdy
#include <iostream>
#include <string>
#include "Moped.h"

using namespace std;

void Moped::setMake(string ma){
  make.assign(ma);
}

void Moped::setModel(string mod){
  model.assign(mod);
}

void Moped::setYear(string y){
  year.assign(y);
}

void Moped::setCc(string c){
  cc.assign(c);
}

void Moped::setLegal(char l){
  if (l == 'y' || l == 'Y')
  { legal = true; }
  else
  { legal = false; }
}

string Moped::getMake(){
  return make;
}

string Moped::getModel(){
  return model;
}

string Moped::getYear(){
  return year;
}

string Moped::getCc(){
  return cc;
}

bool Moped::getLegal(){
  return legal;
}

// returns a string containing all the nformation provided  by the user with labels
// pass this into invoice to print it
string Moped::MopedInfo(){
  string info = "Make: ";
  info.append(make);
  info += "\nModel: ";
  info.append(model);
  info += "\nYear: ";
  info.append(year);
  info += "\nCC: ";
  info.append(cc);
  switch (legal){
    case true:
      info += "\nStreet Legal: yes";
      break;
    case false:
      info += "\nStreet Legal: no";
  }
  return info;
}

