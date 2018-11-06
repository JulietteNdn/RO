#pragma once
class TGraphe
{
private:
	float ** matriceDistances;
	const int nbSommets; // = tailleMatrice

public:
	TGraphe(int);
	~TGraphe();
};

