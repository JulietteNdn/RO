#include "TSommet.h"
#include <iostream>

using namespace std;

int main(void) {
	TSommet sommet1(2, 3);
	TSommet sommet2(1, 8);

	cout << sommet1[0] << "\t" << sommet1[1] << endl;
	cout << sommet2[0] << "\t" << sommet2[1] << endl;

	cout << "Distance : " << sommet1.calculerDistance(sommet2) << endl;

	return 0;
}