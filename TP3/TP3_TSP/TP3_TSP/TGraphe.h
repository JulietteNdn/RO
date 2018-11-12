#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "TSommet.h"

using namespace std;

class TGraphe
{
private:
	float ** matriceDistances;
	TSommet * sommets;
	int nbSommets; // = tailleMatrice
	char * nomFich;

public:
	TGraphe(char *);
	~TGraphe();
	int getNbSommets();
	void afficherMatrice();
};

