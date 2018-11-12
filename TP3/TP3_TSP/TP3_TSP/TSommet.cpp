#include "TSommet.h"



TSommet::TSommet()
{
}

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


float & TSommet::operator[](const char c)
{
	if (c == 'x') 
		return x;
	else
		return y;
}

float const TSommet::calculerDistance(TSommet & aComparer)
{
	float distance;

	distance = pow(aComparer['x'] - x,2) + pow(aComparer['y'] - y, 2);
	distance = sqrt(distance);

	return distance;
}
