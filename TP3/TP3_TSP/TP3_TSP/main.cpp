#include "TSommet.h"
#include "TGraphe.h"

using namespace std;

int main(void) {
	TSommet sommet1(2, 3);
	TSommet sommet2(1, 8);

	cout << sommet1['x'] << "\t" << sommet1['y'] << endl;
	cout << sommet2['x'] << "\t" << sommet2['y'] << endl;

	cout << "Distance : " << sommet1.calculerDistance(sommet2) << endl;



	TGraphe graphe("a280.tsp");

	graphe.afficherMatrice();

	return 0;
}