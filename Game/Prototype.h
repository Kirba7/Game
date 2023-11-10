#pragma once
#include "Landscape.h"

class Prototype : public Landscape
{
public:
	Prototype(int length, int width, int seed) : Landscape(length, width, seed) {}
	void draw();
};