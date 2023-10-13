#include "Header.h"
void ReadPersonData(string& n, unsigned short& a, double& s)
{
    n = ReadPersonName();
    a = ReadPersonAge();
    ReadPersonSalary(&s);
}
void ReadPersonData(string& n, unsigned short& a, unsigned short& h1, unsigned short& w)
{
    n = ReadPersonName();
    a = ReadPersonAge();
    ReadPersonHeight();
    h1 = h;
    ReadPersonWeight(w);
}