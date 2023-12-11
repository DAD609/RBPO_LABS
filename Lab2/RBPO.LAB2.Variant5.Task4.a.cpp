#include <iostream>
module RBPO.LAB2.Variant5.Task4:a;

namespace RBPO {
	namespace Lab2 {
		namespace Task4 {
			double a(int i) {
				return  (pow(-1, i) * ((i + 1) / (pow(3, i) + (pow(2, i)))));
			}
		}
	}
}