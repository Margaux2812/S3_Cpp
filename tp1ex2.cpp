#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main(){
	
	int nbSaisi;
	cout << "Saisissez un nombre" << endl;
	cin >> nbSaisi;

	if(nbSaisi == 79){
		cout << "Parfait" << endl;
	}else if(nbSaisi <= 0){
		cout << "Négatif" << endl;
	}else{
		cerr << "Strictement positif" << endl;
	}
	return 1;
}