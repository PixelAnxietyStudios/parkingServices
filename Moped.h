#ifndef MOPED_H_
#define MOPED_H_

class Moped {
private:
  std::string make,
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
  std::string getMake();
  std::string getModel();
  std::string getYear();
  std::string getCc();
  char getLegal();
}

#endif
