#include "Header.h"
void ReadPersonData2(string& n, unsigned short& a, unsigned short& h1, unsigned short& w)
{
    n = ReadPersonName();
    a = ReadPersonAge();
    ReadPersonHeight();
    h1 = h;
    ReadPersonWeight(w);
}