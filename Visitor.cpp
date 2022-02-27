#include "Visitor.h"

void setSide(char s)
{
    if (s == 'w' || s == 'e')
    {
        side = s;
    }
    else
    {
        side = 'w';
    }
}

void setAlumni(char a)
{
    if (a == 'y' || a == 'n')
    {
        alumni = a;
    }
    else
    {
        alumni = 'n';
    }
}
