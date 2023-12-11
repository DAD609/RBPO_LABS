#include <iostream>
#define M_PI
module RBPO.LAB2.Variant5.Task2;

namespace RBPO {
	namespace Lab2 {
		namespace Task2 {
			double f1(double x) {
				return (1 - (1 / 4) * (2 * x) + cos(2 * x));
			}
			double f2(double x) {
				if (x <= 9.0) {
					return  (cos(cos(2 * x)) + 9);
				}
				else {
					return (9 - (cos((cos(x))) / (x - 9)));
				}
			}
			double a(int i) { 
				return  (pow(-1, i) * ((i + 1) / (pow(3, i) + (pow(2, i)))));
			}
			double f3(int n) {
				double sum = 0.0;
				int i = 0;
				while (i <= n) {
					sum += a(i);
					i++;
				}
				return sum;
			}
			double f4(double eps) {
				double pred = a(0);
				double sled = a(1);
				double sum = pred + sled;
				int i = 2;
				while (abs(a(i) - a(i - 1)) > eps) {
					sum += a(i);
					i++;
				}
				return sum;
			}
		}
	}
}
