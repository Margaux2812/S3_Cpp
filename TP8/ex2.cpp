#include <iostream>
#include <vector>
#include <stdlib.h>
#include <ctype.h>
#include "point3D.hpp"

int main(){

	Point3Df a;
	Point3Di b(3, 5, 4);
	a=b;
	std::cout << "a = b => " << a << std::endl;
	a = a+3;
	std::cout << "a = a + 3 => " << a << std::endl;
	a = a+b;
	std::cout << "a = a + b => " << a << std::endl;
	return 1;
}