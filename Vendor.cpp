//
//  Vendor.cpp
//  parkingMeters
//
//  Created by Sam Zdziarski on 2/28/22.
//

#include "Vendor.h"
#include <string>

void Vendor::setName(string n) {name = n;}
void Vendor::setEmail(string e) {email = e;}
void Vendor::setAddress(string a) {address = a;}
void Vendor::setCompanyName(string cn) {companyName = cn;}
void Vendor::setProduct(string p) {product = p;}
string Vendor::getName() {return name;}
string Vendor::getEmail() {return email;}
string Vendor::getAddress() {return address;}
string Vendor::getCompanyName() {return companyName;}
string Vendor::getproduct() {return product;}
string Vendor::vendorInfo(){
  string info = "Name: ";
  info.append(name);
  info += "\nEmail: ";
  info.append(email);
  info += "\nAddress: ";
  info.append(address);
  info += "\nCompany Name: ";
  info.append(companyName);
  info += "\nProduct/Service: ";
  info.append(product);
  }
