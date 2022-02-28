#include "Visitor.h"

void Visitor::setSide(char s)
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

void Visitor::setAlumni(char a)
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
