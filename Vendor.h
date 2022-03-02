//
//  Vendor.h
//  parkingMeters
//
//  Created by Sam Zdziarski on 2/28/22.
//

#ifndef Vendor_h
#define Vendor_h
#include <string>
using namespace std;

class Vendor {
private:
    string name = "";
    string email = "";
    string address = "";
    string companyName = "";
    string product = "";
public:
    Vendor() = default;
    void setName(string);
    void setEmail(string);
    void setAddress(string);
    void setCompanyName(string);
    void setProduct(string);
    string getName();
    string getEmail();
    string getAddress();
    string getCompanyName();
    string getproduct();
    string vendorInfo();
};


#endif /* Vendor_h */
