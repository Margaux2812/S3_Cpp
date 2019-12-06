#include <iostream>
#include <vector>
#include <stdlib.h>
#include <ctype.h>

template<typename T>
const T &getMinimum(const T &a, const T &b){
	return a < b ? a : b;
}
template <>
const char &getMinimum(const char &a, const char &b){
	return toupper(a) < toupper(b) ? a : b;
}

int main(){

	std::cout << "La fonction avec deux entiers :" << std::endl;
	std::cout << getMinimum(79, 67) << std::endl;
	std::cout << "La fonction avec deux float :" << std::endl;
	std::cout << getMinimum(79., 67.) << std::endl;
	std::cout << "La fonction avec deux chars :" << std::endl;
	std::cout << getMinimum('a', 'z') << std::endl;
	std::cout << "La fonction avec un float et un int :" << std::endl;
	std::cout << getMinimum<double>(7.9, 67) << std::endl;
	std::cout << "La fonction avec deux chars :" << std::endl;
	std::cout << getMinimum('a', 'Z') << std::endl;
	return 1;
}