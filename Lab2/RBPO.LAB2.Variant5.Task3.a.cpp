#include <iostream>
module RBPO.LAB2.Variant5.Task3;

namespace RBPO {
	namespace Lab2 {
		namespace Task3 {
			double a(int i) {
				return (pow(-1, i) * ((i + 1) / (pow(3, i) + (pow(2, i)))));
			}
		}
	}
}