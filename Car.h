//
//  Car.h
//  parkingMeters
//
//  Created by Sam Zdziarski on 2/28/22.
//

#ifndef Car_h
#define Car_h
#include <string>
using namespace std;
class Car {
private:
    string make = "";
    string model = "";
    int year = 0;
    string licensePlate = "";
    bool disabled = false;
    string color = "";
public:
    Car() = default;
    void setMake(string);
    void setModel(string);
    void setYear(int);
    void setLicensePlate(string);
    void setDisabled(char);
    void setColor(string);
    string getMake();
    string getModel();
    int getYear();
    string getLicensePlate();
    bool getDisabled();
    string getColor();
};

#endif /* Car_h */
