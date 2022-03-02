#include "Visitor.h"


Visitor::Visitor(char s, char a)
{
    setSide(s);
    setAlumni(a);
}

void Visitor::setSide(char s)
{
    if (s == 'w' || s == 'e')
    {
        side = s;
    }
}

void Visitor::setAlumni(char a)
{
    if (a == 'y' || a == 'n')
        { alumni = true;}
}

string Visitor::visitorInfo(){
  string info = "Name: ";
  info.append(name);
  info += "\nEmail: ";
  info.append(email);
  info += "\nAddress: ";
  info.append(address);
  info += "\nSide of Campus: ";
  info.append(side);
  switch (alumni){
    case true:
      info += "\nAlumni: yes";
      break;
    case false:
      info += "\nAlumni: no";
  }
  return info;
}
