#pragma once
#include "Player.h"
#include "Landscape.h"

class Field
{
	friend Player;
	int seed = 22565;
	static int length, width;
	char type;
	Landscape* lnd = nullptr;
public:
	Field(int, int, char = '\0');
	
	void draw();
};

