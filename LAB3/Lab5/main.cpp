#include <iostream>
#include <complex>
#define _SILENCE_NONFLOATING_COMPLEX_DEPRECATION_WARNING
import Math;
using namespace std;
int main()
{
setlocale(LC_ALL, "ru");
complex<double> aC(0.0, 1);
complex<double> bC(-1.5, -2.3);
	Complex a(1, 2);
	Complex b(3, 4);
		Rational num1(1, 2);
		Rational num2(-1, -2);
		double c = 0.5;
        cout << "����� ����������� �����: a = " << a << " �������������� ����� = " << a.Re() << " ������ ����� = " << a.Im() << " ������ = " << a.Mod() << " �������� = " << a.Arg() << endl;
        cout << "���������� ����� ����������� �����: a = " << aC << " �������������� ����� = " << aC.real() << " ������ ����� = " << aC.imag() << " ������ = " << abs(aC) << " �������� = " << arg(aC) << endl;
        cout << "����� ����������� �����: a+b = " << a << " + " << b << " = " << a + b << endl;
        cout << "���������� ����� ����������� �����: a+b = " << aC << " + " << bC << " = " << aC + bC << endl;
        cout << "����� ����������� �����: a-b = " << a << " - " << b << " = " << a - b << endl;
        cout << "���������� ����� ����������� �����: a-b = " << aC << " - " << bC << " = " << aC - bC << endl;
        cout << "����� ����������� �����: a*b = " << a << " * " << b << " = " << a * b << endl;
        cout << "���������� ����� ����������� �����: a*b = " << aC << " * " << bC << " = " << aC * bC << endl;
        cout << "����� ����������� �����: a/b = " << a << " / " << b << " = " << a / b << endl;
        cout << "���������� ����� ����������� �����: a/b = " << aC << " / " << bC << " = " << aC / bC << endl;
        cout << "����� ����������� �����: a+c = " << a << " + " << c << " = " << a + c << endl;
        cout << "���������� ����� ����������� �����: a+c = " << aC << " + " << c << " = " << aC + c << endl;
        cout << "����� ������������ �����: num1+num2 = " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        cout << "����� ������������ �����: num1-num2 = " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        cout << "����� ������������ �����: num1*num2 = " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        cout << "����� ������������ �����: num1/num2 = " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        cout << "f(a) ��� ������ ����������� ����� = " << f(a) << endl;
        cout << "f(num2) ��� ������ ������������ ����� = " << f(num2) << endl;
        cout << "f(c) ��� ������������� ����� = " << f(c) << endl;

	return 0;
}