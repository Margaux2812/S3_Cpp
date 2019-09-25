#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main(){
	
	string chaine;
	cout << "Saisissez une chaine de caractères" << endl;
	cin >> chaine;

	cout << "String size : " << chaine.size() << endl << "Last element : " << chaine.back() << endl;
	chaine.pop_back();
	cout << "String size : " << chaine.size() << endl << "Last element : " << chaine << endl;
	cout << "Ma nouvelle chaine : " << "IMAC" + chaine << endl;
	return 1;
}