#pragma once
#include "Range.h"

class Crossbower : public Range
{
public:
	Crossbower() : Range(3, 2, 2, 3) 
	{
		name = "Crossbower";
	}

	void draw();

	void move_to(Point);
};

