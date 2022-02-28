// function definitions for student class
#include <iostream>
#include <string>
#include "Moped.h"

using namespace std;

void Moped::setMake(string ma){
  ma = make;
}

void Moped::setModel(string mod){
  mod = model;
}

void Moped::setYear(string y){
  y = year;
}

void Moped::setCc(string c){
  c = cc;
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
