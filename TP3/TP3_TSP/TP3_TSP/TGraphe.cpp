#include "TGraphe.h"


TGraphe::TGraphe(const int tailleMatrice) : nbSommets(tailleMatrice)
{
	matriceDistances = new float*[nbSommets];
	for (int i = 0; i < nbSommets; i++) {
		matriceDistances[i] = new float[nbSommets];
	}

}


TGraphe::~TGraphe()
{
	for (int i = 0; i < nbSommets; i++) {
		delete [] matriceDistances[i];
	}
	delete [] matriceDistances;

}
