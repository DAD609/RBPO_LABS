#include <iostream>
#define M_PI
module RBPO.LAB2.Variant5.Task4:f1;

namespace RBPO {
	namespace Lab2 {
		namespace Task4 {
			double f1(double x) {
				return (1 - (1 / 4) * (2 * x) + cos(2 * x));
			}
		}
	}
}