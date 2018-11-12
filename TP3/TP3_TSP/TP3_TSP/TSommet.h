#pragma once
#include <cmath>

class TSommet
{
private:
	float x;
	float y;
	int id;

public:
	TSommet();
	TSommet(float, float);
	~TSommet();
	
	int getId() const;
	
	float const calculerDistance(TSommet &);
	float & operator[](const char);
};

