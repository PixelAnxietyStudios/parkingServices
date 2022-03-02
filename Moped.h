// Moped class by Raymond Purdy

#ifndef MOPED_H_
#define MOPED_H_

#include <string>
using namespace std;
class Moped {
private:
  string make {""},
    model {""},
    year {""},
    cc {""};
  bool legal {false};
public:
  Moped() = default;
  void setMake(string);
  void setModel(string);
  void setYear(string);
  void setCc(string);
  void setLegal(char);
  string getMake();
  string getModel();
  string getYear();
  string getCc();
  bool getLegal();
  string mopedInfo();
};

#endif
