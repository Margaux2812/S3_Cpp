// ================================
// POO C++ - IMAC 2
// TP 1 - Exercice 5
// ================================

#include<iostream>
#include<vector>

namespace TP_CPP_IMAC2
{
	int main(int argc, char *argv[])
	{
		std::vector<int> intVect;
		unsigned int taille;
		int elt;

		std::cout << "Taille : " << std::endl;
		std::cin >> taille;
		std::cout << "Entrez " << taille << " elements :" << std::endl;
		for(unsigned int i=0; i< taille; i++){
			std::cin >> elt;

			intVect.push_back(elt%10);
		}

		std::cout << "La taille du vecteur est maintenant : " << intVect.size() << std::endl;
		std::cout << "L'adresse mémoire des trois premiers éléments est : " << &intVect[0] << " " << &intVect[1] << " et " << &intVect[2] << std::endl;
		std::cout << "Leur taille est respectivement " << sizeof intVect[0] << " " << sizeof intVect[1] << " et " << sizeof intVect[2] << std::endl;
	
		intVect.pop_back();

		for(unsigned int i = 0; i<intVect.size(); i++){
			std::cout << intVect.at(i) << std::endl;
		}

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


