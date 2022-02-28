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
