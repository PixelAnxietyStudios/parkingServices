// Moped class by Raymond Purdy

#ifndef MOPED_H_
#define MOPED_H_

#include <string>
using namespace std;
class Moped {
private:
  string make {""},
    model {""},
    cc {""};
  int year;
  bool legal {false};
public:
  Moped() = default;
  void setMake(string);
  void setModel(string);
  void setYear(int);
  void setCc(string);
  void setLegal(char);
  string getMake();
  string getModel();
  int getYear();
  string getCc();
  bool getLegal();
  string mopedInfo();
};

#endif
