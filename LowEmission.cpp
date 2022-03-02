#include "LowEmission.h"

LowEmission::LowEmission(char e, double m)
{
    setElectric(e);
    setMiles(m);
}

void LowEmission::setElectric(char e)
{
    if (e == 'y' || e == 'n')
        { electric = true;}
}

void LowEmission::setMiles(double m)
{
    if (m > 0)
        { miles = m;}
}

// returns a string containing all the nformation provided  by the user with labels
// pass this into invoice to print it
string LowEmission::lowEmissionInfo(){
  string info = "Make: ";
  info.append(make);
  info += "\nModel: ";
  info.append(model);
  info += "\nYear: ";
  info.append(year);
  info += "\nCC: ";
  info.append(cc);
  switch (electric){
    case true:
      info += "\nElectric Vehicle: yes";
      break;
    case false:
      info += "\nElectric Vehicle: no";
  }
   info += "\nMiles: ";
   info.append(miles);
  return info;
}
