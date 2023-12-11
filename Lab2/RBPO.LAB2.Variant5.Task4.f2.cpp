#include <iostream>
module RBPO.LAB2.Variant5.Task4:f2;

namespace RBPO {
	namespace Lab2 {
		namespace Task4 {
			double f2(double x) {
				if (x <= 9.0) {
					return pow(x, 2) - 3 * x + 9;
				}
				else {
					return (1 / (pow(x, 3) + 6));
				}
			}
		}
	}
}