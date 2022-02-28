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
