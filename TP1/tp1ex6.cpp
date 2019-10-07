// ================================
// POO C++ - IMAC 2
// TP 1 - Exercice 5
// ================================

#include<iostream>
#include<vector>
#include<numeric>
#include "chrono.hpp"

namespace TP_CPP_IMAC2
{

	float mean(const std::vector<int> &array){
		long int sum = std::accumulate(array.begin(), array.end(), 0);

		return (float)sum/(float)array.size();

	}

	float meanCopy(const std::vector<int> array){
		long int sum = std::accumulate(array.begin(), array.end(), 0);

		return (float)sum/(float)array.size();

	}

	int main(int argc, char *argv[])
	{
		std::vector<int> intVect;
		unsigned int taille;

		std::cout << "Taille : " << std::endl;
		std::cin >> taille;
		for(unsigned int i=0; i< taille; i++){
			intVect.push_back(i%10);
		}

		std::cout << "La taille du vecteur est maintenant : " << intVect.size() << std::endl;
		std::cout << "L'adresse mémoire des trois premiers éléments est : " << &intVect[0] << " " << &intVect[1] << " et " << &intVect[2] << std::endl;
		std::cout << "Leur taille est respectivement " << sizeof intVect[0] << " " << sizeof intVect[1] << " et " << sizeof intVect[2] << std::endl;
	
		std::cout << "Calculons la moyenne" << std::endl;

		Chrono chrono1;
		chrono1.start();
		std::cout << mean(intVect) <<std::endl;	
		chrono1.stop();
		std::cout << "Time: " << chrono1.timeSpan() << " s" << std::endl;

		Chrono chrono2;
		chrono2.start();		
		std::cout << meanCopy(intVect) <<std::endl;
		chrono2.stop();
		std::cout << "Time: " << chrono2.timeSpan() << " s" << std::endl;

		intVect.pop_back();

		std::cout << "Tout va s'effacer" << std::endl;

		//intVect.erase(intVect.begin(), intVect.end());
		intVect.clear();

		std::cout << intVect.size() << std::endl;

		return 0;
	}
}

// Fonction main classique, point d'entr�e du programme
int main(int argc, char *argv[])
{

	

	// Appel de la fonction main de l'espace de nom TP_CPP_IMAC2
	return TP_CPP_IMAC2::main(argc, argv);
}


