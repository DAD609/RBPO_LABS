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
        cout << "Класс комплексных чисел: a = " << a << " Действительная часть = " << a.Re() << " Мнимая часть = " << a.Im() << " Модуль = " << a.Mod() << " Аргумент = " << a.Arg() << endl;
        cout << "Встроенный класс комплексных чисел: a = " << aC << " Действительная часть = " << aC.real() << " Мнимая часть = " << aC.imag() << " Модуль = " << abs(aC) << " Аргумент = " << arg(aC) << endl;
        cout << "Класс комплексных чисел: a+b = " << a << " + " << b << " = " << a + b << endl;
        cout << "Встроенный класс комплексных чисел: a+b = " << aC << " + " << bC << " = " << aC + bC << endl;
        cout << "Класс комплексных чисел: a-b = " << a << " - " << b << " = " << a - b << endl;
        cout << "Встроенный класс комплексных чисел: a-b = " << aC << " - " << bC << " = " << aC - bC << endl;
        cout << "Класс комплексных чисел: a*b = " << a << " * " << b << " = " << a * b << endl;
        cout << "Встроенный класс комплексных чисел: a*b = " << aC << " * " << bC << " = " << aC * bC << endl;
        cout << "Класс комплексных чисел: a/b = " << a << " / " << b << " = " << a / b << endl;
        cout << "Встроенный класс комплексных чисел: a/b = " << aC << " / " << bC << " = " << aC / bC << endl;
        cout << "Класс комплексных чисел: a+c = " << a << " + " << c << " = " << a + c << endl;
        cout << "Встроенный класс комплексных чисел: a+c = " << aC << " + " << c << " = " << aC + c << endl;
        cout << "Класс рациональных чисел: num1+num2 = " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        cout << "Класс рациональных чисел: num1-num2 = " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        cout << "Класс рациональных чисел: num1*num2 = " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        cout << "Класс рациональных чисел: num1/num2 = " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        cout << "f(a) для класса комплексных чисел = " << f(a) << endl;
        cout << "f(num2) для класса рациональных чисел = " << f(num2) << endl;
        cout << "f(c) для вещественного числа = " << f(c) << endl;

	return 0;
}