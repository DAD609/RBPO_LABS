

#include "Header.h"

int main()
{

    unsigned short w = 0, a = 0, h1 = 0;
    double s = 0;
    string n = "";
    ReadPersonData1(n, a, s);
    ReadPersonData2(n, a, h1, w);
    s_toOutPut = to_string(s);
    WritePersonData(n, to_string(h), to_string(w), &a);
    return 0;
}