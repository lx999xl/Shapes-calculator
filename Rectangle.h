#pragma once
#include "WithBaseAndHeight.h"

class Rectangle : public WithBaseAndHeight
{
public:
	Rectangle();
	Rectangle(float aBase, float aSide);
	float getArea();
	float getPerimeter();
	string showFormula();
};
