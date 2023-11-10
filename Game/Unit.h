#pragma once
#include "Point.h"
#include <iostream>

class Unit
{
protected:
	int HP, strength, armor, cost;
	Point coords = { 1,1 };
	std::string name = "";
public:
	Unit(int hp, int str, int arm, int c) : HP(hp), strength(str), armor(arm), cost(c) {}

	virtual void draw() = 0;
	virtual void move_to(Point) = 0;

	virtual int getCost();
	void setCoords(Point);
	Point getCoords();

	friend std::ostream& operator<<(std::ostream&, const Unit*);
};

