#pragma once
#include "WithBaseAndHeight.h"

class Square : public WithBaseAndHeight
{
public:
	Square();
	Square(float aSide);
	float getArea();
	float getPerimeter();
	string showFormula();
};