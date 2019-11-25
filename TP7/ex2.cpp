#include <iostream>
#include <vector>
#include <string>

int main(){
	
	std::vector<std::string> vec1{"Test"};
	std::vector<std::string> vec2{"Swap"};

	vec1.swap(vec2);

	std::cout << vec1.at(0) << std::endl;

	return 1;
}