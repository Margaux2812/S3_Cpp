#include <iostream>
#include <math.h>
#include <stdlib.h>
#include "VectorD.hpp"

int main(){
	
	const size_t taille = 5;

	VectorD vector(taille);

	std::cout<<"La taille du vecteur est "<<vector.size()<<std::endl;

	VectorD second = vector;

	std::cout<<"La taille du second vecteur est "<<second.size()<<std::endl;

	return 1;
}