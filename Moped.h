#ifndef MOPED_H_
#define MOPED_H_

class Moped {
private:
  string make,
    model,
    year,
    cc;
  char legal;

public:
  void setMake(string);
  void setModel(string);
  void setYear(string);
  void setCc(string);
  void setLegal(char);
  string getMake();
  string getModel();
  string getYear();
  string getCc();
  char getLegal();
}

#endif
