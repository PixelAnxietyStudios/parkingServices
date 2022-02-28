#ifndef STUDENT_H_
#define STUDENT_H_

class Student {
private:
  std::string name,
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
  std::string getName();
  std::string getEmail();
  std::string getAddress();
  std::string getDriverLicense();
  char getCampusLocation();
}

#endif
