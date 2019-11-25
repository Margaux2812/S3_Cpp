#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

void displayData(std::vector<int> &vec){
	std::cout << "It has :" << std::endl;
	for(int n : vec)
		std::cout << n << std::endl;
}

void count7(std::vector<int> &vec){
	int number = 0;
	std::cout << "It has ";
	for(int n : vec)
		if(n == 7) number++;

	std::cout << number << " '7'" << std::endl;
}

int main(){

	std::random_device rnd_device;
    // Specify the engine and distribution.
    std::mt19937 mersenne_engine {rnd_device()};  // Generates random integers
    std::uniform_int_distribution<int> dist {0, 20};

    auto gen = [&dist, &mersenne_engine](){
                   return dist(mersenne_engine);
               };

    std::vector<int> vec(20);
    std::generate(begin(vec), end(vec), gen);

	displayData(vec);

	std::sort(vec.begin(), vec.end());

	displayData(vec);

	count7(vec);

	return 1;
}