#include <iostream>
#include <vector>

bool getEtat(std::vector<int> &vec){
	return vec.empty();
}

int getSize(std::vector<int> &vec){
	return vec.size();
}

int getCapacity(std::vector<int> &vec){
	return vec.capacity();
}

void displayData(std::vector<int> &vec){
	std::cout << "It has :" << std::endl;
	for(int n : vec)
		std::cout << n << std::endl;
}


int main(){
	
	std::vector<int> vec;

	std::cout << "The vector emptyness is " << getEtat(vec) << std::endl;
	std::cout << "The vector's size is " << getSize(vec) << std::endl;
	std::cout << "The vector's maximum size is " << getCapacity(vec) << std::endl;

	for(int i= 0; i<513; i++)
		vec.push_back(28);

	std::cout << "The vector's size is now " << getSize(vec) << std::endl;

	std::cout << "The vector's maximum size is " << getCapacity(vec) << std::endl;

	return 1;
}