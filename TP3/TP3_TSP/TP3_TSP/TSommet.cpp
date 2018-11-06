#include "TSommet.h"



TSommet::TSommet(float x, float y) : x(x), y(y) 
{
}


TSommet::~TSommet()
{
}

int TSommet::getId() const
{
	return id;
}


float const TSommet::operator[](const int i)
{
	if (i == 0)
		return x;
	else if (i == 1)
		return y;
	else
		return -1;
}

float const TSommet::calculerDistance(TSommet & aComparer)
{
	float distance;

	distance = pow(aComparer[0] - x,2) + pow(aComparer[1] - x, 2);
	distance = sqrt(distance);

	return distance;
}
