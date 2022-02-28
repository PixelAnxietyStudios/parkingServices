#ifndef invoice_h
#define invoice_h

#include <string>

class Invoice
{
private:
  double price {0.0};
  double discount {0.0};
  double service {10.0};
  
public:
  Invoice() = default;
  Invoice(double p, double d, double s) : price{p}, discount{d}, service{s};
  double calcTotalPrice();
  void outputInvoice();
};

#endif /*invoice_h*/
