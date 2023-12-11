#include "Header.h"
void ReadPersonData1(string& n, unsigned short& a, double& s)
{
    n = ReadPersonName();
    a = ReadPersonAge();
    ReadPersonSalary(&s);
}
