#pragma once
#include "WithBaseAndHeight.h"

class Triangle : public WithBaseAndHeight
{
public:
	Triangle();
	Triangle(float aSide, float aBase, float aHeight);
	float getArea();
	float getPerimeter();
	string showFormula();
};