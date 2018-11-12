#include "TGraphe.h"


TGraphe::TGraphe(char * nom) : nomFich(nom)
{
	TSommet sommet;
	int distance;
	ifstream fichier;
	string ligne;
	fichier.open(nom);

	if (!fichier.fail()) {

		for (int i = 0; i < 3; i++)
			getline(fichier, ligne);

		fichier >> ligne; // on est à "Dimension", osef
		fichier >> nbSommets ;

		/* Allocations */
		sommets = new TSommet[nbSommets];
		matriceDistances = new float*[nbSommets];
		
		for (int i = 0; i < nbSommets; i++) {

			/* Remplissage du tableau des sommets */
			fichier >> ligne;
			fichier >> sommet['x'];
			fichier >> sommet['y'];
			sommets[i] = sommet;

			/* Allocation 2 de la matrice */
			matriceDistances[i] = new float[nbSommets];
		}

		for (int i = 0; i < nbSommets; i++){
			for (int j = 0; j <= i; j++) {
				distance = sommets[i].calculerDistance(sommets[j]);
				matriceDistances[i][j] = distance;
				matriceDistances[j][i] = distance; // car la matrice est symétrique
			}
		}
	}
	else {
		cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
		exit(1);
	}
}


TGraphe::~TGraphe()
{
	for (int i = 0; i < nbSommets; i++) {
		delete[] matriceDistances[i];
	}
	delete[] matriceDistances;

}

int TGraphe::getNbSommets() {
	return nbSommets;
}

void TGraphe::afficherMatrice() {

	for (int i = 0; i < nbSommets; i++) {
		cout << sommets[i]['x'] << " " << sommets[i]['y'] << endl;
	}

	/*
	for (int i = 0; i < nbSommets; i++) {
		cout << i << ". ";
		for (int j = 0; j < nbSommets; j++) {
			cout << matriceDistances[i][j] << " ";
		}
		cout << endl;
	}
	*/

}