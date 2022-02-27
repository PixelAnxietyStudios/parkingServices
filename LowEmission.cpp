#include "LowEmission.h"

void setElectric(char e)
{
    if (e == 'y' || e == 'n')
    {
        electric = e;
    }
    else
    {
        electric = 'n';
    }
}