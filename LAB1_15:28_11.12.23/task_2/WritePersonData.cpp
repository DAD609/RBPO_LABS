#include "Header.h"
string s_toOutPut;
void WritePersonData(const string& n, const string& h, const string& w, const unsigned short* a)
{
    cout << endl << "���: " << n << endl <<
        "����: " << h << endl <<
        "���: " << w << endl <<
        "�������: " << *a << endl <<
        "����� �����:" << s_toOutPut << endl;
}