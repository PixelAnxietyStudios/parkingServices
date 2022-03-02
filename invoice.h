#ifndef invoice_h
#define invoice_h
#include <string>
using namespace std;

class Invoice
{
private:
  double price {0.0};
  double discount {0.0};
  double serviceFee {10.0};
  
public:
    Invoice() = default;
    Invoice(double p, double d, double s) : price{p}, discount{d}, serviceFee{s} {};
    void setPrice(double);
    void setDiscount(double);
    double getPrice();
    double getDiscount();
    double calcTotalPrice();
    void outputInvoice(string, string);
};

#endif /*invoice_h*/
