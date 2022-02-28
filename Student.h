#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
using namespace std;

class Student {
private:
  string name,
    email,
    address,
    driverLicense;
  bool campusLocation {false};

public:
  Student() = default;
  void setName(string);
  void setEmail(string);
  void setAddress(string);
  void setDriverLicense(string);
  void setCampusLocation(char);
  sstring getName();
  string getEmail();
  string getAddress();
  string getDriverLicense();
  bool getCampusLocation();
};

#endif
