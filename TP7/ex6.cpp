#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include <random>

int main(){

    std::list<std::string> l_philo {"Platon", "Aristote", "Descartes", "Kant"};
    std::list<std::string> l_math {"Gauss", "Laplace", "PointCaré", "Descartes"};

	std::cout << "Liste l_philo : " << l_philo << std::endl;
	std::cout << "Liste l_math : " << l_math << std::endl;

	l_philo.sort();
	l_math.sort();

	std::cout << std::endl;

	std::cout << "Liste l_philo triée : " << l_philo << std::endl;
	std::cout << "Liste l_math triée : " << l_math << std::endl;

	std::list<std::string> l_all;
	l_philo.merge(l_math);

	std::copy(l_philo.begin(),l_philo.end(),back_inserter(l_all));

	std::cout << std::endl;

	std::cout << "Liste l_all : " << l_all << std::endl;

	l_all.unique();

	std::cout << std::endl;

	std::cout << "Liste l_all sans répétitions: " << l_all << std::endl;

	l_all.reverse();

	std::cout << std::endl;

	std::cout << "Liste l_all inversée: " << l_all << std::endl;

	return 1;
}
