#pragma once
#include <iostream>
#include <string>
using namespace std;
void WritePersonData(const string& n, const string& h, const string& w, const unsigned short* a);
void ReadPersonData1(string& n, unsigned short& a, double& s);
void ReadPersonData2(string& n, unsigned short& a, unsigned short& h1, unsigned short& w);
void ReadPersonSalary(double* s);
void ReadPersonWeight(unsigned short& w);
void ReadPersonHeight();
string ReadPersonName();
unsigned short ReadPersonAge();
extern unsigned short h;
extern string s_toOutPut;