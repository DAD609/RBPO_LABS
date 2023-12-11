#include <iostream>
#define M_PI
module RBPO.LAB2.Variant5.Task1;

namespace RBPO {
	namespace Lab2 {
		namespace Task1 {
			double f1(double x) {
				return (1 - (1/4) * (2 * x) + cos(2 * x));
			}
			double f2(double x) {
				return (x <= 9.0) ? (cos(cos(2 * x)) + 9) : (9 - (cos((cos(x))) / (x - 9)));
			}
			double a(int i) {
				return  (pow(-1, i) * ((i + 1) / (pow(3, i) + (pow(2, i)))));
			}
			double f3(int n) {
				double sum = 0.0;
				for (int i = 0; i <= n; i++) {
					sum += a(i);
				}
				return sum;
			}
			double f4(double eps) {
				double pred = a(0);
				double sled = a(1);
				double sum = pred+sled;
				for (int i = 2; abs(a(i) - a(i - 1)) > eps; i++) {
					sum += a(i);
				}
				return sum;
			}
		}
	}
}
