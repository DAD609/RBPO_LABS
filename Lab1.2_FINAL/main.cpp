
#include <iostream>
using namespace std;

#include <iostream>
#include <string>
    using namespace std;

    unsigned short ReadPersonAge()
    {
        cout << "Input the value of age" << endl;
        unsigned short a;
        cin >> a;
        return a;
    }
    string ReadPersonName()
    {
        cout << "Input the value of name" << endl;
        string a;
        cin >> a;
        return a;
    }
    unsigned short ReadPersonHeight()
    {
        cout << "Input the value of height" << endl;
        unsigned short a;
        cin >> a;
        return a;
    }
    unsigned short ReadPersonWeight()
    {
        cout << "Input the value of weight" << endl;
        unsigned short a;
        cin >> a;
        return a;
    }
    double* ReadPersonSalary()
    {
        cout << "Input the value of salary" << endl;
        double* a = new double[1];
        cin >> * a;
        return a;
    }


    void ReadPersonData(string& a, unsigned short& d, double& e)
    {
        a = ReadPersonName();
        d = ReadPersonAge();
        e = *ReadPersonSalary();
    }
    void ReadPersonData(string& a, unsigned short& d, unsigned short& b, unsigned short& c)
    {
        a = ReadPersonName();
        d = ReadPersonAge();
        b = ReadPersonHeight();
        c = ReadPersonWeight();
    }


    void WritePersonData(const string& a, const string& b, const string& c, const unsigned short* d, string e)
    {
        cout << "Name: " << a << endl;
        cout << "Height: " << b << endl;
        cout << "Weight: " << c << endl;
        cout << "Age: " << * d << endl;
        cout << "Salary: " << e << endl;
    }


    int main()
    {
        string a = "";
        unsigned short d = 0, b = 0, c = 0;
        double e = 0;
        unsigned short l = 0;
        ReadPersonData(a, d, e);
        ReadPersonData(a, d, b, c);
        WritePersonData(a, to_string(b), to_string(c), &d, to_string(e));
        return 0;
    }
