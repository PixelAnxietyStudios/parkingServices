#include "invoice.h"
#include <iomanip>
#include <iostream>

cout << fixed << setPrecision(2);
double invoice::calcTotalPrice(){
  
  price = (price + service)* discount;
  return price;
}

void invoice::outputInvoice(){
  
  cout << "$" << price << endl;

}
  