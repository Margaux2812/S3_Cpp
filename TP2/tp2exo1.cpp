#include <iostream>
#include <math.h>
#include <stdlib.h>
#include "VectorD.hpp"
#include <fstream>

int main(){
	
	const size_t taille = 5;

	VectorD vector(taille);

	std::cout<<"La taille du vecteur est "<<vector.size()<<std::endl;

	VectorD second = vector;
	second[2] = 5;

	std::cout<<"La taille du second vecteur est "<<second.size()<<std::endl;

	second.save("coucou.txt");

	VectorD testLoad = VectorD::load("coucou.txt");

	std::cout<<"La taille du vecteur test est "<<testLoad.size()<<std::endl;
	testLoad[3] = 42;
	std::cout<<testLoad<<std::endl;

	VectorD res = testLoad + second;

	std::cout<<res<<std::endl;
	return 1;
}