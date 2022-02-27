#ifndef STUDENT_H_
#define STUDENT_H_

class Student {
private:
  string name,
    email,
    address,
    driverLicense;
  char campusLocation;

public:
  void setName(string);
  void setEmail(string);
  void setAddress(string);
  void setDriverLicense(string);
  void setCampusLocation(char);
  string getName();
  string getEmail();
  string getAddress();
  string getDriverLicense();
  char getCampusLocation();
}

#endif
