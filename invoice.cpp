
#include <iomanip>
#include <iostream>
#include <string>
#include "Invoice.h"
using namespace std;


void Invoice::setPrice(double p) {price = p;}
void Invoice::setDiscount(double d) {discount = d;}
double Invoice::getPrice() {return price;}
double Invoice::getDiscount() {return discount;}

double Invoice::calcTotalPrice(){
  
  price = (price + serviceFee)* discount;
  return price;
}

void Invoice::outputInvoice(string permitString, string vehicleString){
  
    cout << permitString << endl;
    cout << vehicleString << endl;
}
  
