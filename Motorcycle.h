#ifndef Motorcycle_h
#define Motorcycle_h

#include <string>
using namespace std;

class Motorcycle
{

  private:
    string make;
    string model;
    int year;
    double mpg;
    int tires;
  
  public:
    void setMake(string);
    void setModel(string);
    void setYear(int);
    void setMPG(double);
    void setTires(int);
    string getMake();
    string getModel();
    int getYear();
    double getMPG();
    int getTires();
    string motorcycleInfo();
  
};

#endif /*Motorcycle_h*/


