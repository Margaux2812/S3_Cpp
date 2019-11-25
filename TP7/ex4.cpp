#include <iostream>
#include <deque>
#include <algorithm>
#include <random>

void displayData(std::deque<int> &deq){
	for(int n : deq)
		std::cout << n << " ";
	std::cout << std::endl;
}

int main(){
	
	std::random_device rnd_device;
    // Specify the engine and distribution.
    std::mt19937 mersenne_engine {rnd_device()};  // Generates random integers
    std::uniform_int_distribution<int> dist {0, 20};

    auto gen = [&dist, &mersenne_engine](){
                   return dist(mersenne_engine);
               };

    std::deque<int> d(5);
    std::generate(begin(d), end(d), gen);

	std::cout << "Initialisation de la deque : ";
	displayData(d);
	std::cout << "Introduction de 2 : ";
	d.push_front(2);
	d.pop_back();
	displayData(d);

	std::cout << "Introduction de 4 : ";
	d.push_front(4);
	d.pop_back();
	displayData(d);

	std::cout << "Introduction de 8 : ";
	d.push_front(8);
	d.pop_back();
	displayData(d);

	return 1;
}
