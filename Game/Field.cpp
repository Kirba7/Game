#include "Field.h"
#include "Point.h"

#include "Desert.h"
#include "Forest.h"
#include "Tundra.h"
#include "Prototype.h"

#include <iostream>

int Field::length, Field::width;

Field::Field(int l, int w, char ty) : type(ty)
{
	length = l;
	width = w;

	switch (type)
	{
	case 'd':
	case 'D':
		lnd = new Desert(length, width, seed);
		break;
	case 'f':
	case 'F':
		lnd = new Forest(length, width, seed);
		break;
	case 't':
	case 'T':
		lnd = new Tundra(length, width, seed);
		break;
	default:
		lnd = new Prototype(length, width, seed);
	}
}

void Field::draw()
{
	lnd->draw();
}