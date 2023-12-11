#include "Header.h"
string s_toOutPut;
void WritePersonData(const string& n, const string& h, const string& w, const unsigned short* a)
{
    cout << endl << "иМя: " << n << endl <<
        "Рост: " << h << endl <<
        "Вес: " << w << endl <<
        "Возраст: " << *a << endl <<
        "Зараб плата:" << s_toOutPut << endl;
}