#pragma once
#include <cmath>

class TSommet
{
private:
	float x;
	float y;
	int id;

public:
	TSommet(float, float);
	~TSommet();
	
	int getId() const;
	
	float const calculerDistance(TSommet &);
	float const operator[](const int);
};

