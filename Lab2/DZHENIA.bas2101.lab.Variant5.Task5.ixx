export module RBPO.LAB2.Variant5.Task5;
#define M_PI
import <cmath>;

export namespace RBPO {
	namespace Lab2 {
		namespace Task5 {
			double f1(double x);
			double f2(double x);
			double a(int i);
			double f3(int n);
			double f4(double eps);
		}
	}
}

module:private;
double RBPO::Lab2::Task5::f1(double x) {
	return (1 - (1 / 4) * (2 * x) + cos(2 * x));
}
double RBPO::Lab2::Task5::f2(double x) {
	if (x <= 9.0) {
		return  (cos(cos(2 * x)) + 9);
	}
	else {
		return (9 - (cos((cos(x))) / (x - 9)));
	}
}
double RBPO::Lab2::Task5::a(int i) {
	 return (pow(-1, i) * ((i + 1) / (pow(3, i) + (pow(2, i)))));
}
double RBPO::Lab2::Task5::f3(int n) {
	double sum = 0.0;
	for (int i = 0; i <= n; i++) {
		sum += a(i);
	}
	return sum;
}
double RBPO::Lab2::Task5::f4(double eps) {
	double prev = a(0);
	double next = a(1);
	double sum = prev + next;
	for (int i = 2; abs(a(i) - a(i - 1)) > eps; i++) {
		sum += a(i);
	}
	return sum;
}