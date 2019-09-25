#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <stdlib.h>
using namespace std;

int maxValue(int* array, unsigned int taille){

	int max = array[0];

	for(int i= 1; i< taille; i++){
		if(max < array[i])
			max = array[i];
	}

	return max;
}

int main(){
	
	unsigned int taille;
	int nb;

	cout << "Définissez la taille de votre tableau" << endl;
	cin >> taille;

	int *monTableau = new int[taille];

	cout << "Saisissez " << taille << " entiers à mettre dans votre tableau" << endl;
	for(int i = 0; i<taille; i++){
		cin >> nb;
		monTableau[i] = nb;
	}

	if(taille >= 3){
		cout << "L'adresse mémoire des trois premiers éléments est : " << &(monTableau[0]) << " " << &(monTableau[1]) << " et " << &(monTableau[2]) << endl;
		cout << "Leur taille est respectivement " << sizeof monTableau[0] << " " << sizeof monTableau[1] << " et " << sizeof monTableau[2] << endl;
	}

	cout << "Le premier élément est " << *monTableau << endl;

	if(taille >= 5)
		cout << "Le cinquieme élément est " << *(monTableau+4) << endl;


	cout << "Le plus grand element est : " << maxValue(monTableau, taille) << endl;

	delete[] monTableau;

	return 1;
}