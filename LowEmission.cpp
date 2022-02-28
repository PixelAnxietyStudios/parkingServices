#include "LowEmission.h"

void LowEmission::setElectric(char e)
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
